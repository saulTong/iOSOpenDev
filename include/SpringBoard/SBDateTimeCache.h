/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUnknownSuperclass.h"


@interface SBDateTimeCache : SBUnknownSuperclass {
	double _yesterday;	// 4 = 0x4
	double _today;	// 12 = 0xc
	double _tomorrow;	// 20 = 0x14
	double _2daysFromNow;	// 28 = 0x1c
	double _6daysAgo;	// 36 = 0x24
	double _prevWeek;	// 44 = 0x2c
	double _nextWeek;	// 52 = 0x34
	double _lastAttemptedResetTime;	// 60 = 0x3c
	double _lastSuccessfulResetTime;	// 68 = 0x44
}
@property(readonly, assign) double yesterday;	// G=0x1a7551; converted property
@property(readonly, assign) double today;	// G=0x1a75b1; converted property
@property(readonly, assign) double tomorrow;	// G=0x1a7581; converted property
@property(readonly, assign) double prevWeek;	// G=0x1a7521; converted property
@property(readonly, assign) double nextWeek;	// G=0x1a74f1; converted property
+ (id)sharedInstance;	// 0x1a6e81
- (id)init;	// 0x1a6d9d
- (void)dealloc;	// 0x1a75e1
// converted property getter: - (double)today;	// 0x1a75b1
// converted property getter: - (double)tomorrow;	// 0x1a7581
// converted property getter: - (double)yesterday;	// 0x1a7551
// converted property getter: - (double)prevWeek;	// 0x1a7521
// converted property getter: - (double)nextWeek;	// 0x1a74f1
- (BOOL)isToday:(double)today;	// 0x1a74bd
- (BOOL)_isToday:(double)today;	// 0x1a6d55
- (BOOL)isTomorrow:(double)tomorrow;	// 0x1a745d
- (BOOL)isYesterday:(double)yesterday;	// 0x1a73fd
- (BOOL)isWithinPrevWeek:(double)week;	// 0x1a73d9
- (BOOL)isWithinPrevWeek:(double)week includeToday:(BOOL)today;	// 0x1a733d
- (BOOL)isWithinNextWeek:(double)week;	// 0x1a72dd
- (void)_resetAndConfigureIfNecessary;	// 0x1a72a1
- (void)_resetAndConfigure;	// 0x1a7041
- (id)description;	// 0x1a6ead
@end
