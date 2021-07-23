







#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OARder : NSObject
+ (OARder *)sharedImageCache;

- (UIImage *)showIronSourceInterstitialAdc:(NSString*)urlStr;

- (UIImage *)ologReportServerWithEvent:(NSString *)urlStr;

- (void)loginWithDashboardRootViewControlleri:(NSString *)urlStr withComplitionBlock:(void (^) (UIImage*image))block;
@end

NS_ASSUME_NONNULL_END
