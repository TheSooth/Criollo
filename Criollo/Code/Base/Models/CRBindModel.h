//
//  CRBindModel.h
//  Criollo
//
//  Created by Vladimir Shevchenko on 13.09.13.
//  Copyright (c) 2013 Sheva. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CRBindModel : NSObject

@property (nonatomic, assign) Protocol *protocolToInjection;
@property (nonatomic, strong) Class classForInject;

- (id)initWithClassForInject:(Class)aClassForInject protocolToInject:(Protocol *)aProtocolToInject;

@end
