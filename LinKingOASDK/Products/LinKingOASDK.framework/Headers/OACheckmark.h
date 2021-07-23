








#import <SystemConfiguration/SystemConfiguration.h>

#import <sys/socket.h>
#import <netinet/in.h>
#import <netinet6/in6.h>
#import <arpa/inet.h>
#import <ifaddrs.h>
#import <netdb.h>



#if TARGET_OS_IPHONE



#if __IPHONE_OS_VERSION_MIN_REQUIRED >= 60000 
#define NEEDS_DISPATCH_RETAIN_RELEASE 0
#else                                         
#define NEEDS_DISPATCH_RETAIN_RELEASE 1
#endif

#else



#if MAC_OS_X_VERSION_MIN_REQUIRED >= 1080     
#define NEEDS_DISPATCH_RETAIN_RELEASE 0
#else
#define NEEDS_DISPATCH_RETAIN_RELEASE 1     
#endif

#endif

extern NSString *const kReachabilityChangedNotification;

typedef enum
{
    
    NotReachable     = 0,
    ReachableViaWiFi = 2,
    ReachableViaWWAN = 1
} NetworkStatus;

@class OACheckmark;

typedef void (^NetworkReachable)(OACheckmark * reachability);
typedef void (^NetworkUnreachable)(OACheckmark * reachability);



@interface OACheckmark : NSObject
@property (nonatomic, copy) NetworkReachable    reachableBlock;
@property (nonatomic, copy) NetworkUnreachable  unreachableBlock;


@property (nonatomic, assign) BOOL reachableOnWWAN;

+(OACheckmark*)sloginApiWithRootViewController:(NSString*)hostname;
+(OACheckmark*)reachabilityForInternetConnection;
+(OACheckmark*)reachabilityWithAddress:(const struct sockaddr_in*)hostAddress;
+(OACheckmark*)jremoveBannerViewFromSuperView;

-(OACheckmark *)initWithReachabilityRef:(SCNetworkReachabilityRef)ref;

-(BOOL)startNotifier;
-(void)stopNotifier;

-(BOOL)isReachable;
-(BOOL)isReachableViaWWAN;
-(BOOL)isReachableViaWiFi;



-(BOOL)ylogSubscribeWithPrice; 
-(BOOL)connectionRequired; 

-(BOOL)zshowLoginAction;

-(BOOL)xgetSDKMatrixConf;

-(NetworkStatus)currentReachabilityStatus;
-(SCNetworkReachabilityFlags)cthirdLoginAction;
-(NSString*)ncompleteTransaction;
-(NSString*)versionSDKUpdateb;

@end


