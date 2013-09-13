//
//  CRBindModel.m
//  Criollo
//
//  Created by Vladimir Shevchenko on 13.09.13.
//  Copyright (c) 2013 Sheva. All rights reserved.
//

#import "CRBindModel.h"

@implementation CRBindModel

- (id)initWithClassForInject:(Class)aClassForInject protocolToInject:(Protocol *)aProtocolToInject
{
    self = [super init];
    
    assert(self);
    
    self.classForInject = aClassForInject;
    self.protocolToInjection = aProtocolToInject;
    
    return self;
}

@end
