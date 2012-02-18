/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUnknownSuperclass.h"

@class NSString;

@interface SBDismissOnlyAlertItem : SBUnknownSuperclass {
	NSString *_title;	// 16 = 0x10
	NSString *_body;	// 20 = 0x14
	double _autoDismissInterval;	// 24 = 0x18
}
@property(assign) double autoDismissInterval;	// G=0x9f795; S=0x9f7ad; converted property
@property(retain) NSString *title;	// G=0x9f7c1; S=0x9fa11; converted property
@property(retain) id bodyText;	// G=0x9f7d1; S=0x9f9a5; converted property
- (id)initWithTitle:(id)title body:(id)body;	// 0x9f7e1
- (void)dealloc;	// 0x9fa7d
// converted property getter: - (double)autoDismissInterval;	// 0x9f795
// converted property setter: - (void)setAutoDismissInterval:(double)interval;	// 0x9f7ad
// converted property setter: - (void)setTitle:(id)title;	// 0x9fa11
// converted property setter: - (void)setBodyText:(id)text;	// 0x9f9a5
// converted property getter: - (id)title;	// 0x9f7c1
// converted property getter: - (id)bodyText;	// 0x9f7d1
- (void)performUnlockAction;	// 0x9f995
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;	// 0x9f8b9
- (id)lockLabel;	// 0x9f861
@end
