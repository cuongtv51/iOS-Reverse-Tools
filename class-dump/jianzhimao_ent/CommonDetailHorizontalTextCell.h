//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CommonCellBase.h"

@class NSLayoutConstraint, UIButton, UIImageView, UILabel, UITextView;

@interface CommonDetailHorizontalTextCell : CommonCellBase
{
    UILabel *_lblTitle;
    UITextView *_tvContent;
    NSLayoutConstraint *_contentTextHeight;
    UIButton *_btnAccessory;
    UIImageView *_accessoryLine;
    UIImageView *_topLine;
}

@property(nonatomic) __weak UIImageView *topLine; // @synthesize topLine=_topLine;
@property(nonatomic) __weak UIImageView *accessoryLine; // @synthesize accessoryLine=_accessoryLine;
@property(nonatomic) __weak UIButton *btnAccessory; // @synthesize btnAccessory=_btnAccessory;
@property(nonatomic) __weak NSLayoutConstraint *contentTextHeight; // @synthesize contentTextHeight=_contentTextHeight;
@property(nonatomic) __weak UITextView *tvContent; // @synthesize tvContent=_tvContent;
@property(nonatomic) __weak UILabel *lblTitle; // @synthesize lblTitle=_lblTitle;
- (void).cxx_destruct;
- (double)cellHeight;
- (void)setDataSource:(id)arg1;

@end

