//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MsgBaseCell.h"

@class UIImageView, UILabel;

@interface TimeCell : MsgBaseCell
{
    UIImageView *_timeBgView;
    UILabel *_timeLab;
}

@property(retain, nonatomic) UILabel *timeLab; // @synthesize timeLab=_timeLab;
@property(retain, nonatomic) UIImageView *timeBgView; // @synthesize timeBgView=_timeBgView;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
