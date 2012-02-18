/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUnknownSuperclass.h"

@class UIImageView, UILabel;
@protocol SBAssistantGuideDomainListCellDelegate;

@interface SBAssistantGuideDomainListCell : SBUnknownSuperclass {
	id<SBAssistantGuideDomainListCellDelegate> _delegate;	// 244 = 0xf4
	UIImageView *_iconView;	// 248 = 0xf8
	UILabel *_tagPhraseLabel;	// 252 = 0xfc
	UILabel *_domainNameLabel;	// 256 = 0x100
	UIImageView *_chevronView;	// 260 = 0x104
	UIImageView *_separator;	// 264 = 0x108
}
@property(assign, nonatomic) id<SBAssistantGuideDomainListCellDelegate> delegate;	// G=0x19d531; S=0x19d541; @synthesize=_delegate
+ (float)rowHeight;	// 0x19d529
- (id)initWithReuseIdentifier:(id)reuseIdentifier;	// 0x19da61
- (void)dealloc;	// 0x19e0e1
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;	// 0x19e08d
- (void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;	// 0x19e039
- (void)setDomainName:(id)name;	// 0x19d551
- (void)setTagPhrase:(id)phrase;	// 0x19d7c1
- (void)setIconImage:(id)image;	// 0x19d979
- (void)prepareForReuse;	// 0x19dff9
- (void)layoutSubviews;	// 0x19dc99
// declared property getter: - (id)delegate;	// 0x19d531
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x19d541
@end
