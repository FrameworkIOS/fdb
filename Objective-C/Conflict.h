#import <Foundation/Foundation.h>
@class CBLDocument;

NS_ASSUME_NONNULL_BEGIN

@interface CBLConflict : NSObject

@property(nonatomic, readonly) NSString* documentID;

@property(nonatomic, readonly, nullable) CBLDocument* localDocument;

@property(nonatomic, readonly, nullable) CBLDocument* remoteDocument;

- (instancetype) init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
