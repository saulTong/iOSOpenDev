/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUnknownSuperclass.h"
#import "SpringBoard-Structs.h"

@class CALayer;

@interface SBBuddyLogoZoomView : SBUnknownSuperclass {
	CALayer *_contentLayer;	// 48 = 0x30
	id _animationCompleteBlock;	// 52 = 0x34
}
- (id)initWithFrame:(CGRect)frame;	// 0x1a2e65
- (void)startAnimationWithCompletionBlock:(id)completionBlock;	// 0x1a2999
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x1a2915
@end
