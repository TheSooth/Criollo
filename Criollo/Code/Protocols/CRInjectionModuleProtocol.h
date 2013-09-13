//
//  CRInjectionModuleProtocol.h
//  Criollo
//
//  Created by Vladimir Shevchenko on 13.09.13.
//  Copyright (c) 2013 Sheva. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol CRInjectionModuleProtocol <NSObject>

+ (void)bindClass:(Class)cls withIUnterface:(Protocol *)protocol;

@end
