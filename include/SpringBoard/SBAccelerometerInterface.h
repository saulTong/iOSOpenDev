/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBUnknownSuperclass.h"

@class NSMutableArray, NSLock;

@interface SBAccelerometerInterface : SBUnknownSuperclass {
	NSLock *_lock;	// 4 = 0x4
	double _samplingInterval;	// 8 = 0x8
	double _topDisplayLastUpdateTime;	// 16 = 0x10
	double _topDisplayInterval;	// 24 = 0x18
	NSMutableArray *_clients;	// 32 = 0x20
	BOOL _springBoardWantsEvents;	// 36 = 0x24
}
+ (void)initialize;	// 0xdb0b0
+ (id)sharedInstance;	// 0xdaf00
- (id)init;	// 0xdb024
- (void)dealloc;	// 0xdbe1c
- (void)updateSettings;	// 0xdb934
- (void)clientRequestedAccelerometerEvents:(unsigned)events updateInterval:(double)interval xThreshold:(float)threshold yThreshold:(float)threshold4 zThreshold:(float)threshold5 auditToken:(XXStruct_kUSYWB *)token;	// 0xdb584
- (void)setSpringBoardWantsEvents:(BOOL)events;	// 0xdb564
- (void)_clientInvalidated:(id)invalidated;	// 0xdb47c
- (void)accelerometerDataReceived:(double)received x:(float)x y:(float)y z:(float)z type:(unsigned)type;	// 0xdb100
@end
