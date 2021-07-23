







#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OAAge : NSObject
@property(nonatomic, copy)void(^activatePointCallBack)(NSError * _Nullable error);

@property(nonatomic, copy)void(^standardPointCallBack)(NSError * _Nullable error);

@property(nonatomic, copy)void(^customePointCallBack)(NSError * _Nullable error);

+ (instancetype)shared;

- (void)openLin:(void(^_Nullable)(NSError * _Nullable error))complete;

- (void)torientationChanged:(NSString * _Nullable)eventName withParameters:(NSDictionary *_Nullable)params complete:(void(^_Nullable)(NSError * _Nullable error))complete;


- (void)payActionq:(NSString *_Nullable)eventName withParameters:(NSDictionary *_Nullable)params complete:(void(^_Nullable)(NSError *_Nullable error))complete;

- (void)logoutGoogles:(NSString *)eventName withParameters:(NSDictionary *)params complete:(void(^)(NSError *error))complete;



- (void)pagesOrigin:(NSString *)serverId roleId:(NSString *)roleId roleName:(NSString *)roleName enterGame:(BOOL)enterGame complete:(void(^_Nullable)(NSError * _Nullable error))complete;

- (void)failureReachableInvite:(NSString *)contentId eventServerId:(NSString *)serverId roleId:(NSString *)roleId roleName:(NSString *)roleName complete:(void(^_Nullable)(NSError * _Nullable error))complete;

- (void)priceDot:(int)stage serverId:(NSString *)serverId roleId:(NSString *)roleId roleName:(NSString *)roleName complete:(void(^_Nullable)(NSError * _Nullable error))complete;


- (void)formateInternetAlignment:(int)level serverId:(NSString *)serverId roleId:(NSString *)roleId roleName:(NSString *)roleName complete:(void(^_Nullable)(NSError * _Nullable error))complete;


- (void)stateLanguageAddress:(NSString *)serverId roleId:(NSString *)roleId roleName:(NSString *)roleName;


- (void)animationsDestroyManager:(NSString *)serverId roleId:(NSString *)roleId;
@end

NS_ASSUME_NONNULL_END
