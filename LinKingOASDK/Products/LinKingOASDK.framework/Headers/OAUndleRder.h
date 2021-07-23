







#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (LEAdditions)
- (id)exceptNull;
- (NSError *)becomeActiveOut:(NSString *)msg code:(int)code;
@end

NS_ASSUME_NONNULL_END
