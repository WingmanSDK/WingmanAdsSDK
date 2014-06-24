//
//  WMAds.h
//  WMAds
//
//  Created by Bob de Graaf on 02-01-13.
//  Copyright (c) 2013 MobilePioneers. All rights reserved.
//

#import <MessageUI/MessageUI.h>

@class WMAdSpecs;

//Code for adding Notification
/*[[NSNotificationCenter defaultCenter] addObserver:self
                                        selector:@selector(adsXMLRefreshed)
                                             name:kWMAdsRefreshNotification
                                           object:nil];*/
@protocol WMAdsIAPDelegate <NSObject>
- (void)didStartIAP;
- (void)didEndIAP; // called when IAP cancels, fails, succeeds (restore & purchase) -> (do something i.e. hide loading spinner)
- (void)didPurchaseNoAds;
@end

@protocol WMAdsIASDelegate <NSObject>
- (void)didStartIAS;
- (void)didEndIAS; // called when IAS cancels, fails, succeeds (restore & purchase) -> (do something i.e. hide loading spinner)
@end

@interface WMAds : NSObject <MFMailComposeViewControllerDelegate, UIAlertViewDelegate>
{
    bool loading;
    
    NSMutableDictionary *adsDict;
    NSMutableDictionary *headersDict;
    NSMutableDictionary *cappingAdIDs;
    
    CGRect box2DFrame;
    NSString *adURLStr;
    NSString *mailPopupText;
    NSString *noAdsProductID;
    NSString *targetingString;
    UIWindow *box2DParentWindow;
    NSMutableArray *fullscreenIDs;
    UIViewController *fullScreenParentVC;
}

//In App Purchase
-(void)restoreIAP;
-(void)purchaseIAP;
-(void)purchaseIAS:(NSString *)appstoreID;
-(void)setIAPProductID:(NSString *)productID;

//Loaders
-(void)startThread;
-(BOOL)canLoadAd:(WMAdSpecs *)specs;
-(void)willLoadAd:(WMAdSpecs *)specs;
-(void)refreshAdXML:(NSString *)urlStr;
-(void)openInAppEmail:(NSString*)mailSubject mailBody:(NSString*)mailBody mailTo:(NSString *)mailTo isHtml:(BOOL)isHtml;

@property(nonatomic) bool loading;
@property(nonatomic) CGRect box2DFrame;
@property(nonatomic) UIBarStyle barStyle;
@property(nonatomic,strong) NSString *adURLStr;
@property(nonatomic,strong) NSString *mailPopupText;
@property(nonatomic,strong) NSString *noAdsProductID;
@property(nonatomic,strong) NSString *targetingString;
@property(nonatomic,strong) UIWindow *box2DParentWindow;
@property(nonatomic,strong) NSMutableDictionary *adsDict;
@property(nonatomic,strong) NSMutableDictionary *headersDict;
@property(nonatomic,strong) UIViewController *fullScreenParentVC;
@property(nonatomic,assign) id<WMAdsIASDelegate>inAppStoreDelegate;
@property(nonatomic,assign) id<WMAdsIAPDelegate>inAppPurchaseDelegate;

+(WMAds *)sharedWMAds;

@end