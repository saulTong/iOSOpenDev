/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUnknownSuperclass.h"


@interface SBScreenShotter : SBUnknownSuperclass {
	BOOL _writingScreenshot;	// 4 = 0x4
}
@property(assign) BOOL writingScreenshot;	// G=0xd0519; S=0xd0529; @synthesize=_writingScreenshot
+ (id)sharedInstance;	// 0xd054d
- (void)finishedWritingScreenshot:(id)screenshot didFinishSavingWithError:(id)error context:(void *)context;	// 0xd0539
- (void)saveScreenshot:(BOOL)screenshot;	// 0xd05f1
// declared property getter: - (BOOL)writingScreenshot;	// 0xd0519
// declared property setter: - (void)setWritingScreenshot:(BOOL)screenshot;	// 0xd0529
@end
