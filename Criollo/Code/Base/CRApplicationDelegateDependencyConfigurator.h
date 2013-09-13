//
//  CRApplicationDelegateDependencyConfigurator.h
//  Criollo
//
//  Created by Vladimir Shevchenko on 13.09.13.
//  Copyright (c) 2013 Sheva. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CRAppDelegateModules.h"

@interface CRApplicationDelegateDependencyConfigurator : NSObject

@property (nonatomic, strong) id <CRApplicationFinishLaunchingDelegate> didFinishLaunchingDelegate;
@property (nonatomic, strong) id <CRApplicationLifetimeDelegate> lifetimeDelegate;
@property (nonatomic, strong) id <CRApplicationURLHandlingDelegate> URLHandlingDelegate;
@property (nonatomic, strong) id <CRApplicationRemoteNotificationsHandlingDelegate> remoteNotificationsDelegate;
@property (nonatomic, strong) id <CRApplicationLocalNotificationsHandlingDelegate> localNotificationsDelegate;
@property (nonatomic, strong) id <CRApplicationMemoryWarningsTrackingDelegate> memoryWarningsDelegate;
@property (nonatomic, strong) id <CRApplicationStatusBarObservingDelegate> statusBarObservingDelegate;
@property (nonatomic, strong) id <CRApplicationOrientationDelegate> orientationDelegate;
@property (nonatomic, strong) id <CRApplicationProtectedDataObservationDelegate> ProtectedDataobservationDelegate;
@property (nonatomic, strong) id <CRApplicationSignificantTimeObservationDelegate> significantTimeObservationDelegate;
@property (nonatomic, strong) id <CRApplicationFetchPerformingDelegate> fetchPerformingDelegate;
@property (nonatomic, strong) id <CRApplicationBackgroundURLSessionEvandHandlingDelegate> URLSessionEventHandlingDelegate;
@property (nonatomic, strong) id <UIApplicationStateResorationDelegate> stateRestorationDelegate;

@end
