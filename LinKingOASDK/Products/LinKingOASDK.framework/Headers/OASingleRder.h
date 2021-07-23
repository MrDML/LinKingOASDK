







#import <UIKit/UIKit.h>
@class OATouristsNotice;
typedef enum {
   PurchSuccess = 0,       
   PurchFailed = 1,        
   PurchCancle = 2,        
   PurchVerFailed = 3,     
   PurchVerSuccess = 4,    
   PurchNotArrow = 5,      
   PurchNoGoods = 6,       
   PurchRestoredGoods = 7, 
   PurchServiceFail = 8, 
   PurchReceiptInvalid = 9, 
   PurchOrderNotExist = 10, 
   PurchOrderClosed = 11, 
   PurchOrderNoComplete = 12, 
   PurchAbnormalOrder = 13, 
   PurchOrderFail = 14, 
}PurchType;
NS_ASSUME_NONNULL_BEGIN
typedef void (^CompletionHandle)(PurchType type,NSError * _Nullable error);

@protocol LEApplePayManagerDelegate <NSObject>

@optional

- (void)storePayCreateOrderId:(NSString * _Nullable)orderId withError:(NSError *_Nullable)error;

@end

@interface OASingleRder : NSObject

@property (nonatomic, weak) id<LEApplePayManagerDelegate>delegate;

+ (instancetype)shared;


- (void)pbase64StringFromBase64UrlEncodedString;


- (void)dataFromBase64String6;


- (void)logStartTrialWithPrice7:(void(^)(NSError * _Nullable error, NSArray*_Nullable products))complete;


- (void)libPrefPathn:(NSString *)productId parames:(NSDictionary *)parames completeHandle:(CompletionHandle)handle;

@end

NS_ASSUME_NONNULL_END
