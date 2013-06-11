//
//  DetailViewController.h
//  test-ios7
//
//  Created by Mario Adrian on 11.06.13.
//  Copyright (c) 2013 -. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
