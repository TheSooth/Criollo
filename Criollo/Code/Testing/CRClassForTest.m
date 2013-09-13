//
//  CRClassForTest.m
//  Criollo
//
//  Created by Vladimir Shevchenko on 13.09.13.
//  Copyright (c) 2013 Sheva. All rights reserved.
//

#import "CRClassForTest.h"
#import <Objection.h>

@implementation CRClassForTest

objection_requires(@"testDependency");

@synthesize testDependency;

@end
