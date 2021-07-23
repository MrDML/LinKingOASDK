







#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface OAProductOginController : UIViewController
@property (nonatomic, copy) void(^deviceOrientationHander)(UIDeviceOrientation orientation);
@property (nonatomic, assign) BOOL isFullScreen;
- (void)setAlterWidth:(CGFloat)width;
- (void)setAlterHeight:(CGFloat)height;
- (void)setAlterContentView:(UIView *)contentView;
- (void)nafLogCompletedPurchase;
- (NSError *)becomeActiveOut:(NSString *)msg code:(int)code;
- (void)gcolorWithHexString;
- (void)showUseAgreementViewRootViewControllerm;
@end

NS_ASSUME_NONNULL_END
