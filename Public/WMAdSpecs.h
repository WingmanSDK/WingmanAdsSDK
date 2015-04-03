//
//  WMAdSpecs.h
//
//  Created by Bob de Graaf on 08-08-11.
//  Copyright 2011 Mobile Pioneers. All rights reserved.
//

#import <Foundation/Foundation.h>

//AdTypes
typedef enum {
    kAdTypeWeb=0,
    kAdTypeAdmob,
    kAdTypeFlurry,
    kAdTypeMads,
    kAdTypeWideSpace,
    kAdTypeiAd,
    kAdTypeVideoStrip
} AdType;

@interface WMAdSpecs : NSObject
{

}

//General
@property(nonatomic) AdType adType;
@property(nonatomic,strong) NSString *adID;
@property(nonatomic,strong) NSString *adURL;
@property(nonatomic,strong) NSString *adTitle;
@property(nonatomic,strong) NSString *mailBody;
@property(nonatomic,strong) NSString *bannerURL;
@property(nonatomic,strong) NSString *appStoreID;
@property(nonatomic,strong) NSString *admobID;
@property(nonatomic,strong) NSString *bannerTitle;
@property(nonatomic,strong) NSString *mailSubject;
@property(nonatomic,strong) NSString *sectionTitle;
@property(nonatomic,strong) NSString *flurryAdSpace;
@property(nonatomic,strong) NSString *videoThumbURL;
@property(nonatomic,strong) NSString *mailToAddress;
@property(nonatomic,strong) NSString *mailSentPopupText;
@property(nonatomic,strong) NSString *measureSeeURL;
@property(nonatomic,strong) NSString *measureClickURL;
@property(nonatomic,strong) NSString *imageAdImageURL;
@property(nonatomic,strong) NSString *box2DImageURL;
@property(nonatomic,strong) NSString *box2DPopupImageURL;

@property(nonatomic) int interval;
@property(nonatomic) int startInterval;
@property(nonatomic) int adAnim;
@property(nonatomic) int siteID;
@property(nonatomic) int adRow;
@property(nonatomic) int adSection;
@property(nonatomic) int adHeight;
@property(nonatomic) int adDelay;
@property(nonatomic) int buttonDelay;
@property(nonatomic) bool active;
@property(nonatomic) bool overlay;
@property(nonatomic) bool inlineOverlay;
@property(nonatomic) bool IAPPossible;
@property(nonatomic) bool directAppStore;

//MadsAd
@property(nonatomic,strong) NSString *madsZoneID;

//WideSpace
@property(nonatomic,strong) NSString *wideSpaceID;

//Video Ad
@property(nonatomic) int soundOn;
@property(nonatomic) int numberOfTimes;
@property(nonatomic) int delayBetweenAds;
@property(nonatomic) int timeAfterVideoIsPlayed;

//Box2D Ad
@property(nonatomic)float angle;
@property(nonatomic)float startX;
@property(nonatomic)float startY;
@property(nonatomic)float gravity;
@property(nonatomic)float density;
@property(nonatomic)float friction;
@property(nonatomic)float restitution;
@property(nonatomic,strong) UIImage *box2DImage;
@property(nonatomic,strong) UIImage *popupImage;

@end
