







#import "OAProductOginController.h"
@class OATitle;
NS_ASSUME_NONNULL_BEGIN

@interface OASuccessController : OAProductOginController
@property (nonatomic,copy)void(^bindingCompleteCallBack)(OATitle *_Nullable user,NSError * _Nullable error);
@end

NS_ASSUME_NONNULL_END
