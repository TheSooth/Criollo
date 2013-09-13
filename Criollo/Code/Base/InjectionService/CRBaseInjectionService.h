//
// Created by Vladimir Shevchenko on 13.09.13.
// Copyright (c) 2013 Sheva. All rights reserved.



#import <Foundation/Foundation.h>
#import "CRConfigurationProtocol.h"

@interface CRBaseInjectionService : NSObject <CRConfigurationProtocol>

@property (nonatomic, strong) NSArray *bindingsArray;

+ (instancetype)sharedInstance;

@end