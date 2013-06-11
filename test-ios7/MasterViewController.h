//
//  MasterViewController.h
//  test-ios7
//
//  Created by Mario Adrian on 11.06.13.
//  Copyright (c) 2013 -. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
