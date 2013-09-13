//
//  CRAppDelegate.m
//  Criollo
//
//  Created by Vladimir Shevchenko on 11.09.13.
//  Copyright (c) 2013 Sheva. All rights reserved.
//

#import "CRAppDelegate.h"
#import "CRClassForTest.h"
#import "CRProtocolToTest.h"
#import "CRObjectionBaseModule.h"
#import "CRObjectionService.h"
#import "CRClassWithProtocol.h"

@implementation CRAppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    // Override point for customization after application launch.
    self.window.backgroundColor = [UIColor whiteColor];
    [self.window makeKeyAndVisible];
    
    
    [CRObjectionBaseModule bindClass:[CRClassWithProtocol class] withIUnterface:@protocol(CRProtocolToTest)];
    
    [CRObjectionService startService];
    
    CRClassForTest *testObject = [CRObjectionService getObjectForClass:[CRClassForTest class]];
    
    if ([testObject.testDependency isKindOfClass:[CRClassWithProtocol class]])
        NSLog(@"WOOHO");
    
    return YES;
}

@end
