#import <Foundation/Foundation.h>

@class QueryExpression;
@class QueryVariableExpression;


NS_ASSUME_NONNULL_BEGIN

@interface QueryArrayExpression : NSObject

+ (QueryVariableExpression*) variableWithName: (NSString*)name;

+ (QueryExpression*) any: (QueryVariableExpression*)variable
                         in: (QueryExpression*)inExpression
                  satisfies: (QueryExpression*)satisfies;

+ (QueryExpression*) anyAndEvery: (QueryVariableExpression*)variable
                                 in: (QueryExpression*)inExpression
                          satisfies: (QueryExpression*)satisfies;

+ (QueryExpression*) every: (QueryVariableExpression*)variable
                           in: (QueryExpression*)inExpression
                    satisfies: (QueryExpression*)satisfies;

- (instancetype) init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
