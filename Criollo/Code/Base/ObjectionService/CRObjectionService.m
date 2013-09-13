//
//  CRObjectionService.m
//  Criollo
//
//  Created by Vladimir Shevchenko on 13.09.13.
//  Copyright (c) 2013 Sheva. All rights reserved.
//

#import "CRObjectionService.h"
#import "CRObjectionRegisterModule.h"

@implementation CRObjectionService

+ (void)startService
{
    [self registerModules];
}

+ (void)registerModules
{
    CRObjectionRegisterModule *registerModule = [[CRObjectionRegisterModule alloc] initWithBindingModels:[[self sharedInstance] bindingsArray]];
    
    JSObjectionInjector *injector = [JSObjection createInjector:registerModule];
    [JSObjection setDefaultInjector:injector];
}

+ (id)getObjectForClass:(Class)aClass
{
    JSObjectionInjector *defaultInjector = [JSObjection defaultInjector];
    
   return [defaultInjector getObject:aClass];
}

@end
