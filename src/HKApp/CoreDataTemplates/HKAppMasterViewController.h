//
//  HKAppMasterViewController.h
//  HKApp
//
//  Created by Casper Lee on 14/6/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HKAppDetailViewController;

#import <CoreData/CoreData.h>

typedef enum {
	FEAUTRED_CELL_IMAGE = 1,
	FEAUTRED_CELL_TITLE = 2,
	FEAUTRED_CELL_LOCATION = 3
} FEAUTRED_CELL_TAG;

typedef enum {
	NORMAL_CELL_1_IMAGE = 1,
	NORMAL_CELL_1_LOCATION = 2,
    NORMAL_CELL_2_IAMGE = 3,
    NORMAL_CELL_2_LOCATION = 4
} EAUTRED_CELL_TAG;

@interface HKAppMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) HKAppDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

-(int) getNumberOfFeaturedCell;
- (void)cellOnClick;


@end
