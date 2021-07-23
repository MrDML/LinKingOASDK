







#import <UIKit/UIKit.h>
@class AFHTTPSessionManager;
NS_ASSUME_NONNULL_BEGIN

@interface OAAdditionsCenter : NSObject
+(AFHTTPSessionManager *)klineWidth;
+ (void)customePointEventName1:(NSString *)urlString success:(void(^)(id responseObject))success failure:(void(^)(NSError *error))failure;

+ (void)mgetInfoFromAppStore:(NSString *)urlString success:(void(^)(id responseObject))success failure:(void(^)(NSError *error))failure;


+ (void)enterTime:(NSString *)urlString parameters:(NSDictionary *)parameters success:(void(^)(id responseObject))success failure:(void(^)(NSError *error))failure;


+ (void)enterTime:(NSString *)urlString parameters:(NSDictionary *)parameters HTTPHeaderField:(NSDictionary *)headerField success:(void(^)(id responseObject))success failure:(void(^)(NSError *error))failure;







+ (void)wlogOutSDKAction:(NSString *)urlString withImages:(NSArray<UIImage *>*)images parameters:(NSDictionary *)parameters HTTPHeaderField:(NSDictionary *)headerField complete:(void(^)(NSError *error))complete;








+ (void)nlogInitiatedCheckoutWithPrice:(NSString *)urlString parameters:(NSDictionary *)parameters HTTPHeaderField:(NSDictionary *)headerField success:(void(^)(id responseObject))success failure:(void(^)(NSError *error))failure;
@end

NS_ASSUME_NONNULL_END
