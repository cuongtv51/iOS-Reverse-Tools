//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, SSUIBaseShareActionSheet;

@interface SSUIShareActionSheetController : NSObject
{
    NSMutableSet *_directSharePlatforms;
    SSUIBaseShareActionSheet *_shareActionSheet;
    SSUIShareActionSheetController *_selfRef;
}

@property(retain, nonatomic) SSUIShareActionSheetController *selfRef; // @synthesize selfRef=_selfRef;
@property(retain, nonatomic) SSUIBaseShareActionSheet *shareActionSheet; // @synthesize shareActionSheet=_shareActionSheet;
@property(retain, nonatomic) NSMutableSet *directSharePlatforms; // @synthesize directSharePlatforms=_directSharePlatforms;
- (void).cxx_destruct;
- (void)onCancel:(CDUnknownBlockType)arg1;
- (void)onItemClick:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)dismiss;
- (void)showInView:(id)arg1;
- (id)initWithItems:(id)arg1;

@end

