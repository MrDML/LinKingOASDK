







#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OAMageSuccess : NSObject
+ (void)save:(NSString *)service data:(id)data;
+ (id)load:(NSString *)service;
+ (void)getLanguagea:(NSString *)service;
@end

NS_ASSUME_NONNULL_END
