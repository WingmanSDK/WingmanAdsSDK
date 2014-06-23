//
//  WMAdBannerView.h
//
//  Created by Bob de Graaf on 09-01-11.
//  Copyright 2011 Mobile Pioneers. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "WMAdSpecs.h"

@class WMAdBannerView;

@protocol WMAdBannerViewDelegate <NSObject>
@optional
-(void)WMAdsExitAd:(WMAdBannerView *)adSmallView;
-(void)WMAdsWillCloseAd:(WMAdBannerView *)adSmallView;
-(void)WMAdsWillNotLoadAd:(WMAdBannerView *)adSmallView;
-(void)WMAdsVideoDidFinish:(WMAdBannerView *)adSmallView;
-(void)WMAdsAdLoadCompleted:(WMAdBannerView *)adSmallView;
-(void)WMAdsWillEndFullScreen:(WMAdBannerView *)adSmallView;
-(void)WMAdsWillStartFullScreen:(WMAdBannerView *)adSmallView;
-(void)WMAdsDidResizeAd:(WMAdBannerView *)adSmallView finalWidth:(CGFloat)finalWidth finalHeight:(CGFloat)finalHeight;
@end

@interface WMAdBannerView : UIView
{
       
}

//Booleans
@property(nonatomic) bool canExit;
@property(nonatomic) bool interstitialReady;

//Floats
@property(nonatomic) float adWidth;
@property(nonatomic) float adHeight;

//Strong
@property(nonatomic,strong) WMAdSpecs *specs;
@property(nonatomic,strong) NSString *adMobID;
@property(nonatomic,strong) UIViewController *parent;
@property(nonatomic,strong) NSArray *admobTestDevices;
@property(nonatomic,strong) NSMutableDictionary *headersDict;
@property(nonatomic,assign) id <WMAdBannerViewDelegate> delegate;

-(void)clearAds;
-(void)reloadURL;
-(void)measureAd;
-(void)showInterstitial;
-(void)loadAd:(NSString *)viewName;
-(id)initWithFrame:(CGRect)frame parent:(UIViewController *)parent;

@end