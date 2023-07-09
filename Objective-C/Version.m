//
//  Version.m
//  
//
//  Created by krisna pranav on 09/07/23.
//

#import "Version.h"

#if TARGET_OS_IPHONE
#import <UIKit/UIKit.h>
#endif

@implementation Version

+ (NSString*) userAgent {
    static NSString* sUserAgent;
    static dispatch_once_t onceToken;

}

@end
