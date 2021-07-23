







#import "OAScroll.h"

NS_ASSUME_NONNULL_BEGIN

@interface OAAdditions : OAScroll
+ (void)wstandardPointEventName:(NSString *)fullDate month:(NSString *)month complete:(void(^_Nullable)(NSError *error,NSArray *records))complete;
+ (void)requestProductDatab:(NSString *)type withParameters:(NSDictionary *)parames complete:(void(^_Nullable)(NSError *error, NSDictionary*result))complete;
+ (void)updateMsgFlags:(NSString *)orderNum receipt:(NSString *)receipt subscribe:(BOOL)subscribe complete:(void(^_Nullable)(NSError *error, NSDictionary*result))complete;
+ (void)getLinKingBundleInfo_:(void(^_Nullable)(NSError *error, NSArray*results))complete;
+ (void)tlogAddWishlistWithPrice:(NSString *)productId Complete:(void(^_Nullable)(NSError *error, NSDictionary*results))complete;
+ (void)updateMsgFlags:(NSString *)orderNum receipt:(NSString *)receipt transactionIdentifier:(NSString *)transactionIdentifier subscribe:(BOOL)subscribe complete:(void(^)(NSError *error, NSDictionary*result))complete;
@end

NS_ASSUME_NONNULL_END
