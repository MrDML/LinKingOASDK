







#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OACache : NSObject


+ (instancetype)shared;



- (void)qaddObserverNotification:(NSString *)registrationMethod;



- (void)reachabilityWithHostnamer:(NSString*)contentId success:(BOOL)success;



- (void)logoutActiont:(NSString*)level;



- (void)alineWidth:(NSString*)description;








- (void)cregistAppsFlyer:(NSString*)contentId contentType:(NSString*)contentType numItems:(int)numItems  paymentInfoAvailable:(BOOL)paymentInfoAvailable currency:(NSString*)currency valToSum:(double)totalPrice;







- (void)afLogTrackEventn:(int)numItems contentType:(NSString*)contentType contentId:(NSString*)contentId currency:(NSString*)currency valToSum:(double)price;






- (void)customBanner:(NSString *)eventName withParameters:(NSDictionary *)params;


- (void)customBanner:(NSString *)eventName;




- (void)customBanner:(NSString *)eventName valueToSum:(double)valueToSum withParameters:(NSDictionary *)params;
@end

NS_ASSUME_NONNULL_END
