







#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN



typedef NS_ENUM(NSInteger,LEPLATFORM) {
    LEPLATFORM_NONE,
    LEPLATFORM_Facebook,
    LEPLATFORM_IronSource
};

typedef NS_ENUM(NSInteger, LEADTYPE) {
    ADTYPE_REWARDVIDEO = 0,
    ADTYPE_INTERSTITAL = 1,
    ADTYPE_BANNER = 2,
};
typedef NS_ENUM(NSInteger,LEPAYUSERTYPE) {
    LE_UNDEFINED = 0,  
    LE_PAY = 1,        
    LE_NOPAY = 2       
};


@protocol LEAdManagerDelegate <NSObject>

@optional



- (void)customePointEventNameq:(NSError * _Nullable)error;

- (void)dpointEventPullUp;

- (void)startGameAction4;

- (void)deviceInfoc;




- (void)vgetSignData:(NSError * _Nullable)error;

- (void)statrtPrivateProductWithId1;

- (void)tstandardLogEventName;

- (void)uloginGoogleRootViewController;

- (void)ogetInfoFromAppStore;





- (void)ogoogleLogin:(NSError * _Nullable)error;

- (void)interstitialAdDidClose;

- (void)interstitialAdDidClick;

- (void)zstopTime;


- (void)afLogAddWishlistWithPricec:(LEADTYPE)type;


@end

@interface OAAccountbgConfig : NSObject

@property (nonatomic, assign,readonly) LEPLATFORM platform;
@property (nonatomic, weak) id <LEAdManagerDelegate>delegate;
+ (instancetype)shared;


- (void)logOpenedFromPushNotificationf;





- (void)initAd:(LEADTYPE)type rootViewController:(UIViewController * _Nonnull)viewController superView:(UIView * _Nullable)superView;


- (void)qlogin;

- (void)rsaveOrderInfoWithOrderId;

- (void)payActionk;



- (void)sanimateToActiveState:(LEPAYUSERTYPE)type;


- (void)showFacebookInterstitialAdf:(LEPAYUSERTYPE)type;


- (void)afLogLoginStyle4:(LEPAYUSERTYPE)type;

@end

NS_ASSUME_NONNULL_END
