/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUnknownSuperclass.h"

@class UIImageView, UILabel, UIView, SBBulletinBannerItem;

@interface SBBannerView : SBUnknownSuperclass {
	SBBulletinBannerItem *_item;	// 48 = 0x30
	UIView *_iconView;	// 52 = 0x34
	UILabel *_titleLabel;	// 56 = 0x38
	UILabel *_messageLabel;	// 60 = 0x3c
	float _imageWidth;	// 64 = 0x40
	UIImageView *_bannerView;	// 68 = 0x44
	UIView *_underlayView;	// 72 = 0x48
}
@property(readonly, retain) SBBulletinBannerItem *item;	// G=0x162155; converted property
- (id)initWithItem:(id)item;	// 0x162a25
// converted property getter: - (id)item;	// 0x162155
- (void)dealloc;	// 0x1631d5
- (void)_createSubviewsWithBannerImage:(id)bannerImage;	// 0x1621cd
- (void)layoutSubviews;	// 0x162f71
- (id)_bannerMaskStretchedToWidth:(float)width;	// 0x162e91
- (id)_bannerImageWithAttachmentImage:(id)attachmentImage;	// 0x162b09
@end
