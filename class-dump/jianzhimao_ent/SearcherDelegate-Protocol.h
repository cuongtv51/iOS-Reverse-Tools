//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol SearcherDelegate <NSObject>
- (void)onGetExceptionInfo:(long long)arg1;

@optional
- (void)onGetPoiBkgDataSearchResult:(NSString *)arg1;
- (void)onGetSuggestionSearchResult:(NSString *)arg1;
- (void)onGetUpdateCurrentCityResult:(NSString *)arg1;
- (void)onGetShortUrlResult:(NSString *)arg1;
- (void)onGetBusLineDetail:(NSString *)arg1;
- (void)onGetAddrList:(NSString *)arg1;
- (void)onGetBikeRouteResult:(NSString *)arg1;
- (void)onGetFootRouteResult:(NSString *)arg1;
- (void)onGetCarRouteResult:(NSString *)arg1;
- (void)onGetBusRouteResult:(NSString *)arg1;
- (void)onEspecialQuerySearchResult:(NSString *)arg1;
- (void)onDistrictSearchResult:(NSString *)arg1;
- (void)onCityQuerySearchResult:(NSString *)arg1;
- (void)onCityListSearchResult:(NSString *)arg1;
- (void)onPoiDetailPlaceSearchResult:(NSString *)arg1;
- (void)onPoiIndoorSearchResult:(NSString *)arg1;
- (void)onPOIListSearchResult:(NSString *)arg1;
- (void)onAreaSearchResult:(NSString *)arg1;
- (void)onReverseGEOSearchResult:(NSString *)arg1;
- (void)onGeocodeSearchResult:(NSString *)arg1;
- (void)onPOIDetailSearchResult:(NSString *)arg1;
@end

