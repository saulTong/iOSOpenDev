/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUserInstalledApplicationIcon.h"

@class SBNewsstandApplication;

@interface SBNewsstandApplicationIcon : SBUserInstalledApplicationIcon {
	SBNewsstandApplication *_fakeApp;	// 76 = 0x4c
}
+ (id)iconOverlayImageForIcon:(id)icon inLocation:(int)location;	// 0x13f151
- (id)initWithApplication:(id)application;	// 0x13f685
- (void)dealloc;	// 0x13f639
- (BOOL)shouldWarmUp;	// 0x13f0f9
- (id)application;	// 0x13f111
- (BOOL)launchEnabled;	// 0x13f5e9
- (void)launch;	// 0x13f5ad
- (int)iconFormatForLocation:(int)location;	// 0x13f0fd
- (BOOL)iconAppearsInNewsstand;	// 0x13f109
- (id)getGenericIconImage:(int)image;	// 0x13f489
- (id)iconOverlayImageForLocation:(int)location;	// 0x13f459
- (BOOL)shouldCacheImageForFormat:(int)format;	// 0x13f415
- (id)badgeNumberOrString;	// 0x13f391
@end

