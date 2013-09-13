//
// Created by Vladimir Shevchenko on 13.09.13.
// Copyright (c) 2013 Sheva. All rights reserved.



#import <Foundation/Foundation.h>


@interface CRDependencyBuilder : NSObject

+ (id)buildInstanceOfProtocolImplementation:(Protocol *)aProtocol;

@end