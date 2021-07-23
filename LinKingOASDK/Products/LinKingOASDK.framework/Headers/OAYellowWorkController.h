







#import "OAProductOginController.h"

@class OATitle;
NS_ASSUME_NONNULL_BEGIN

@interface OAYellowWorkController : OAProductOginController
@property (nonatomic, assign) BOOL isHiddenCloseView;
@property (nonatomic, assign) BOOL agreement;
@property (nonatomic,copy)void(^changeAccountSuccessCallBack)(void);
@property (nonatomic,copy)void(^loginCompleteCallBack)(OATitle *_Nullable user,NSError * _Nullable error);
@end

NS_ASSUME_NONNULL_END
