//
// Created by Vladimir Shevchenko on 13.09.13.
// Copyright (c) 2013 Sheva. All rights reserved.



#import "CRBaseInjectionService.h"
#import <Objection.h>

@implementation CRBaseInjectionService

+ (CRBaseInjectionService *)sharedInstance
{
    static CRBaseInjectionService *_sharedInstance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _sharedInstance = [self new];
    });
    
    return _sharedInstance;
}

+ (void)startService
{
    
}

+ (void)registerBindModel:(CRBindModel *)aBindModel
{
    NSMutableArray *bindingsCopy = [CRBaseInjectionService sharedInstance].bindingsArray.copy;
    
    if (!bindingsCopy) {
        bindingsCopy = [NSMutableArray new];
        [bindingsCopy addObject:aBindModel];
    } else {
        [bindingsCopy addObject:aBindModel];
    }
    
    [CRBaseInjectionService sharedInstance].bindingsArray = bindingsCopy.copy;
}

+ (id)getObjectForClass:(Class)aClass
{
    return nil;
}

@end