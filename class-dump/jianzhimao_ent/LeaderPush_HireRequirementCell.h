//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseCell.h"

@class NSArray, NSLayoutConstraint, NSString, UIColor, UIFont, UIImageView, UILabel, UIView;

@interface LeaderPush_HireRequirementCell : BaseCell
{
    long long _cellShowType;
    NSString *_customTitle;
    NSString *_hintContent;
    double _titleMargin;
    UIFont *_titleFont;
    UIColor *_titleColor;
    UIColor *_hintColor;
    NSArray *_requirementArray;
    UIView *_requirementContainView;
    UILabel *_hintLabel;
    UIImageView *_arrow;
    UILabel *_customTitleLabel;
    UIImageView *_divideLine;
    NSLayoutConstraint *_titleMarginConstraint;
    NSLayoutConstraint *_titleWidthContraint;
}

@property(nonatomic) __weak NSLayoutConstraint *titleWidthContraint; // @synthesize titleWidthContraint=_titleWidthContraint;
@property(nonatomic) __weak NSLayoutConstraint *titleMarginConstraint; // @synthesize titleMarginConstraint=_titleMarginConstraint;
@property(nonatomic) __weak UIImageView *divideLine; // @synthesize divideLine=_divideLine;
@property(nonatomic) __weak UILabel *customTitleLabel; // @synthesize customTitleLabel=_customTitleLabel;
@property(nonatomic) __weak UIImageView *arrow; // @synthesize arrow=_arrow;
@property(nonatomic) __weak UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(nonatomic) __weak UIView *requirementContainView; // @synthesize requirementContainView=_requirementContainView;
@property(retain, nonatomic) NSArray *requirementArray; // @synthesize requirementArray=_requirementArray;
@property(retain, nonatomic) UIColor *hintColor; // @synthesize hintColor=_hintColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(nonatomic) double titleMargin; // @synthesize titleMargin=_titleMargin;
@property(copy, nonatomic) NSString *hintContent; // @synthesize hintContent=_hintContent;
@property(copy, nonatomic) NSString *customTitle; // @synthesize customTitle=_customTitle;
@property(nonatomic) long long cellShowType; // @synthesize cellShowType=_cellShowType;
- (void).cxx_destruct;
- (void)refreshHireRequirement;
- (void)layoutSubviews;
- (void)awakeFromNib;

@end

