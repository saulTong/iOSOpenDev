/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUnknownSuperclass.h"

@class SAAceView;

@interface SBPendingAceView : SBUnknownSuperclass {
	SAAceView *_aceView;	// 4 = 0x4
	int _phase;	// 8 = 0x8
}
@property(retain, nonatomic) SAAceView *aceView;	// G=0x1a76a5; S=0x1a777d; @synthesize=_aceView
@property(assign, nonatomic) int phase;	// G=0x1a7685; S=0x1a7695; @synthesize=_phase
- (id)initWithAceView:(id)aceView phase:(int)phase;	// 0x1a7715
- (void)dealloc;	// 0x1a77a5
// declared property getter: - (int)phase;	// 0x1a7685
// declared property setter: - (void)setPhase:(int)phase;	// 0x1a7695
// declared property getter: - (id)aceView;	// 0x1a76a5
// declared property setter: - (void)setAceView:(id)view;	// 0x1a777d
@end
