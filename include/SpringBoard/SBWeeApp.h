/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUnknownSuperclass.h"
#import "SpringBoard-Structs.h"
#import "BBWeeAppController.h"

@class NSString;

@interface SBWeeApp : SBUnknownSuperclass <BBWeeAppController> {
	id<BBWeeAppController> _weeAppController;	// 4 = 0x4
	NSString *_sectionID;	// 8 = 0x8
	struct {
		unsigned viewHeight : 1;
		unsigned viewWillAppear : 1;
		unsigned viewDidAppear : 1;
		unsigned viewWillDisappear : 1;
		unsigned viewDidDisappear : 1;
		unsigned willRotate : 1;
		unsigned willAnimateRotation : 1;
		unsigned didRotate : 1;
		unsigned loadPlaceholderView : 1;
		unsigned loadFullView : 1;
		unsigned unloadView : 1;
		unsigned launchURL : 1;
		unsigned launchURLForTapLocation : 1;
		unsigned clearSnapshotImage : 1;
	} _weeAppFlags;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSString *sectionID;	// G=0x197281; @synthesize=_sectionID
- (id)initWithWeeAppController:(id)weeAppController sectionID:(id)anId;	// 0x197291
- (void)dealloc;	// 0x197939
- (id)view;	// 0x197919
- (float)viewHeight;	// 0x1978cd
- (void)viewWillAppear;	// 0x197891
- (void)viewDidAppear;	// 0x197855
- (void)viewWillDisappear;	// 0x197819
- (void)viewDidDisappear;	// 0x1977dd
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x19779d
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation;	// 0x19775d
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x19771d
- (void)loadPlaceholderView;	// 0x1976e1
- (void)loadFullView;	// 0x1976a5
- (void)unloadView;	// 0x197669
- (id)launchURLForTapLocation:(CGPoint)tapLocation;	// 0x1975fd
- (void)clearShapshotImage;	// 0x1975c1
// declared property getter: - (id)sectionID;	// 0x197281
@end
