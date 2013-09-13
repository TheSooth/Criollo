
#import <Foundation/NSObjCRuntime.h>

@protocol CRApplicationFinishLaunchingDelegate <NSObject>

@optional
- (void)applicationDidFinishLaunching:(UIApplication *)application;
- (BOOL)application:(UIApplication *)application willFinishLaunchingWithOptions:(NSDictionary *)launchOptions NS_AVAILABLE_IOS(6_0);
- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions NS_AVAILABLE_IOS(3_0);

@end


@protocol CRApplicationLifetimeDelegate <NSObject>

@optional
- (void)applicationDidBecomeActive:(UIApplication *)application;
- (void)applicationWillResignActive:(UIApplication *)application;
- (void)applicationDidEnterBackground:(UIApplication *)application NS_AVAILABLE_IOS(4_0);
- (void)applicationWillEnterForeground:(UIApplication *)application NS_AVAILABLE_IOS(4_0);
- (void)applicationWillTerminate:(UIApplication *)application;

@end

@protocol CRApplicationURLHandlingDelegate <NSObject>

@optional
- (BOOL)application:(UIApplication *)application handleOpenURL:(NSURL *)url;  // Will be deprecated at some point, please replace with application:openURL:sourceApplication:annotation:
- (BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation NS_AVAILABLE_IOS(4_2); // no equiv. notification. return NO if the application can't open for some reason

@end

@protocol CRApplicationRemoteNotificationsHandlingDelegate <NSObject>

@optional
- (void)application:(UIApplication *)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken NS_AVAILABLE_IOS(3_0);
- (void)application:(UIApplication *)application didFailToRegisterForRemoteNotificationsWithError:(NSError *)error NS_AVAILABLE_IOS(3_0);
- (void)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo NS_AVAILABLE_IOS(3_0);
- (void)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo fetchCompletionHandler:(void (^)(UIBackgroundFetchResult result))completionHandler NS_AVAILABLE_IOS(7_0);


@end

@protocol CRApplicationLocalNotificationsHandlingDelegate <NSObject>

@optional

- (void)application:(UIApplication *)application didReceiveLocalNotification:(UILocalNotification *)notification NS_AVAILABLE_IOS(4_0);

@end

@protocol CRApplicationMemoryWarningsTrackingDelegate <NSObject>

@optional
- (void)applicationDidReceiveMemoryWarning:(UIApplication *)application;      // try to clean up as much memory as possible. next step is to terminate app

@end


@protocol CRApplicationStatusBarObservingDelegate <NSObject>

@optional
- (void)application:(UIApplication *)application willChangeStatusBarOrientation:(UIInterfaceOrientation)newStatusBarOrientation duration:(NSTimeInterval)duration;
- (void)application:(UIApplication *)application didChangeStatusBarOrientation:(UIInterfaceOrientation)oldStatusBarOrientation;

- (void)application:(UIApplication *)application willChangeStatusBarFrame:(CGRect)newStatusBarFrame;   // in screen coordinates
- (void)application:(UIApplication *)application didChangeStatusBarFrame:(CGRect)oldStatusBarFrame;

@end

@protocol CRApplicationOrientationDelegate <NSObject>
@optional
- (NSUInteger)application:(UIApplication *)application supportedInterfaceOrientationsForWindow:(UIWindow *)window  NS_AVAILABLE_IOS(6_0);

@end

@protocol CRApplicationProtectedDataObservationDelegate <NSObject>

@optional
- (void)applicationProtectedDataWillBecomeUnavailable:(UIApplication *)application NS_AVAILABLE_IOS(4_0);
- (void)applicationProtectedDataDidBecomeAvailable:(UIApplication *)application    NS_AVAILABLE_IOS(4_0);

@end

@protocol CRApplicationSignificantTimeObservationDelegate <NSObject>

@optional
- (void)applicationSignificantTimeChange:(UIApplication *)application; // midnight, carrier time update, daylight savings time change

@end

@protocol CRApplicationFetchPerformingDelegate <NSObject>

@optional
- (void)application:(UIApplication *)application performFetchWithCompletionHandler:(void (^)(UIBackgroundFetchResult result))completionHandler NS_AVAILABLE_IOS(7_0);

@end

@protocol CRApplicationBackgroundURLSessionEvandHandlingDelegate <NSObject>

@optional
- (void)application:(UIApplication *)application handleEventsForBackgroundURLSession:(NSString *)identifier completionHandler:(void (^)())completionHandler NS_AVAILABLE_IOS(7_0);

@end

@protocol UIApplicationStateResorationDelegate <NSObject>

@optional
- (UIViewController *) application:(UIApplication *)application viewControllerWithRestorationIdentifierPath:(NSArray *)identifierComponents coder:(NSCoder *)coder NS_AVAILABLE_IOS(6_0);
- (BOOL) application:(UIApplication *)application shouldSaveApplicationState:(NSCoder *)coder NS_AVAILABLE_IOS(6_0);
- (BOOL) application:(UIApplication *)application shouldRestoreApplicationState:(NSCoder *)coder NS_AVAILABLE_IOS(6_0);
- (void) application:(UIApplication *)application willEncodeRestorableStateWithCoder:(NSCoder *)coder NS_AVAILABLE_IOS(6_0);
- (void) application:(UIApplication *)application didDecodeRestorableStateWithCoder:(NSCoder *)coder NS_AVAILABLE_IOS(6_0);

@end


