//
//  MasterViewController.h
//  testxcode
//
//  Created by Ruhm on 8/7/13.
//  Copyright (c) 2013 Ruhm. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
