/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBUnknownSuperclass.h"

@class NSString, NSMutableSet;

@interface VolumeControl : SBUnknownSuperclass {
	BOOL _debounce;	// 4 = 0x4
	int _numberOfVolumeDecreasesSinceDownButtonDown;	// 8 = 0x8
	int _mode;	// 12 = 0xc
	NSMutableSet *_alwaysHiddenCategories;	// 16 = 0x10
	NSString *_lastDisplayedCategory;	// 20 = 0x14
	NSString *_lastEventCategory;	// 24 = 0x18
}
@property(readonly, retain) NSString *lastDisplayedCategory;	// G=0x622a9; converted property
+ (id)sharedVolumeControl;	// 0x623c9
+ (float)volumeStep;	// 0x623ad
- (id)init;	// 0x63465
- (void)dealloc;	// 0x633e1
- (void)addAlwaysHiddenCategory:(id)category;	// 0x63375
- (void)removeAlwaysHiddenCategory:(id)category;	// 0x63351
- (BOOL)_HUDIsDisplayableForCategory:(id)category;	// 0x632b1
- (void)toggleMute;	// 0x63209
- (float)volume;	// 0x631cd
- (void)_changeVolumeBy:(float)by;	// 0x63009
- (float)_calcButtonRepeatDelay;	// 0x62285
- (void)increaseVolume;	// 0x62f49
- (void)decreaseVolume;	// 0x62e1d
// converted property getter: - (id)lastDisplayedCategory;	// 0x622a9
- (void)handleVolumeEvent:(GSEventRef)event;	// 0x62c6d
- (void)cancelVolumeEvent;	// 0x62bf1
- (void)_registerForAVSystemControllerNotifications;	// 0x62af5
- (void)_unregisterForAVSystemControllerNotifications;	// 0x62a75
- (void)_serverConnectionDied:(id)died;	// 0x62a49
- (int)_volumeModeForCategory:(id)category;	// 0x6293d
- (void)_effectiveVolumeChanged:(id)changed;	// 0x62779
- (BOOL)_headphonesPresent;	// 0x626f5
- (id)_volumeHUDViewWithMode:(int)mode volume:(float)volume;	// 0x625a5
- (void)_presentVolumeHUDWithMode:(int)mode volume:(float)volume;	// 0x62519
- (id)volumeHUDForCurrentCategory;	// 0x624a1
- (void)hideVolumeHUDIfVisible;	// 0x62411
@end
