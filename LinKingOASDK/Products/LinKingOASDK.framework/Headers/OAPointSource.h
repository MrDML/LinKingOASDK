







#import <Foundation/Foundation.h>
@class OATitle;
NS_ASSUME_NONNULL_BEGIN

@interface OAPointSource : NSObject
+ (instancetype)shared;
@property (nonatomic, strong)OATitle * _Nullable user;
@end

NS_ASSUME_NONNULL_END
