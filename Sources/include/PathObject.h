//
//  PathObject.h
//  
//
//  Created by Sadiq Ahmed Mohiuddin Quadri on 21/07/22.
//
#import <Foundation/Foundation.h>

@class PathObject;

@interface PathObject: NSObject
@property (nullable) CGPathRef path;
@property (nonnull) NSString *tag;
@property (nullable) NSDictionary<NSString*, id> *attributes;

+ (NSArray<PathObject*> *_Nonnull)pathObjectsFromSVGString:(NSString *_Nonnull)svgString;

+ (NSArray<NSArray<PathObject *> *> *_Nonnull)groupedPathObjectsFromSVGString:(NSString *_Nonnull)svgString;

- (id _Nonnull) initWithPath:(CGPathRef _Nullable)path
                      andTag:(const char * _Nonnull const)tag
               andAttributes:(NSDictionary * _Nullable const)attributes;

@property (nonatomic, readonly) CGRect viewBox;
@end
