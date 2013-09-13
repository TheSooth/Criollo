//
// Created by Vladimir Shevchenko on 13.09.13.
// Copyright (c) 2013 Sheva. All rights reserved.



#import <Foundation/Foundation.h>

@class CRConfigurationModule;
@interface CRDependencyContainer : NSObject

+ (void)storeModule:(CRConfigurationModule *)aModule;
+ (Class)getImplementationClassOfProtocol:(Protocol *)protocol;
+ (Class)getImpostorClassOfClass:(Class)aClass;

@end