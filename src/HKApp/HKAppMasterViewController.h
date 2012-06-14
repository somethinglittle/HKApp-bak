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

@interface HKAppMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) HKAppDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
