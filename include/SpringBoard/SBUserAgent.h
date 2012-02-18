/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUIUserAgent.h"
#import "SBUnknownSuperclass.h"

@class SBBulletinAlertHandlerRegistry;

@interface SBUserAgent : SBUnknownSuperclass <SBUIUserAgent> {
	SBBulletinAlertHandlerRegistry *_modalAlertRegistry;	// 4 = 0x4
}
+ (id)sharedUserAgent;	// 0x12dfa1
- (id)init;	// 0x12df3d
- (void)dealloc;	// 0x12ec59
- (void)updateInterfaceOrientationIfNecessary;	// 0x12eb51
- (int)activeInterfaceOrientation;	// 0x12eb31
- (id)foregroundApplicationDisplayID;	// 0x12eb15
- (id)foregroundDisplayID;	// 0x12eaf9
- (id)topSuspendedEventsOnlyDisplayID;	// 0x12eadd
- (BOOL)deviceIsLocked;	// 0x12eaa9
- (BOOL)lockScreenIsShowing;	// 0x12ea51
- (BOOL)homeScreenIsDisplayingWallpaper;	// 0x12ea1d
- (BOOL)springBoardIsActive;	// 0x12e9fd
- (void)setFlipBackAttributeForSEODisplayWithIdentifier:(id)identifier;	// 0x12e9c1
- (BOOL)launchDisplayWithURL:(id)url forCall:(BOOL)call sender:(id)sender;	// 0x12e8c9
- (BOOL)canUserLaunchIcon;	// 0x12e8bd
- (id)createWallpaperView:(int)view;	// 0x12e84d
- (void)openURL:(id)url animateIn:(BOOL)anIn scale:(float)scale start:(double)start duration:(float)duration animateOut:(BOOL)anOut;	// 0x12e715
- (BOOL)_openURL:(id)url allowUnlock:(BOOL)unlock animated:(BOOL)animated activationFlag:(unsigned)flag;	// 0x12e5c9
- (BOOL)openURL:(id)url allowUnlock:(BOOL)unlock animated:(BOOL)animated;	// 0x12e5a5
- (BOOL)canLaunchFromBulletinWithURL:(id)url bundleID:(id)anId;	// 0x12e559
- (BOOL)launchFromBulletinWithURL:(id)url bundleID:(id)anId allowUnlock:(BOOL)unlock animate:(BOOL)animate launchOrigin:(int)origin;	// 0x12e4bd
- (BOOL)launchFromPushOrLocalBulletin:(id)pushOrLocalBulletin origin:(int)origin;	// 0x12e2dd
- (void)dimScreen:(BOOL)screen;	// 0x12e231
- (void)setBadgeNumberOrString:(id)string forApplicationWithID:(id)anId;	// 0x12e1e5
- (void)setIdleText:(id)text;	// 0x12e1ad
- (int)networkUsageTypeForAppWithDisplayID:(id)displayID;	// 0x12e14d
- (void)playRingtoneAtPath:(id)path;	// 0x12e139
- (void)playRingtoneAtPath:(id)path vibrationPattern:(id)pattern;	// 0x12e015
- (void)stopRinging;	// 0x12e001
- (void)prepareToAnswerCall;	// 0x12dfcd
- (id)modalBulletinAlertHandlerRegistry;	// 0x12df19
- (BOOL)isSBUILoggingEnabled;	// 0x12df29
@end
