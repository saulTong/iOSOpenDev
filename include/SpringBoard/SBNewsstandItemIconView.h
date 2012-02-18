/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBNewsstandItemIconViewBase.h"

@class SBDownloadingProgressBar, UILabel, UIView;

@interface SBNewsstandItemIconView : SBNewsstandItemIconViewBase {
	UIView *_iconTransformView;	// 180 = 0xb4
	SBDownloadingProgressBar *_progressBar;	// 184 = 0xb8
	UILabel *_indexLabel;	// 188 = 0xbc
	unsigned _newsstandIndex;	// 192 = 0xc0
}
+ (CGSize)defaultIconSize;	// 0x147e35
+ (BOOL)allowsRecycling;	// 0x147cb5
+ (id)createBadgeLabelImageAndGetTextCenterPoint:(CGPoint *)point;	// 0x147e09
+ (float)_badgeLabelFontSize;	// 0x147dc1
+ (CGPoint)badgeLabelCenterPoint;	// 0x147d39
- (id)initWithFrame:(CGRect)frame;	// 0x149745
- (id)initWithDefaultSize;	// 0x149641
- (void)dealloc;	// 0x1495ad
- (void)prepareForRecycling;	// 0x1494a9
- (void)positionCloseBoxOfType:(int)type;	// 0x1493d9
- (id)createShadowImageView;	// 0x147cb9
- (void)applyIconImageTransform:(CATransform3D)transform duration:(float)duration delay:(float)delay;	// 0x148e79
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x148d79
- (void)positionIconImageView;	// 0x148bb1
- (void)setIsGrabbed:(BOOL)grabbed;	// 0x148abd
- (Class)_labelClass;	// 0x148aa1
- (void)positionLabel;	// 0x148941
- (CGRect)defaultFrameForProgressBar;	// 0x1487bd
- (void)_updateLabelVisibility;	// 0x148721
- (void)_removeProgressBar;	// 0x1486cd
- (void)_updateProgressBar;	// 0x148549
- (void)iconAccessoriesDidUpdate:(id)iconAccessories;	// 0x1484dd
- (id)_superviewForBadge;	// 0x147cbd
- (id)_overriddenBadgeTextForText:(id)text;	// 0x147cd1
- (float)_badgeHorizontalPadding;	// 0x148445
- (float)_badgeVerticalPadding;	// 0x147cfd
- (CGRect)_adjustProspectiveBadgeFrame:(CGRect)frame fromView:(id)view toView:(id)view3;	// 0x14821d
- (void)setNewsstandIndex:(unsigned)index;	// 0x147ed1
@end

