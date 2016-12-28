//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SSUIShareActionSheetItem, UIButton, UILabel;

@interface SSUIShareActinoSheetItemView : UIView
{
    long long _index;
    UILabel *_nameLabel;
    UIButton *_platformIcon;
    SSUIShareActionSheetItem *_item;
    CDUnknownBlockType _clickHandle;
    CDUnknownBlockType _cancelHandle;
    SSUIShareActionSheetItem *_baseItem;
}

@property(retain, nonatomic) SSUIShareActionSheetItem *baseItem; // @synthesize baseItem=_baseItem;
@property(copy, nonatomic) CDUnknownBlockType cancelHandle; // @synthesize cancelHandle=_cancelHandle;
@property(copy, nonatomic) CDUnknownBlockType clickHandle; // @synthesize clickHandle=_clickHandle;
@property(retain, nonatomic) SSUIShareActionSheetItem *item; // @synthesize item=_item;
@property(retain, nonatomic) UIButton *platformIcon; // @synthesize platformIcon=_platformIcon;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)itemClicked:(id)arg1;
- (id)initWithIndex:(long long)arg1;

@end

