//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ViewModelBase.h"

#import "PartimeJobCellRecruitProtocol.h"

@class NSAttributedString, NSString, UIImage;

@interface ViewModelPartimeJobManagerCell : ViewModelBase <PartimeJobCellRecruitProtocol>
{
    UIImage *image;
    NSString *title;
    NSString *time;
    NSString *address;
    NSString *postCount;
    NSAttributedString *postDetail;
}

@property(copy, nonatomic) NSAttributedString *postDetail; // @synthesize postDetail;
@property(copy, nonatomic) NSString *postCount; // @synthesize postCount;
@property(copy, nonatomic) NSString *address; // @synthesize address;
@property(copy, nonatomic) NSString *time; // @synthesize time;
@property(copy, nonatomic) NSString *title; // @synthesize title;
@property(retain, nonatomic) UIImage *image; // @synthesize image;
- (void).cxx_destruct;
- (id)buildPostDetail:(id)arg1;
- (void)buildViewModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

