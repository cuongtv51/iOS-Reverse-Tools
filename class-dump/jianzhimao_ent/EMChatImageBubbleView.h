//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EMChatBaseBubbleView.h"

@class UIImageView;

@interface EMChatImageBubbleView : EMChatBaseBubbleView
{
    UIImageView *_imageView;
}

+ (double)heightForBubbleWithObject:(id)arg1;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)bubbleViewPressed:(id)arg1;
- (void)setModel:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

