//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class TagButton, TrusteeshipRequirementTagBean;

@interface TagCollectionCell : UICollectionViewCell
{
    TrusteeshipRequirementTagBean *_tagBean;
    TagButton *_typeBtn;
}

@property(nonatomic) __weak TagButton *typeBtn; // @synthesize typeBtn=_typeBtn;
@property(retain, nonatomic) TrusteeshipRequirementTagBean *tagBean; // @synthesize tagBean=_tagBean;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1;

@end

