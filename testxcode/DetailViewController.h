//
//  DetailViewController.h
//  testxcode
//
//  Created by Ruhm on 8/7/13.
//  Copyright (c) 2013 Ruhm. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
