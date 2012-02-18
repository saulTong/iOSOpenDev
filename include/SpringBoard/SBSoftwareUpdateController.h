/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUnknownSuperclass.h"
#import "SUNetworkObserver.h"
#import "SUManagerClientDelegate.h"

@class SUManagerClient, SUDownload;

@interface SBSoftwareUpdateController : SBUnknownSuperclass <SUManagerClientDelegate, SUNetworkObserver> {
	SUManagerClient *_client;	// 4 = 0x4
	SUDownload *_updateToInstall;	// 8 = 0x8
	int _currentNetworkType;	// 12 = 0xc
	int _iCloudRestoreToken;	// 16 = 0x10
	BOOL _showOrScheduleForcedInstallAlertAfterNextUnlock;	// 20 = 0x14
	BOOL _scheduleForcedInstallAlertAfterNextUnlock;	// 21 = 0x15
	BOOL _scheduleForcedInstallAlertWhenAble;	// 22 = 0x16
}
+ (id)sharedInstance;	// 0x16920d
+ (id)stringFromReasons:(int)reasons;	// 0x1690e5
- (id)init;	// 0x168fe9
- (void)dealloc;	// 0x16ae99
- (void)isDownloading:(id)downloading;	// 0x16ae35
- (void)installUpdate;	// 0x16adb1
- (void)delayForcedInstallUntilAble;	// 0x16ad3d
- (void)delayForcedInstallWithDefaultDurationFromNow;	// 0x16acb9
- (void)delayForcedInstallWithDefaultDurationAfterNextUnlock;	// 0x16ac45
- (void)_syncWillStart:(id)_sync;	// 0x16ab35
- (void)_syncDidEnd:(id)_sync;	// 0x16ab09
- (void)_callCountChanged:(id)changed;	// 0x16a989
- (void)_lockStateChanged:(id)changed;	// 0x16a8cd
- (void)_iCloudStatusChanged;	// 0x16a755
- (void)_iTunesRestoreStateChanged:(id)changed;	// 0x16a5dd
- (void)client:(id)client downloadWasInvalidatedForNewUpdateAvailable:(id)newUpdateAvailable;	// 0x16a5cd
- (void)client:(id)client automaticDownloadDidFailToStartForNewUpdateAvailable:(id)automaticDownload withError:(id)error;	// 0x16a5b5
- (void)client:(id)client downloadDidStart:(id)download;	// 0x16a5a5
- (void)client:(id)client downloadDidFail:(id)download withError:(id)error;	// 0x16a45d
- (void)client:(id)client downloadDidFinish:(id)download;	// 0x16a3bd
- (void)client:(id)client installDidStart:(id)install;	// 0x16a30d
- (void)client:(id)client installDidFail:(id)install withError:(id)error;	// 0x16a271
- (void)client:(id)client installDidFinish:(id)install;	// 0x16a205
- (void)_unregisterForInstallRelatedNotifications;	// 0x16a101
- (void)_registerForInstallRelatedNotifications;	// 0x169f91
- (void)_setUpdateToInstall:(id)install;	// 0x169f49
- (void)_resetAndCancelExistingScheduledForcedInstallAlerts;	// 0x169ee5
- (void)_showOrScheduleNextForcedInstallAlert;	// 0x169e91
- (void)_showOrScheduleNextForcedInstallAlertWithReasons:(int)reasons;	// 0x169d49
- (void)_isUpdateInstallable:(id)installable;	// 0x169c1d
- (void)_showForcedInstallAlert;	// 0x169b7d
- (void)_scheduleForcedInstallRepeatAlert:(double)alert;	// 0x169b1d
- (BOOL)_forceInstallAfterDownload;	// 0x169add
- (void)_handleInstallError:(id)error;	// 0x169945
- (BOOL)_isSettingsActive;	// 0x1698fd
- (void)_resetState;	// 0x16978d
- (void)_autoDownloadUnknownToUserFailedForDescriptor:(id)descriptor error:(id)error;	// 0x169699
- (void)_migrateForNewOSVersionIfNecessary;	// 0x169549
- (void)_clearLegacyBadgePreferenceIfNecessary;	// 0x169491
- (BOOL)_isSettingsBadgedForSoftwareUpdate;	// 0x169401
- (void)_toggleSettingsBadge:(BOOL)badge;	// 0x169239
@end
