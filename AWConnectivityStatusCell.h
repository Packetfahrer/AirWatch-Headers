/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <UIKit/UITableViewCell.h>

@class UIImage, NSString, UIColor;

__attribute__((visibility("hidden")))
@interface AWConnectivityStatusCell : UITableViewCell {
	UIColor* _titleColor;
	UIImage* _cellImage;
	NSString* _cellTitle;
	UIImage* _availabilityStatusImage;
	UIImage* _arrowImage;
}
@property(retain, nonatomic) UIImage* arrowImage;
@property(retain, nonatomic) UIImage* availabilityStatusImage;
@property(retain, nonatomic) UIColor* titleColor;
@property(copy, nonatomic) NSString* cellTitle;
@property(retain, nonatomic) UIImage* cellImage;
-(void)dealloc;
@end

