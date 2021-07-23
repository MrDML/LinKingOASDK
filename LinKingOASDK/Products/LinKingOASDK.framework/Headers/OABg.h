







#import <UIKit/UIKit.h>

@class OAErsion;
@class OAAccountbgConfig;
@class OAInfo;
@class OAIgnCheckmark;
@class OAInConf;
@class OASingleRder;
@class OAPoint;
@class OATitle;


NS_ASSUME_NONNULL_BEGIN

@interface OABg : NSObject
@property (nonatomic, copy) void(^initializeSDKCallBack)(OABg *manager,NSError *error);
@property (nonatomic, strong,readonly) OAErsion *oauthManager;
@property (nonatomic, strong,readonly) OAAccountbgConfig *adManager;
@property (nonatomic, strong,readonly) OAInfo *ironsAdManager;
@property (nonatomic, strong,readonly) OAIgnCheckmark *facebookAdManager;
@property (nonatomic, strong,readonly) OAInConf *pointManager;
@property (nonatomic, strong,readonly) OASingleRder *payManager;
@property (nonatomic, strong,readonly) OAPoint *shareManager;

+ (instancetype)shared;





- (void)changeActivityStatek:(NSString * _Nonnull)appId withSecretkey:(NSString * _Nonnull)secretkey cmoplete:(void(^_Nonnull)(OABg *manager,NSError *error))complete;



@property (strong, nonatomic) NSBundle *_Nullable languageBundle;

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;
- (void)applicationWillTerminate:(UIApplication *)application;
- (BOOL)application:(nonnull UIApplication *)application openURL:(nonnull NSURL *)url options:(nonnull NSDictionary<NSString *, id> *)options;
- (BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation;
- (void)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo fetchCompletionHandler:(void (^)(UIBackgroundFetchResult))completionHandler;
- (void)applicationDidBecomeActive:(UIApplication *)application;
- (void)scene:(UIScene *)scene openURLContexts:(NSSet<UIOpenURLContext *> *)URLContexts API_AVAILABLE(ios(13.0));
- (BOOL)application:(UIApplication *)application continueUserActivity:(NSUserActivity *)userActivity restorationHandler:(void(^)(NSArray<id<UIUserActivityRestoring>> * __nullable restorableObjects))restorationHandler;
@end

NS_ASSUME_NONNULL_END
