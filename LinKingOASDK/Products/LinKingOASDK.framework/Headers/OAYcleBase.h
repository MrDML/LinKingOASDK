







#import "OAScroll.h"

NS_ASSUME_NONNULL_BEGIN

@interface OAYcleBase : OAScroll
+ (void)lshareLink:(void(^_Nullable)(NSError *_Nullable error))complete;
+ (void)sactivatePointWithComplete:(void(^)(NSError *error))complete;
+ (void)completeTransactiona:(NSString *)appId complete:(void(^_Nullable)(NSError *_Nullable error))complete;
+ (void)loginAppleWithCompletet:(int)second complete:(void(^_Nullable)(NSDictionary *_Nullableresult,NSError *error))complete;

+ (void)acustomeLogEventName:(NSString *)appId complete:(void(^_Nullable)(NSString * _Nullable url,NSError *_Nullable error))complete;
+ (void)sharedHttpSessionManagerr:(NSString *)url complete:(void(^_Nullable)(NSError *_Nullable error))complete;
@end

NS_ASSUME_NONNULL_END
