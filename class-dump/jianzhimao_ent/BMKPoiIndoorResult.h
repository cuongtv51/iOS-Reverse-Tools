//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface BMKPoiIndoorResult : NSObject
{
    int _pageIndex;
    long long _totalPoiNum;
    long long _currPoiNum;
    long long _pageNum;
    NSArray *_poiIndoorInfoList;
}

@property(retain, nonatomic) NSArray *poiIndoorInfoList; // @synthesize poiIndoorInfoList=_poiIndoorInfoList;
@property(nonatomic) int pageIndex; // @synthesize pageIndex=_pageIndex;
@property(nonatomic) long long pageNum; // @synthesize pageNum=_pageNum;
@property(nonatomic) long long currPoiNum; // @synthesize currPoiNum=_currPoiNum;
@property(nonatomic) long long totalPoiNum; // @synthesize totalPoiNum=_totalPoiNum;
- (void).cxx_destruct;

@end

