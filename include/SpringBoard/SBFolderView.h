/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "UITextFieldDelegate.h"
#import "SBUnknownSuperclass.h"

@class SBFolderIconListView, UIImageView, SBFolder, UILabel, UIView, SBFolderTextField;

@interface SBFolderView : SBUnknownSuperclass <UITextFieldDelegate> {
	SBFolder *_folder;	// 48 = 0x30
	UILabel *_label;	// 52 = 0x34
	SBFolderTextField *_textField;	// 56 = 0x38
	SBFolderIconListView *_iconListView;	// 60 = 0x3c
	UIView *_backgroundView;	// 64 = 0x40
	BOOL _isEditing;	// 68 = 0x44
	UIImageView *_shadows[12];	// 72 = 0x48
	unsigned _rows;	// 120 = 0x78
	XXStruct_9ihRqB _notchInfo;	// 124 = 0x7c
	int _orientation;	// 144 = 0x90
}
@property(retain) SBFolderIconListView *iconListView;	// G=0x11a42d; S=0x11b749; converted property
@property(retain) id scrollOffset;	// G=0x11a425; S=0x11a429; converted property
@property(readonly, assign) unsigned rows;	// G=0x11a409; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x11a539
- (void)_setupNavigationBar;	// 0x11a3f5
- (void)_setupBackgroundView;	// 0x11be1d
- (void)_setupFolderTitleLabel;	// 0x11bcad
- (CGSize)_sizeForCurrentConfiguration;	// 0x11bb81
- (void)prepareToSetOrientation:(int)setOrientation;	// 0x11a3f9
- (void)setRows:(unsigned)rows notchInfo:(XXStruct_9ihRqB)info orientation:(int)orientation;	// 0x11ba2d
- (void)cleanUpAfterOrientationChange;	// 0x11a3fd
- (void)prepareToDropIconView:(id)dropIconView targetFolderBounds:(CGRect *)bounds;	// 0x11a401
- (void)didDropIconView;	// 0x11a405
// converted property getter: - (unsigned)rows;	// 0x11a409
- (Class)notchViewClass;	// 0x11ba11
- (CGRect)rectForNotchLinen;	// 0x11b8cd
- (void)_createInitialIconViews;	// 0x11b7e9
// converted property setter: - (void)setIconListView:(id)view;	// 0x11b749
- (void)noteHasGrabbedIcon:(id)icon;	// 0x11a419
- (void)noteGrabbedIconLocation:(CGPoint)location;	// 0x11a41d
- (BOOL)isScrolling;	// 0x11a421
// converted property getter: - (id)scrollOffset;	// 0x11a425
// converted property setter: - (void)setScrollOffset:(id)offset;	// 0x11a429
- (void)_placeIconListView;	// 0x11b649
// converted property getter: - (id)iconListView;	// 0x11a42d
- (void)dealloc;	// 0x11b581
- (void)setFolder:(id)folder;	// 0x11b539
- (float)_labelHorizontalInset;	// 0x11b4cd
- (float)_labelVerticalInset;	// 0x11b485
- (void)setFolderName:(id)name;	// 0x11b3d9
- (void)_placeLabelAndTextField;	// 0x11b1f1
- (void)_placeBackgroundView;	// 0x11b199
- (void)_placeBars;	// 0x11a43d
- (BOOL)canEditTitle;	// 0x11a441
- (void)setIsEditing:(BOOL)editing animated:(BOOL)animated;	// 0x11adb1
- (void)enableShiftForFolderTextFieldAfterBeginEditing;	// 0x11ad79
- (void)textFieldDidBeginEditing:(id)textField;	// 0x11acb9
- (void)textFieldDidEndEditing:(id)textField;	// 0x11abc9
- (BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;	// 0x11ab65
- (BOOL)textFieldShouldClear:(id)textField;	// 0x11ab3d
- (NSRange)textField:(id)field willChangeSelectionFromCharacterRange:(NSRange)characterRange toCharacterRange:(NSRange)characterRange3;	// 0x11ab09
- (BOOL)textFieldShouldReturn:(id)textField;	// 0x11aae1
- (void)setBackgroundAlpha:(float)alpha;	// 0x11aaa1
- (id)editTitleField;	// 0x11a445
- (id)_shadowForPosition:(int)position;	// 0x11a911
- (void)_placeShadow:(int)shadow;	// 0x11a631
- (void)_placeShadows;	// 0x11a5ad
@end
