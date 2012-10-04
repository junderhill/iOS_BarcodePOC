//
//  PTAppDelegate.h
//  BarcodeReader
//
//  Created by Jason Underhill on 04/10/2012.
//  Copyright (c) 2012 Jason Underhill. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PTViewController;

@interface PTAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) PTViewController *viewController;

@end
