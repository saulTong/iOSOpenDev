/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "SpringBoard-Structs.h"

#import "UIGestureRecognizerDelegate.h"


@protocol SBBulletinListViewDelegate <NSObject, UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate>
- (void)handleTap:(id)tap;
- (void)handlePan:(id)pan;
- (void)handleEatenTouch:(id)touch;
@end

