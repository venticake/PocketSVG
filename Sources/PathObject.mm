//
//  PathObject.mm
//  
//
//  Created by Wooseok Son on 2022/08/24.
//

#import <CoreGraphics/CoreGraphics.h>
#import "PathObject.h"
#import "SVGEngine.h"


@implementation PathObject

+ (NSArray<PathObject*> *)pathObjectsFromSVGString:(NSString * const)svgString
{
    SVGAttributeSet *cgAttrs;
    return PathObjectsFromSVGString(svgString, &cgAttrs);
}

+ (NSArray<NSArray<PathObject*>*> *)groupedPathObjectsFromSVGString:(NSString * const)svgString
{
    SVGAttributeSet *cgAttrs;
    return GroupedPathObjectsFromSVGString(svgString, &cgAttrs);
}

- (id) initWithPath:(CGPathRef)path andTag:(const char *const)tag andAttributes:(NSDictionary *const)attributes
{
    self = [super init];
    if (self) {
        self.path = path;
        self.tag = [NSString stringWithUTF8String:tag];
        self.attributes = attributes;
    }
    return self;
}

- (CGRect) viewBox {
    NSString *viewBoxString = _attributes[@"viewBox"];
    NSArray *stringArray = [viewBoxString componentsSeparatedByString:@" "];
    if (stringArray && stringArray.count == 4) {
        return CGRectMake(CGFloat([stringArray[0] doubleValue]), CGFloat([stringArray[1] doubleValue]), CGFloat([stringArray[2] doubleValue]), CGFloat([stringArray[3] doubleValue]));
    } else {
        return CGRectNull;
    }
}

@end
