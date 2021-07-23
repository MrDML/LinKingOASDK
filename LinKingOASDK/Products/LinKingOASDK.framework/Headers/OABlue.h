







#import "OAScroll.h"
@class OATitle;

NS_ASSUME_NONNULL_BEGIN

@interface OABlue : OAScroll

+ (void)originPointEventName6:(NSString *)token complete:(void(^)(NSError *error,OATitle *user))complete;
+ (void)hafLogTutorialCompletionWithSuccess:(NSString *)token complete:(void(^)(NSError *error,OATitle *user))complete;
+ (void)pcheckUserInfoComplete:(NSString *)token complete:(void(^)(NSError *error,OATitle *user))complete;
@end

NS_ASSUME_NONNULL_END
