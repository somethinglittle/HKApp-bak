//
//  HKAppDataManager.h
//  HKApp
//
//  Created by Casper Lee on 15/6/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HKAppDataRequestDelegate.h"

@interface HKAppDataManager : NSObject <RKObjectLoaderDelegate>



+(HKAppDataManager*) sharedManager;

// Methods

- (void)requestAllAttractionsWithDelegate:(id<HKAppRequestByAttractionDelegate>)delegate;
- (void)requestSpotsForAttractionID:(NSString*)identifier withDelegate:(id<HKAppRequestByAttractionDelegate>)delegate;
- (void)requestMapForAttractionID:(NSString*)identifier withDelegate:(id<HKAppRequestByAttractionDelegate>)delegate;

- (void)requestInfoForSpotID:(NSString*)identifier withDelegate:(id<HKAppRequestBySpotDelegate>)delegate;
- (void)requestImageForSpotID:(NSString*)identifier withDelegate:(id<HKAppRequestBySpotDelegate>)delegate;
- (void)requestMapForSpotID:(NSString*)identifier withDelegate:(id<HKAppRequestBySpotDelegate>)delegate;


- (void)checkAppVersionWithDelegate:(id<HKAppRequestConfigInfoDelegate>)delegate;
- (void)getCreditsImagesWithDelegate:(id<HKAppRequestConfigInfoDelegate>)delegate;

@end
