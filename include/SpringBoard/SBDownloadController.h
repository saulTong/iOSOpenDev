/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUnknownSuperclass.h"
#import "SSDownloadQueueObserver.h"

@class NSMutableSet, NSMutableArray, SSDownloadQueue;

@interface SBDownloadController : SBUnknownSuperclass <SSDownloadQueueObserver> {
	SSDownloadQueue *_downloadQueue;	// 4 = 0x4
	NSMutableSet *_pendingDownloadRemovals;	// 8 = 0x8
	NSMutableSet *_pendingDownloadIconsToSwapForApplicationIcons;	// 12 = 0xc
	NSMutableArray *_downloads;	// 16 = 0x10
	unsigned _downloadLoadCount;	// 20 = 0x14
}
+ (id)sharedInstance;	// 0xc5acd
- (id)init;	// 0xc5799
- (void)dealloc;	// 0xc71b9
- (void)_finishDownload:(id)download;	// 0xc7119
- (void)_downloadsEnded;	// 0xc7095
- (void)_delayedDownloadQueueChange;	// 0xc7075
- (void)downloadQueue:(id)queue changedWithRemovals:(id)removals;	// 0xc6e15
- (void)_processDownloadQueueChangedWithPendingRemovals;	// 0xc6081
- (void)downloadQueue:(id)queue downloadStatusChangedAtIndex:(int)index;	// 0xc5efd
- (void)downloadQueueNetworkUsageChanged:(id)changed;	// 0xc5ead
- (void)_showDownloadQueueError;	// 0xc5dd9
- (void)downloadQueueError:(id)error;	// 0xc5da5
- (BOOL)checkQueue;	// 0xc5d81
- (id)currentDownloads;	// 0xc5d49
- (void)cancelDownload:(id)download;	// 0xc5d25
- (BOOL)moveDownloadToFrontOfQueue:(id)queue;	// 0xc5c01
- (BOOL)bundledIdentifierIsBeingDownloaded:(id)downloaded;	// 0xc5b15
@end
