//
//  HKAppDataManager.m
//  HKApp
//
//  Created by Casper Lee on 15/6/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "HKAppDataManager.h"

#pragma mark - Private Interface

@interface HKAppDataManager (private)

+(id) sharedManager;
- (NSString*) getServerVersion;

@end



#pragma mark - Implementation

@implementation HKAppDataManager

static HKAppDataManager* _sharedInstance;

+(HKAppDataManager*) sharedManager;
{
  if (!_sharedInstance) {
    @synchronized (self)
    {
      _sharedInstance = [[self alloc] init];
      SRObjectManager* objectManager = [SRObjectManager objectManagerForAccountId:SRAccountID authenticationToken:SRAuthenticationToken ssl:YES];
      objectManager.objectStore = [RKManagedObjectStore objectStoreWithStoreFilename:@"HKApp.sqlite"];
      objectManager.client.requestQueue.showsNetworkActivityIndicatorWhenBusy = YES;
    } 
  }
  return _sharedInstance;
}

#pragma mark Request By Attraction

- (void)requestSpotsForAttractionID:(NSString*)identifier withDelegate:(id<HKAppRequestByAttractionDelegate>)delegate;
{
  
}


- (void)requestMapForAttractionID:(NSString*)identifier withDelegate:(id<HKAppRequestByAttractionDelegate>)delegate;
{
  
}


- (void)requestAllAttractionsWithDelegate:(id<HKAppRequestByAttractionDelegate>)delegate;
{
  
}

#pragma mark Request By Spot

- (void)requestInfoForSpotID:(NSString*)identifier withDelegate:(id<HKAppRequestBySpotDelegate>)delegate;
{
  
}
- (void)requestImageForSpotID:(NSString*)identifier withDelegate:(id<HKAppRequestBySpotDelegate>)delegate;
{
  
}
- (void)requestMapForSpotID:(NSString*)identifier withDelegate:(id<HKAppRequestBySpotDelegate>)delegate;
{
  
}

#pragma mark Request Config Info

- (void)checkAppVersionWithDelegate:(id<HKAppRequestConfigInfoDelegate>)delegate;
{
  
}
- (void)getCreditsImagesWithDelegate:(id<HKAppRequestConfigInfoDelegate>)delegate;
{
  
}

#pragma mark RKObjectLoaderDelegate methods

- (void)requestDidStartLoad:(RKRequest *)request {
}

- (void)request:(RKRequest *)request didLoadResponse:(RKResponse *)response {
}

- (void)objectLoader:(RKObjectLoader *)anObjectLoader didLoadObject:(SRArray *)anArray {
}

- (void)objectLoader:(RKObjectLoader *)anObjectLoader didFailWithError:(NSError *)anError {
}

@end
