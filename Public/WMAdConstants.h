//
//  WMAdConstants.h
//
//  Created by Bob de Graaf on 23-09-12.
//  Copyright (c) 2012 MobilePioneers. All rights reserved.
//

#import <BDGMacros.h>
#import <InAppStore.h>
#import <InAppPurchase.h>
#import <LocationGetter.h>

#import "WMAds.h"

//Singletons
#define wmAds           [WMAds sharedWMAds]
#define wmIAStore       [InAppStore sharedInAppStore]
#define wmIAPurchase    [InAppPurchase sharedInAppPurchase]
#define wmLocGetter     [LocationGetter sharedLocationGetter]

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