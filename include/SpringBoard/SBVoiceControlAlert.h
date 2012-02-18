/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBAlert.h"


@interface SBVoiceControlAlert : SBAlert {
	struct {
		unsigned shouldBeActivated : 1;
		unsigned isReadyToBeActivated : 1;
		unsigned hasBeenActivated : 1;
	} _voiceControlFlags;	// 60 = 0x3c
}
+ (id)pendingOrActiveAlert;	// 0xd48cd
+ (void)registerForAlerts;	// 0xda1cd
+ (void)unregisterForAlerts;	// 0xda125
+ (BOOL)shouldEnterVoiceControl;	// 0xd9eb5
+ (BOOL)resetVoiceControlIfNecessary:(BOOL)necessary;	// 0xd9df9
+ (void)bluetoothDeviceRequestedVoiceControl:(id)control;	// 0xd9d21
+ (void)bluetoothDeviceTerminatedVoiceControl:(id)control;	// 0xd9cdd
+ (BOOL)_bluetoothDevicesPickable;	// 0xd9bcd
+ (void)_configureSession:(id)session forAlert:(id)alert;	// 0xd98ad
+ (void)setNextRecognitionAudioInputPaths:(id)paths;	// 0xd9abd
+ (void)_setNextRecognitionAudioInputPathForSession:(id)session resetting:(BOOL)resetting;	// 0xd9afd
- (void)_resign;	// 0xd491d
- (void)_makeActive;	// 0xd494d
- (id)_session;	// 0xd49a1
- (void)_workspaceActivate;	// 0xda7b5
- (BOOL)recognitionSessionWillBeginAction:(id)recognitionSession;	// 0xd4a51
- (void)_prime;	// 0xd48dd
- (void)_setRoutingAttributesForWiredHeadset:(BOOL)wiredHeadset;	// 0xd4ac1
- (id)init;	// 0xda725
- (id)initFromWiredHeadsetButton;	// 0xd4b2d
- (id)initFromBluetoothDevice:(id)bluetoothDevice;	// 0xd4c11
- (BOOL)allowsEventOnlySuspension;	// 0xd48e1
- (void)deactivate;	// 0xda6bd
- (void)deactivateAfterLocking;	// 0xda699
- (void)activate;	// 0xda655
- (id)initFromMenuButton;	// 0xda4a5
- (void)activateWhenReady;	// 0xda471
- (void)cancelIfNotActivated;	// 0xd4c81
- (void)cancel;	// 0xda3bd
- (void)dealloc;	// 0xda351
- (void)_proximityChanged:(id)changed;	// 0xda2a9
- (void)handleHeadsetButtonUpFromActivation:(BOOL)activation;	// 0xd4cad
- (BOOL)handleMenuButtonTap;	// 0xda275
- (double)autoDimTime;	// 0xd48e5
- (id)alertDisplayViewWithSize:(CGSize)size;	// 0xd4d11
@end

