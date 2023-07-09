#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WebSocket: NSObject<NSURLSessionStreamDelegate>

+ (C4SocketFactory) socketFactory;
+ (nullable NSString*) webSocketAcceptHeaderForKey: (NSString*)key;
+ (NSArray*) parseCookies: (NSString*)cookie;

@end

NS_ASSUME_NONNULL_END
