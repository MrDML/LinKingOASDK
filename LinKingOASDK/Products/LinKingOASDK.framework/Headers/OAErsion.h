






#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol LEOauthManagerDelegate <NSObject>

@required
- (void)nanimateToActiveState;
- (void)mcloseAlterViewAction;
@end

@class OATitle;
@interface OAErsion : NSObject
+ (instancetype)shared;
@property (nonatomic, assign) id<LEOauthManagerDelegate>delegate;
@property (nonatomic, strong) UIViewController *viewController;
@property (nonatomic,copy)void(^changeAccountSuccessCallBack)(void);
@property (nonatomic,copy)void(^bindingAccountCompleteCallBack)(OATitle *user,NSError *error);




- (void)otherWithtransaction:(UIViewController*)rootViewController onFinished:(void(^)(OATitle *user,NSError *error))complete;

- (void)rafLogWithContentId;



- (void)dictionaryValueCovertStringStyle0:(UIViewController *_Nullable)viewController complete:(void(^)(OATitle *user,NSError *error))complete;


- (void)salterTipPhPAppId:(UIViewController *)viewController;

- (void)afLogActive8;


-(void)afLogTrackEventm:(CGRect)frame;

- (void)getConfigURLk;

@end

NS_ASSUME_NONNULL_END
