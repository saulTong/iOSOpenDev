/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUnknownSuperclass.h"

@class SBShowcaseController;

@interface SBShowcaseViewController : SBUnknownSuperclass {
	SBShowcaseController *_showcase;	// 4 = 0x4
	int _revealMode;	// 8 = 0x8
}
@property(assign, nonatomic) SBShowcaseController *showcase;	// G=0x171239; S=0x171249; @synthesize=_showcase
@property(assign, nonatomic) int revealMode;	// G=0x171219; S=0x171229; @synthesize=_revealMode
- (id)view;	// 0x1711ed
- (void)viewWillAppear;	// 0x1711f1
- (void)viewDidAppear;	// 0x1711f5
- (void)viewWillDisappear;	// 0x1711f9
- (void)viewDidDisappear;	// 0x1711fd
- (void)viewWillRotateToInterfaceOrientation:(int)view;	// 0x171201
- (void)viewDidRotateFromInterfaceOrientation:(int)view;	// 0x171205
- (float)bottomBarHeight;	// 0x171209
- (BOOL)expectsFaceContact;	// 0x17120d
- (BOOL)shouldShowLockStatusBarTime;	// 0x171211
- (BOOL)shouldShowLockStatusBarIcon;	// 0x171215
// declared property getter: - (int)revealMode;	// 0x171219
// declared property setter: - (void)setRevealMode:(int)mode;	// 0x171229
// declared property getter: - (id)showcase;	// 0x171239
// declared property setter: - (void)setShowcase:(id)showcase;	// 0x171249
@end
