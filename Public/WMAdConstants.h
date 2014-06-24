//
//  WMConstants.h
//
//  Created by Bob de Graaf on 23-09-12.
//  Copyright (c) 2012 MobilePioneers. All rights reserved.
//

#import <BDGMacros.h>
#import <BDGLocation.h>
#import <BDGInAppPurchase.h>

#import "WMAds.h"

//Singletons
#define wmAds           [WMAds sharedWMAds]
#define locGetter       [BDGLocation sharedBDGLocation]
#define wmIAPurchase    [BDGInAppPurchase sharedBDGInAppPurchase]

//Notifications
#define kWMAdsRefreshNotification               @"kWMAdsRefreshNotification"
#define kWMAdsPopupAppearedNotification         @"kWMAdsPopupAppearedNotification"
#define kWMAdsPopupDisappearedNotification      @"kWMAdsPopupDisappeardNotification"
#define kWMAdsNoAdsIAPPurchasedNotification     @"kWMAdsNoAdsIAPPurchasedNotification"

//GPS Keys
#define kGPSTimesAsked                          @"kGPSTimesAsked"
#define kGPSLastRefresh                         @"kGPSLastRefresh"
#define kGPSLastLatitude                        @"kLastGPSLatitude"
#define kGPSLastLongitude                       @"kLastGPSLongitude"
#define kGPSPermissionChanged                   @"kGPSPermissionChanged"
#define kGPSPermissionGranted                   @"kGPSPermissionGranted"
#define kWMAdsGPSApplePopupAnswered             @"kWMAdsGPSApplePopupAnswered"
#define kWMAdsGPSCustomPopupAnswered            @"kWMAdsGPSCustomPopupAnswered"

//IAP Keys
#define kPurchasedNoAds                         @"kPurchasedNoWMAds"