//
//  GetSpecs.h
//  MPAds
//
//  Created by Bob de Graaf on 11-01-11.
//  Copyright 2011 MobilePioneers. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GetSpecs : NSObject 
{
    NSDateFormatter *df;
}

+(GetSpecs *)sharedGetSpecs;

-(void)setCarrier;
-(BOOL)fastDevice;
-(NSString *)getPlatform;
-(NSString *)getMailBody;
-(NSMutableDictionary *)getSpecs;

@end