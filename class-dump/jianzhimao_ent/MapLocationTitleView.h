//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class UILabel;

@interface MapLocationTitleView : UIImageView
{
    UIImageView *_startLogoView;
    UILabel *_startTitleLab;
    UILabel *_startLab;
    UIImageView *_endLogoView;
    UILabel *_endTitleLab;
    UILabel *_endLab;
}

@property(retain, nonatomic) UILabel *endLab; // @synthesize endLab=_endLab;
@property(retain, nonatomic) UILabel *endTitleLab; // @synthesize endTitleLab=_endTitleLab;
@property(retain, nonatomic) UIImageView *endLogoView; // @synthesize endLogoView=_endLogoView;
@property(retain, nonatomic) UILabel *startLab; // @synthesize startLab=_startLab;
@property(retain, nonatomic) UILabel *startTitleLab; // @synthesize startTitleLab=_startTitleLab;
@property(retain, nonatomic) UIImageView *startLogoView; // @synthesize startLogoView=_startLogoView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end
