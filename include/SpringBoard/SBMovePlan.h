/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUnknownSuperclass.h"

@class SBIconListView, SBIcon;

@interface SBMovePlan : SBUnknownSuperclass {
	SBIcon *_icon;	// 4 = 0x4
	SBIconListView *_source;	// 8 = 0x8
	SBIconListView *_destination;	// 12 = 0xc
	int _index;	// 16 = 0x10
}
@property(readonly, retain) SBIcon *icon;	// G=0xa95d4; converted property
@property(readonly, retain) SBIconListView *source;	// G=0xa95c0; converted property
@property(readonly, retain) SBIconListView *destination;	// G=0xa95ac; converted property
@property(readonly, assign) int index;	// G=0xa9598; converted property
- (id)initWithIcon:(id)icon index:(int)index source:(id)source destination:(id)destination;	// 0xa9940
- (void)dealloc;	// 0xa9a24
// converted property getter: - (int)index;	// 0xa9598
// converted property getter: - (id)destination;	// 0xa95ac
// converted property getter: - (id)source;	// 0xa95c0
// converted property getter: - (id)icon;	// 0xa95d4
@end
