//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CommonCellModelBase.h"

@class NSString;

@interface PersonalSignDetailCellModel : CommonCellModelBase
{
    _Bool _buttonEnable;
    NSString *_time;
    NSString *_iconImg;
    NSString *_distance;
    NSString *_signType;
    CDUnknownBlockType _aciton;
}

@property(nonatomic) _Bool buttonEnable; // @synthesize buttonEnable=_buttonEnable;
@property(copy, nonatomic) CDUnknownBlockType aciton; // @synthesize aciton=_aciton;
@property(retain, nonatomic) NSString *signType; // @synthesize signType=_signType;
@property(retain, nonatomic) NSString *distance; // @synthesize distance=_distance;
@property(retain, nonatomic) NSString *iconImg; // @synthesize iconImg=_iconImg;
@property(retain, nonatomic) NSString *time; // @synthesize time=_time;
- (void).cxx_destruct;

@end

