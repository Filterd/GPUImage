
#import <Foundation/Foundation.h>

#define CPoint(in,out) [NSValue valueWithCGPoint:CGPointMake(in / 255.0f, out / 255.0f)]
#define CPointSwap(out,in) CPoint(in,out)

@interface ToneCurves : NSObject

@property (nonatomic,assign,readonly) GLuint textureId;

+ (instancetype)curves;
+ (instancetype)curvesWithACVFileName:(NSString*)fileName;

- (void)updateToneCurveTexture;
- (void)setRGBControlPoints:(NSArray *)points;
- (void)setRgbCompositeControlPoints:(NSArray *)newValue;
- (void)setRedControlPoints:(NSArray *)newValue;
- (void)setGreenControlPoints:(NSArray *)newValue;
- (void)setBlueControlPoints:(NSArray *)newValue;

@end
