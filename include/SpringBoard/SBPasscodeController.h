/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUnknownSuperclass.h"

@class SBPasscodeComplianceAlertItem, SBPasscodeAlertItem, NSString, NSDate;

@interface SBPasscodeController : SBUnknownSuperclass {
	SBPasscodeAlertItem *_passcodeAlertItem;	// 4 = 0x4
	int _mode;	// 8 = 0x8
	NSString *_previousPasscode;	// 12 = 0xc
	NSString *_newPasscode;	// 16 = 0x10
	int _unlockScreenType;	// 20 = 0x14
	SBPasscodeComplianceAlertItem *_complianceAlertItem;	// 24 = 0x18
	NSDate *_forcedComplianceDate;	// 28 = 0x1c
	id _telephonyNotificationObserver;	// 32 = 0x20
}
+ (id)sharedInstance;	// 0xd129d
- (void)dealloc;	// 0xd206d
- (void)forceUserToChangePasscode;	// 0xd1ef9
- (void)_passwordEntered:(id)entered;	// 0xd18ed
- (void)_userWantsToComplyNow:(BOOL)complyNow;	// 0xd1891
- (void)_abort;	// 0xd1809
- (void)_didEndCall;	// 0xd17e9
- (void)_startListeningToTelephonyNotifications;	// 0xd1715
- (void)_stopListeningToTelephonyNotifications;	// 0xd16c1
- (void)checkPasscodeCompliance;	// 0xd12e5
@end
