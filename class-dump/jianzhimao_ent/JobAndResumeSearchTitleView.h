//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseView.h"

@class JWSearchView, UIButton, UIImageView;

@interface JobAndResumeSearchTitleView : BaseView
{
    JWSearchView *_searchTF;
    UIButton *_cancleBtn;
    UIImageView *_bottomLine;
}

@property(retain, nonatomic) UIImageView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIButton *cancleBtn; // @synthesize cancleBtn=_cancleBtn;
@property(retain, nonatomic) JWSearchView *searchTF; // @synthesize searchTF=_searchTF;
- (void).cxx_destruct;
- (id)initWithSearchDelegate:(id)arg1;

@end

