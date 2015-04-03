//
//  WMAds.h
//  WMAds
//
//  Created by Bob de Graaf on 02-01-13.
//  Copyright (c) 2013 MobilePioneers. All rights reserved.
//

#import <MessageUI/MessageUI.h>

@class WMAdSpecs;

//In-App Purchase protocol
@protocol WMAdsIAPDelegate <NSObject>
- (void)didStartIAP;
- (void)didEndIAP;
- (void)didPurchaseNoAds;
@end

//In-App Store protocol
@protocol WMAdsIASDelegate <NSObject>
- (void)didStartIAS;
- (void)didEndIAS;
@end

//LogginLevel
typedef enum {
    WMLogWarnings=0,
    WMLogEverything,
    WMLogNothing
} WMLoggingLevel;

@interface WMAds : NSObject <MFMailComposeViewControllerDelegate, UIAlertViewDelegate>
{
    
}

//In App Purchase
-(void)restoreIAP;
-(void)purchaseIAP;
-(void)purchaseIAS:(NSString *)appstoreID;
-(void)setIAPProductID:(NSString *)productID;

//General
-(void)loadAds;
-(BOOL)canLoadAd:(WMAdSpecs *)specs;
-(void)willLoadAd:(WMAdSpecs *)specs;
-(void)refreshAdXML:(NSString *)urlStr;
-(void)logWarning:(NSString *)message, ... NS_FORMAT_FUNCTION(1,2);
-(void)logInformation:(NSString *)message, ... NS_FORMAT_FUNCTION(1,2);
-(void)openInAppEmail:(NSString*)mailSubject mailBody:(NSString*)mailBody mailTo:(NSString *)mailTo isHtml:(BOOL)isHtml;

//Primitives
@property(nonatomic) bool loading;
@property(nonatomic) CGRect box2DFrame;
@property(nonatomic) UIBarStyle barStyle;
@property(nonatomic) WMLoggingLevel loggingLevel;

//Strong
@property(nonatomic,strong) NSString *apiKey;
@property(nonatomic,strong) NSString *apiPath;
@property(nonatomic,strong) NSString *adURLStr;
@property(nonatomic,strong) NSString *mailPopupText;
@property(nonatomic,strong) NSString *noAdsProductID;
@property(nonatomic,strong) UIWindow *box2DParentWindow;
@property(nonatomic,strong) NSMutableDictionary *adsDict;
@property(nonatomic,strong) NSMutableDictionary *headersDict;
@property(nonatomic,strong) UIViewController *fullScreenParentVC;
@property(nonatomic,strong) NSMutableArray *log;

//Delegates
@property(nonatomic,assign) id<WMAdsIASDelegate>inAppStoreDelegate;
@property(nonatomic,assign) id<WMAdsIAPDelegate>inAppPurchaseDelegate;

//Shared instance
+(WMAds *)sharedWMAds;

@end