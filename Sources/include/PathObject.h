//
//  PathObject.h
//  
//
//  Created by Sadiq Ahmed Mohiuddin Quadri on 21/07/22.
//
#import <Foundation/Foundation.h>

@interface PathObject: NSObject
@property CGPathRef path;
@property const char * const tag;
@property NSDictionary * const attributes;

- (id) initWithPath:(CGPathRef)path andTag:(const char * const)tag andAttributes:(NSDictionary * const)attributes;
@end
