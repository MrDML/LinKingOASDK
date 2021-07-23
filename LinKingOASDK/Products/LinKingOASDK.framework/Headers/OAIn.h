







#import <Foundation/Foundation.h>
@class OATouristsNotice;
NS_ASSUME_NONNULL_BEGIN
@interface OAIn : NSObject
+ (instancetype)shared;

- (void)conversionImagesResign:(void(^_Nullable)(NSError * _Nullable error, NSArray*_Nullable products))complete;

- (void)vinstanceBindingView:(void(^_Nullable)(NSError * _Nullable error, NSArray<OATouristsNotice *>*_Nullable products))complete;

- (void)agetMyAllOrders:(NSArray *_Nonnull)productIds complete:(void(^_Nullable)(NSError * _Nullable error, NSArray<OATouristsNotice *>*_Nullable products))complete;
@end
NS_ASSUME_NONNULL_END
