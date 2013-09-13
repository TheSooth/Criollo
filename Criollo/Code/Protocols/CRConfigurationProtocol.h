//
// Created by Vladimir Shevchenko on 13.09.13.
// Copyright (c) 2013 Sheva. All rights reserved.



#import <Foundation/Foundation.h>
#import "CRInjectionModuleProtocol.h"
#import "CRBindModel.h"

@protocol CRConfigurationProtocol <NSObject>

+ (void)startService;

+ (void)registerBindModel:(CRBindModel *)aBindModel;

+ (id)getObjectForClass:(Class)aClass;

@end