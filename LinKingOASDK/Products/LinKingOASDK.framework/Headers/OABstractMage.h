







#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@protocol LEAFManagerDelegate <NSObject>
- (void)onConversionDataFail:(nonnull NSError *)error;
- (void)onConversionDataSuccess:(nonnull NSDictionary *)conversionInfo;
@optional
- (void)onAppOpenAttribution:(NSDictionary*) attributionData;
- (void)onAppOpenAttributionFailure:(NSError *)error;
@end
@interface OABstractMage : NSObject
@property (nonatomic, weak) id<LEAFManagerDelegate>delegate;

+ (instancetype)shared;

- (void)getAdConfInfosa;

- (void)loadData;




- (void)flogReportServerWithEvent:(NSString * _Nonnull)devKey appleAppID:(NSString * _Nonnull)appleAppID isDebug:(BOOL)isDebug;




- (void)qstartManager:(NSInteger)level score:(CGFloat)score;


- (void)hlogListViewWithContentType:(BOOL)success;







- (void)vshowUseAgreementView:(NSNumber *)price goodsType:(NSString *)type currency:(NSString *)currency goodsId:(NSString *)goodsId content:(NSString *)content quantity:(int)quantity;





- (void)logAchieveCompleteTutorialIdr:(NSNumber *)price orderId:(NSString *)orderId receiptId:(NSString *)receiptId;








- (void)registLinKingSDKAppIDr:(NSNumber *)price goodsType:(NSString *)type goodsId:(NSString *)goodsId content:(NSString *)content currency:(NSString *)currency quantity:(int)quantity;



- (void)fetchSDKConfigURLWithAppId1:(NSString *)style;





- (void)cshowRewardVideoAdPayuser:(BOOL)success userId:(NSString *)userId desc:(NSString *)desc;








- (void)ilogOutSDK:(NSNumber *)price contentType:(NSString *)contentType contentId:(NSString *)contentId content:(NSString *)content  quantity:(int)quantity payment:(NSString *)payment currency:(NSString *)currency;








- (void)getSignDataz:(NSNumber *)price type:(NSString *)type currency:(NSString *)currency orderId:(NSString *)orderId desc:(NSString *)desc quantity:(int)quantity;



- (void)ygoogleLogin:(NSNumber *)price;




- (void)pshowBindingAccountCenterController:(NSNumber *)price currency:(NSString *)currency;







- (void)facebookLoginWithToken6:(CGFloat)rating contentType:(NSString *)contentType contentId:(NSString *)contentId content:(NSString *)content maxRating:(CGFloat)maxRating;





- (void)nverifyReceiptWithtransaction:(NSString *)contentType searchWords:(NSString *)searchWords success:(BOOL)success;






- (void)krestoreTransaction:(NSNumber *)price ContentType:(NSString *)contentType contentId:(NSString *)contentId content:(NSString *)content;



- (void)mshowRewardVideoAd:(NSString *)desc;







- (void)facebookLogin8:(NSNumber *)price contentType:(NSString *)contentType contentId:(NSString *)contentId content:(NSString *)content currency:(NSString *)currency;




- (void)cbase64StringFromBase64UrlEncodedString:(NSString *)contentType contentList:(NSArray *)contentList;


- (void)xloadAppstore:(NSString *)style;


- (void)showUseAgreementViewRootViewControllerj:(NSString *)style;



- (void)roriginadPointEventName:(NSString*)desc;


- (void)openAppStoreApplication3;


- (void)loadSDKConfigJsonWithURL5;


- (void)le_setImageWithURStr2:(NSString *)style;


- (void)cuuid;



- (void)ogetCurrentOrderInfo:(NSString *)contentId;





- (void)vdefaultParames:(NSString *)eventName withValues:(NSDictionary *)values;




- (void)showFacebookBannerc:(NSString *)userId;


- (NSString *)zalterTipPhPAppId;
@end

NS_ASSUME_NONNULL_END
