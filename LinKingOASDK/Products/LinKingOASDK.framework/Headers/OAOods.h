







#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OAOods : NSObject<NSSecureCoding>
@property (nonatomic,copy) NSString *appID;
@property (nonatomic,copy) NSString *secretkey;

@property (nonatomic,copy) NSString *loginStyle;

@property (nonatomic,copy) NSString *token;
@property (nonatomic,copy) NSString *gameId;
@property (nonatomic,copy) NSString *userToken;

@property (nonatomic,copy) NSString *matrixLanguage;


+ (OAOods *)fetchSDKConfigCompletet;
+ (void)setSystem:(OAOods *)system;
+ (void)hideForSinglePageu;
@end

NS_ASSUME_NONNULL_END