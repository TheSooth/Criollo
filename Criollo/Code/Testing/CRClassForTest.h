//
//  CRClassForTest.h
//  Criollo
//
//  Created by Vladimir Shevchenko on 13.09.13.
//  Copyright (c) 2013 Sheva. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CRProtocolToTest.h"

@interface CRClassForTest : NSObject

@property (nonatomic, strong) id <CRProtocolToTest> testDependency;

@end
