/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUnknownSuperclass.h"

@class NSMutableDictionary;

@interface SBTransientSettings : SBUnknownSuperclass {
	NSMutableDictionary *_transientSettings;	// 4 = 0x4
	BOOL _dirty;	// 8 = 0x8
}
+ (id)sharedInstance;	// 0x16df0d
- (id)init;	// 0x16dec5
- (void)dealloc;	// 0x16e239
- (void)setValue:(id)value forKey:(id)key;	// 0x16e1e5
- (id)objectForKey:(id)key;	// 0x16e1b5
- (void)reload;	// 0x16e175
- (void)save;	// 0x16e045
- (id)_path;	// 0x16e019
- (void)_load;	// 0x16df39
@end
