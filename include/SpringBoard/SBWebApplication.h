/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBApplication.h"

@class UIWebClip;

@interface SBWebApplication : SBApplication {
	UIWebClip *_webClip;	// 300 = 0x12c
}
@property(retain) UIWebClip *webClip;	// G=0x15cbb5; S=0x15cb91; @synthesize=_webClip
- (id)initWithBundleIdentifier:(id)bundleIdentifier webClip:(id)clip path:(id)path bundle:(id)bundle infoDictionary:(id)dictionary isSystemApplication:(BOOL)application signerIdentity:(id)identity provisioningProfileValidated:(BOOL)validated;	// 0x15ca35
- (void)dealloc;	// 0x15cfb1
- (BOOL)isWebApplication;	// 0x15ca31
- (BOOL)canFindDefaultImage:(BOOL *)image preferredScale:(float)scale originalOrientation:(int *)orientation currentOrientation:(int *)orientation4 launchingInterfaceOrientation:(int)orientation5 canUseIOSurface:(BOOL)surface imagePointer:(id *)pointer;	// 0x15ced5
- (void)setProcess:(id)process;	// 0x15ce01
- (void)exitedAbnormally;	// 0x15cd15
- (void)willActivateOtherWebApplication:(id)application;	// 0x15cbcd
// declared property getter: - (id)webClip;	// 0x15cbb5
// declared property setter: - (void)setWebClip:(id)clip;	// 0x15cb91
@end

