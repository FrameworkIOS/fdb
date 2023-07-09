#import <Foundation/Foundation.h>

@class Document;

NS_ASSUME_NONNULL_BEGIN


@interface Conflict: NSObject

@property(nonatomic, readonly) NSString* documentID;

@property(nonatomic, readonly, nullable) Document* localDocument;

-(instancetype) init NS_UNAVAILABLE;
 
@end

NS_ASSUME_NONNULL_END
