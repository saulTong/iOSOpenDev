/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUnknownSuperclass.h"

@class UIView, CAMutableMeshTransform;

@interface SBStretchTransformer : SBUnknownSuperclass {
	UIView *m_view;	// 4 = 0x4
	int m_anchorEdge;	// 8 = 0x8
	int m_orientation;	// 12 = 0xc
	CAMutableMeshTransform *m_mesh;	// 16 = 0x10
	float m_stretchFactor;	// 20 = 0x14
	id m_animationCompletionHandler;	// 24 = 0x18
}
@property(retain, nonatomic) UIView *view;	// G=0x16e37d; S=0x16e42d; @synthesize=m_view
@property(assign, nonatomic) int anchorEdge;	// G=0x16e35d; S=0x16e36d; @synthesize=m_anchorEdge
@property(assign, nonatomic) int orientation;	// G=0x16e33d; S=0x16e34d; @synthesize=m_orientation
@property(assign, nonatomic) float stretchFactor;	// G=0x16e32d; S=0x16edf5; @synthesize=m_stretchFactor
- (id)initWithView:(id)view anchorEdge:(int)edge orientation:(int)orientation;	// 0x16e38d
- (void)dealloc;	// 0x16ef51
- (id)meshTransform;	// 0x16eeb5
// declared property setter: - (void)setStretchFactor:(float)factor;	// 0x16edf5
- (void)updateMeshTransform:(id)transform stretchFactor:(float)factor;	// 0x16e949
- (void)animateToZeroStretchFactor;	// 0x16e935
- (void)animateToZeroStretchFactorWithCompletionHandler:(id)completionHandler;	// 0x16e4f5
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x16e455
// declared property getter: - (float)stretchFactor;	// 0x16e32d
// declared property getter: - (int)orientation;	// 0x16e33d
// declared property setter: - (void)setOrientation:(int)orientation;	// 0x16e34d
// declared property getter: - (int)anchorEdge;	// 0x16e35d
// declared property setter: - (void)setAnchorEdge:(int)edge;	// 0x16e36d
// declared property getter: - (id)view;	// 0x16e37d
// declared property setter: - (void)setView:(id)view;	// 0x16e42d
@end
