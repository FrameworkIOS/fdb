#import <Foundation/Foundation.h>

@class QueryExpression;
@class QueryVariableExpression;

NS_ASSUME_NONNULL_BEGIN

@interface QueryArrayExpression: NSObject

+ (QueryVariableExpression) variableWithName: (NSString*) name;

- (instancetype) init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
