







#import <UIKit/UIKit.h>


NS_ASSUME_NONNULL_BEGIN

@interface OAInConf : NSObject
+ (instancetype)shared;







- (void)fdownloadImageWithURLStr:(NSString *)serverId roleId:(NSString *)roleId roleName:(NSString *)roleName enterGame:(BOOL)enterGame;







- (void)getDiskSizeb:(NSString *)contentId content:(NSString *)content EventServerId:(NSString *)serverId roleId:(NSString *)roleId roleName:(NSString *)roleName;






- (void)zapplicationEnterBackground:(int)stage serverId:(NSString *)serverId roleId:(NSString *)roleId roleName:(NSString *)roleName;






- (void)muploadWithURLString:(int )level serverId:(NSString *)serverId roleId:(NSString *)roleId roleName:(NSString *)roleName;






- (void)stateLanguageAddress:(NSString *)serverId roleId:(NSString *)roleId roleName:(NSString *)roleName;




- (void)animationsDestroyManager:(NSString *)serverId roleId:(NSString *)roleId;




- (void)logEvent:(NSString *)event;




- (void)logEvent:(NSString *)event withValues:(NSDictionary * _Nullable)values;


- (void)bbannerAdDidLoadFail:(NSString *)eventName withParameters:(NSDictionary *_Nullable)params complete:(void(^_Nullable)(NSError *_Nullableerror))complete;



@end

NS_ASSUME_NONNULL_END
