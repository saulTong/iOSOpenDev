/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUnknownSuperclass.h"
#import "SpringBoard-Structs.h"

@class UILabel;

@interface SBPasscodeTextField : SBUnknownSuperclass {
	float _letterSpacing;	// 288 = 0x120
	BOOL _usesLargeClearButton;	// 292 = 0x124
	UILabel *_hiddenLabel;	// 296 = 0x128
}
@property(assign, nonatomic) float letterSpacing;	// G=0xf3c99; S=0xf60b1; @synthesize=_letterSpacing
@property(assign, nonatomic) BOOL usesLargeClearButton;	// G=0xf3c79; S=0xf3c89; @synthesize=_usesLargeClearButton
- (void)dealloc;	// 0xf5bbd
- (CGRect)clearButtonRectForBounds:(CGRect)bounds;	// 0xf60f9
// declared property setter: - (void)setLetterSpacing:(float)spacing;	// 0xf60b1
- (id)createTextLabelWithTextColor:(id)textColor;	// 0xf6061
- (void)attachFieldEditor:(id)editor;	// 0xf5fe1
- (void)_endedEditing;	// 0xf5e31
- (id)_style;	// 0xf5dc1
- (void)_handleKeyEvent:(GSEventRef)event;	// 0xf5cdd
- (BOOL)becomeFirstResponder;	// 0xf5c75
- (BOOL)resignFirstResponder;	// 0xf5c09
// declared property getter: - (BOOL)usesLargeClearButton;	// 0xf3c79
// declared property setter: - (void)setUsesLargeClearButton:(BOOL)button;	// 0xf3c89
// declared property getter: - (float)letterSpacing;	// 0xf3c99
@end
