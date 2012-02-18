/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUnknownSuperclass.h"


@interface SBLaunchdUtilities : SBUnknownSuperclass {
}
+ (BOOL)createJobWithLabel:(id)label path:(id)path arguments:(id)arguments environment:(id)environment standardOutputPath:(id)path5 standardErrorPath:(id)path6 machServices:(id)services threadPriority:(long long)priority waitForDebugger:(BOOL)debugger denyCreatingOtherJobs:(BOOL)jobs runAtLoad:(BOOL)load disableASLR:(BOOL)aslr;	// 0xcfb91
+ (void)deleteJobWithLabel:(id)label;	// 0xd01bd
+ (int)pidForLabel:(id)label;	// 0xd0409
+ (int)lastExitStatusForLabel:(id)label;	// 0xd0445
+ (id)allJobLabels;	// 0xd0481
+ (void)setJetsamPriority:(long long)priority forJobLabel:(id)jobLabel isFrontmost:(BOOL)frontmost;	// 0xd0241
@end
