//
//  PathObject.h
//  
//
//  Created by Sadiq Ahmed Mohiuddin Quadri on 21/07/22.
//
#import <Foundation/Foundation.h>

@class PathObject;

@interface PathObject: NSObject
@property CGPathRef path;
@property const char * const tag;
@property NSDictionary * const attributes;

+ (NSArray<PathObject*> *)pathObjectsFromSVGString:(NSString *)svgString;

+ (NSArray<NSArray<PathObject *> *> *)groupedPathObjectsFromSVGString:(NSString *)svgString;

- (id) initWithPath:(CGPathRef)path andTag:(const char * const)tag andAttributes:(NSDictionary * const)attributes;

@property (nonatomic, readonly) CGRect viewBox;
@end
