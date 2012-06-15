//
//  HKAppDataRequestDelegate.h
//  HKApp
//
//  Created by Casper Lee on 15/6/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol HKAppRequestByAttractionDelegate <NSObject>

@required
- (void)spotsDidReceive:(NSArray*)spotsArray forAttractionID:(NSString*)attractionID;
- (void)mapDidReceive:(UIView*)mapView forAttractionID:(NSString*)attractionID;
- (void)attractionsDidReceive;
@end



@protocol HKAppRequestBySpotDelegate <NSObject>

@required
- (void)infoDidReceive:(NSDictionary*)spotInfo forSpotID:(NSString*)spotID;
- (void)imageDidReceive:(UIImageView*)spotImage forSpotID:(NSString*)spotID;
- (void)mapDidReceive:(UIView*)mapView forSpotID:(NSString*)spotID;
@end



@protocol HKAppRequestConfigInfoDelegate <NSObject>

@required
- (void)appVersionDidReceive:(NSString*)appVersion;
- (void)creditsImagesDidReceive:(NSArray*)imagesArray;
@end
