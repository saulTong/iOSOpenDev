/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUnknownSuperclass.h"

@class NSCache;

@interface SBGestureViewVendor : SBUnknownSuperclass {
	NSCache *m_cache;	// 4 = 0x4
}
+ (id)sharedInstance;	// 0x183591
- (id)viewForApp:(id)app gestureType:(int)type includeStatusBar:(BOOL)bar;	// 0x183a81
- (void)clearCacheForApp:(id)app reason:(id)reason;	// 0x1834f1
- (void)clearCacheForReason:(id)reason;	// 0x183531
- (id)init;	// 0x1839dd
- (void)dealloc;	// 0x183991
- (void)maskViewIfNeeded:(id)needed gestureType:(int)type viewType:(int)type3 contextHostViewRequester:(id)requester app:(id)app;	// 0x1835bd
@end
