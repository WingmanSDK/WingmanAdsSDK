//
//  DeviceSpecs.h
//  Wingman
//
//  Created by Bob de Graaf on 11-01-11.
//  Copyright 2011 GraafICT. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface DeviceSpecs : NSObject
{
    
}

-(NSMutableDictionary *)getSpecs;
-(NSString *)getSpecsStringForEmail;

+(DeviceSpecs *)sharedDeviceSpecs;

@end