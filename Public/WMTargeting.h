//
//  WMTargeting.h
//  Wingman
//
//  Created by Bob de Graaf on 28-01-14.
//  Copyright (c) 2014 Adappt. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WMTargeting : NSObject
{
    
}

//Shared Instance
+(WMTargeting *)sharedWMTargeting;

/*
 *  If you're using the WMTargeting separately from the WingmanAdsSDK, you need to init the WMTargeting like this: [WMTargeting sharedWMTargeting].apiKey = @"APPIDYOUGOTFROMWINGMAN";
 */
@property(nonatomic,strong) NSString *apiKey;

/*
 *  The bucketsDictionary is an array of buckets you can ask at any time. The buckets are automatically filled by wingman while it sends/retrieves data.
 *  These buckets can be used by developers to give to their ad frameworks as additional parameters/targets.
 */
@property(nonatomic,strong) NSMutableDictionary *bucketsDictionary;

/*
 *  The WingmanSDK automatically retrieves buckets on applicationDidBecomeActive but this method can be called manually if necessary
 */
-(void)retrieveBuckets;

/*
 *  Add a location update to the database, this is a separate call as locations are separated from other buckets
 *
 *  @param latitude  CLLocation latitude
 *  @param longitude CLLocation longitude
 */
-(void)addLocationUpdate:(float)latitude longitude:(float)longitude;

/*
 *  Add an action using a dictionary, for example: {@"ChannelOpened":@"Veronica"}, or: {@"ProgramOpened":@"Top Gear"}
 *
 *  @param dictionary  The dictionary containing one/multiple actions of the user
 *  @param immediately The actions are automatically uploaded every minute, but if you need it immediately, use this boolean
 */
-(void)addAction:(NSMutableDictionary *)dictionary;
-(void)addAction:(NSMutableDictionary *)dictionary immediately:(BOOL)immediately;

@end