//
//  PathObject.h
//  
//
//  Created by Sadiq Ahmed Mohiuddin Quadri on 21/07/22.
//
#import <Foundation/Foundation.h>

@interface PathObject: NSObject
@property (nonatomic, assign) CGPathRef path;
@property (nonatomic, assign) const char * const tag;
@property (nonatomic, assign) NSDictionary * const attributes;

- (id) initWithPath:(CGPathRef)path andTag:(const char * const)tag andAttributes:(NSDictionary * const)attributes;
- (CGPathRef) path;
- (const char * const) tag;
- (NSDictionary * const) attributes;
@end
