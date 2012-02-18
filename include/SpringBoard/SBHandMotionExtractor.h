/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBUnknownSuperclass.h"


@interface SBHandMotionExtractor : SBUnknownSuperclass {
	UIEdgeInsets _pixelDeltas;	// 4 = 0x4
	UIEdgeInsets _smoothedDeltas;	// 20 = 0x14
	UIEdgeInsets _allPixelDeltas;	// 36 = 0x24
	float _averageTranslation;	// 52 = 0x34
	float _farthestFingerSeparation;	// 56 = 0x38
	CGPoint _movementVelocityInPointsPerSecond;	// 60 = 0x3c
}
@property(readonly, assign, nonatomic) UIEdgeInsets pixelDeltas;	// G=0x131f09; @synthesize=_pixelDeltas
@property(readonly, assign, nonatomic) UIEdgeInsets allPixelDeltas;	// G=0x131ee5; @synthesize=_allPixelDeltas
@property(readonly, assign, nonatomic) UIEdgeInsets averageVelocities;	// G=0x131ec1; @synthesize=_smoothedDeltas
@property(readonly, assign, nonatomic) float averageTranslation;	// G=0x131eb1; @synthesize=_averageTranslation
@property(readonly, assign, nonatomic) float farthestFingerSeparation;	// G=0x131ea1; @synthesize=_farthestFingerSeparation
@property(readonly, assign, nonatomic) CGPoint movementVelocityInPointsPerSecond;	// G=0x131e89; @synthesize=_movementVelocityInPointsPerSecond
- (void)clear;	// 0x131f2d
- (void)extractHandMotionForActiveTouches:(XXStruct_DSYOgA *)activeTouches count:(unsigned)count centroid:(CGPoint)centroid;	// 0x131f8d
// declared property getter: - (CGPoint)movementVelocityInPointsPerSecond;	// 0x131e89
// declared property getter: - (float)farthestFingerSeparation;	// 0x131ea1
// declared property getter: - (float)averageTranslation;	// 0x131eb1
// declared property getter: - (UIEdgeInsets)averageVelocities;	// 0x131ec1
// declared property getter: - (UIEdgeInsets)allPixelDeltas;	// 0x131ee5
// declared property getter: - (UIEdgeInsets)pixelDeltas;	// 0x131f09
@end
