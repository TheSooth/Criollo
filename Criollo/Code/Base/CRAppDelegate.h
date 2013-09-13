//
//  CRAppDelegate.h
//  Criollo
//
//  Created by Vladimir Shevchenko on 11.09.13.
//  Copyright (c) 2013 Sheva. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CRAppDelegateModules.h"

@interface CRAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (nonatomic, strong) id <CRApplicationLifetimeDelegate> 

@end
