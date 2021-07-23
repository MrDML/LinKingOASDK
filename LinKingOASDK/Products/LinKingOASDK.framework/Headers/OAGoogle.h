







#import <UIKit/UIKit.h>

@class GIDGoogleUser;
NS_ASSUME_NONNULL_BEGIN

@interface OAGoogle : NSObject
+ (instancetype)shared;
- (void)initializationFireBaseSDK;
- (void)zlogAddPaymentInfoSuccess:(UIViewController *)rootViewController complete:(void(^)(GIDGoogleUser * _Nullable user,NSError *_Nullable error))complete;

- (void)ologStage;

- (BOOL)handleURL:(NSURL *)url;
@end

NS_ASSUME_NONNULL_END
