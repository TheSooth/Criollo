//
//  CRObjectionBaseModule.m
//  Criollo
//
//  Created by Vladimir Shevchenko on 13.09.13.
//  Copyright (c) 2013 Sheva. All rights reserved.
//

#import "CRObjectionBaseModule.h"
#import "CRObjectionService.h"

@implementation CRObjectionBaseModule

+ (void)configure {}

+ (void)bindClass:(Class)cls withIUnterface:(Protocol *)protocol
{
    CRBindModel *bindModel = [[CRBindModel alloc] initWithClassForInject:cls protocolToInject:protocol];
    
    [CRObjectionService registerBindModel:bindModel];
}

@end
