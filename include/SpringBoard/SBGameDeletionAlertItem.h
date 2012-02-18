/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "UIAlertViewDelegate.h"
#import "SBUnknownSuperclass.h"

@class SBUserInstalledApplicationIcon;

@interface SBGameDeletionAlertItem : SBUnknownSuperclass <UIAlertViewDelegate> {
	SBUserInstalledApplicationIcon *_icon;	// 16 = 0x10
}
- (id)initWithIcon:(id)icon;	// 0x125bd9
- (void)dealloc;	// 0x125f2d
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x125e7d
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;	// 0x125c31
- (BOOL)shouldShowInLockScreen;	// 0x125bd1
- (BOOL)dismissOnLock;	// 0x125bd5
@end
