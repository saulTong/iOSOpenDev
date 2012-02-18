/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBDefaultDateLabel.h"
#import "SBRelativeDateTimerDelegate.h"

@class SBRelativeDateTimer;

@interface SBRelativeDateLabel : SBDefaultDateLabel <SBRelativeDateTimerDelegate> {
	SBRelativeDateTimer *_relativeDateTimer;	// 136 = 0x88
	unsigned _value;	// 140 = 0x8c
	int _resolution;	// 144 = 0x90
	int _comparedToNow;	// 148 = 0x94
}
- (void)setTimeZoneRelativeStartDate:(id)date absoluteStartDate:(id)date2;	// 0x18a7d5
- (void)dealloc;	// 0x18ad8d
- (id)constructLabelString;	// 0x18a8c9
- (void)timerFiredWithValue:(unsigned)value forResolution:(int)resolution comparedToNow:(int)now;	// 0x18a889
@end

