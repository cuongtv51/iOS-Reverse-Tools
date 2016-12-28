//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseCell.h"

@class UIImageView, UILabel;

@interface JobSection4Cell : BaseCell
{
    UILabel *_titleLab;
    UILabel *_addressLab;
    UIImageView *_addressLogoView;
}

@property(retain, nonatomic) UIImageView *addressLogoView; // @synthesize addressLogoView=_addressLogoView;
@property(retain, nonatomic) UILabel *addressLab; // @synthesize addressLab=_addressLab;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)resetFrame;
- (void)setAddress:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

