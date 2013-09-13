//
//  CRObjectionRegisterModule.m
//  Criollo
//
//  Created by Vladimir Shevchenko on 13.09.13.
//  Copyright (c) 2013 Sheva. All rights reserved.
//

#import "CRObjectionRegisterModule.h"
#import "CRBindModel.h"

@interface CRObjectionRegisterModule ()

@property (nonatomic, strong) NSArray *bindingModelsArray;

@end

@implementation CRObjectionRegisterModule

- (id)initWithBindingModels:(NSArray *)aBindingModels
{
    self = [super init];
    
    assert(self);
    
    self.bindingModelsArray = aBindingModels;
    
    return self;
}

- (void)configure
{
    for (CRBindModel *bindModel in self.bindingModelsArray) {
        [self bindClass:bindModel.classForInject toProtocol:bindModel.protocolToInjection];
    }
}

@end
