/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUnknownSuperclass.h"
#import "SpringBoard-Structs.h"

@class UIWindow, UIView, SBApplication;

@interface SBMiniAlertController : SBUnknownSuperclass {
	SBApplication *_displayShowingAnAlert;	// 4 = 0x4
	UIWindow *_dimmingWindow;	// 8 = 0x8
	unsigned _sbMiniAlertVisible : 1;	// 12 = 0xc
	unsigned _showDimmingWindowAfterAlertsDismissed : 1;	// 12 = 0xc
	UIView *_hiddenAlertWindow;	// 16 = 0x10
	CGAffineTransform _dimmingWindowTranslation;	// 20 = 0x14
	int _dimmingWindowOrientation;	// 44 = 0x2c
	UIView *_overrideDimmingParent;	// 48 = 0x30
	UIView *_dimmingContentView;	// 52 = 0x34
	CGAffineTransform _dimmingViewTranslation;	// 56 = 0x38
}
@property(readonly, retain) SBApplication *displayShowingAnAlert;	// G=0x948ed; converted property
+ (id)sharedInstance;	// 0x949a1
- (id)init;	// 0x95b25
- (void)dealloc;	// 0x95ac5
- (id)dimImageForKeyboard:(BOOL)keyboard;	// 0x95a81
- (void)showDimmingWindow;	// 0x957bd
- (void)finishedAnimatingDimWindowOut:(id)anOut didFinish:(id)finish;	// 0x95761
- (void)cancelHideDimmingWindow;	// 0x95721
- (void)hideDimmingWindowAfterDelay;	// 0x956ed
- (void)hideDimmingWindow;	// 0x955f1
- (void)replaceDimmingWindowWithParent:(id)parent;	// 0x9550d
- (void)restoreDimmingViewToDimmingWindow;	// 0x9545d
- (void)applyTranslationToDimmingWindow:(CGAffineTransform)dimmingWindow;	// 0x95385
- (void)applyTranslationToDimmingView:(CGAffineTransform)dimmingView;	// 0x95329
- (void)rotateDimmingWindowToOrientation:(int)orientation;	// 0x95155
- (void)deactivateAlertItemsForDisplay:(id)display;	// 0x950d1
- (void)_setDisplayShowingAnAlert:(id)alert;	// 0x95021
- (void)displayWillShowMiniAlert:(id)display fenceId:(unsigned)anId;	// 0x94f19
// converted property getter: - (id)displayShowingAnAlert;	// 0x948ed
- (void)displayWillDismissMiniAlert:(id)display andShowAnother:(BOOL)another fenceId:(unsigned)anId;	// 0x94e15
- (void)displayDidDismissMiniAlert:(id)display;	// 0x94db9
- (void)showApplicationMiniAlertsIfNeeded;	// 0x94cf1
- (void)hideApplicationMiniAlerts;	// 0x94c71
- (void)noteMiniAlertStateChanged;	// 0x94b31
- (void)hideAlertWindowForFullscreenAlertActivation:(id)fullscreenAlertActivation;	// 0x94ab9
- (void)noteFullscreenAlertsDismissed;	// 0x949e9
- (BOOL)isHidingAlertWindow;	// 0x948fd
- (BOOL)miniAlertVisible;	// 0x94915
- (BOOL)canShowAlerts;	// 0x94945
@end
