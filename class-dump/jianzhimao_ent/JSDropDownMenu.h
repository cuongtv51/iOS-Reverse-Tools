//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, UIColor, UITableView;

@interface JSDropDownMenu : UIView <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _show;
    _Bool _hadSelected;
    id <JSDropDownMenuDataSource> _dataSource;
    id <JSDropDownMenuDelegate> _delegate;
    UIColor *_indicatorColor;
    UIColor *_cellTextColor;
    UIColor *_separatorColor;
    UIColor *_menuTextColor;
    UIColor *_menuBgColor;
    long long _currentSelectedMenudIndex;
    long long _numOfMenu;
    UIView *_backGroundView;
    UIView *_bottomShadow;
    UITableView *_leftTableView;
    UITableView *_rightTableView;
    NSArray *_array;
    NSArray *_titles;
    NSArray *_indicators;
    NSArray *_bgLayers;
    long long _leftSelectedRow;
    struct CGPoint _origin;
}

@property(nonatomic) _Bool hadSelected; // @synthesize hadSelected=_hadSelected;
@property(nonatomic) long long leftSelectedRow; // @synthesize leftSelectedRow=_leftSelectedRow;
@property(copy, nonatomic) NSArray *bgLayers; // @synthesize bgLayers=_bgLayers;
@property(copy, nonatomic) NSArray *indicators; // @synthesize indicators=_indicators;
@property(copy, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(copy, nonatomic) NSArray *array; // @synthesize array=_array;
@property(retain, nonatomic) UITableView *rightTableView; // @synthesize rightTableView=_rightTableView;
@property(retain, nonatomic) UITableView *leftTableView; // @synthesize leftTableView=_leftTableView;
@property(retain, nonatomic) UIView *bottomShadow; // @synthesize bottomShadow=_bottomShadow;
@property(retain, nonatomic) UIView *backGroundView; // @synthesize backGroundView=_backGroundView;
@property(nonatomic) struct CGPoint origin; // @synthesize origin=_origin;
@property(nonatomic) long long numOfMenu; // @synthesize numOfMenu=_numOfMenu;
@property(nonatomic) _Bool show; // @synthesize show=_show;
@property(nonatomic) long long currentSelectedMenudIndex; // @synthesize currentSelectedMenudIndex=_currentSelectedMenudIndex;
@property(retain, nonatomic) UIColor *menuBgColor; // @synthesize menuBgColor=_menuBgColor;
@property(retain, nonatomic) UIColor *menuTextColor; // @synthesize menuTextColor=_menuTextColor;
@property(retain, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(retain, nonatomic) UIColor *cellTextColor; // @synthesize cellTextColor=_cellTextColor;
@property(retain, nonatomic) UIColor *indicatorColor; // @synthesize indicatorColor=_indicatorColor;
@property(nonatomic) __weak id <JSDropDownMenuDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <JSDropDownMenuDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)confiMenuWithSelectRow:(long long)arg1 leftOrRight:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)animateIdicator:(id)arg1 background:(id)arg2 leftTableView:(id)arg3 rightTableView:(id)arg4 title:(id)arg5 forward:(_Bool)arg6 complecte:(CDUnknownBlockType)arg7;
- (void)animateTitle:(id)arg1 show:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
- (void)animateLeftTableView:(id)arg1 rightTableView:(id)arg2 show:(_Bool)arg3 complete:(CDUnknownBlockType)arg4;
- (void)animateBackGroundView:(id)arg1 show:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
- (void)animateIndicator:(id)arg1 Forward:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
- (void)backgroundTapped:(id)arg1;
- (void)menuTapped:(id)arg1;
- (struct CGSize)calculateTitleSizeWithString:(id)arg1;
- (id)createTextLayerWithNSString:(id)arg1 withColor:(id)arg2 andPosition:(struct CGPoint)arg3;
- (id)createSeparatorLineWithColor:(id)arg1 andPosition:(struct CGPoint)arg2;
- (id)createIndicatorWithColor:(id)arg1 andPosition:(struct CGPoint)arg2;
- (id)createBgLayerWithColor:(id)arg1 andPosition:(struct CGPoint)arg2;
- (id)initWithOrigin:(struct CGPoint)arg1 andHeight:(double)arg2;
- (id)titleForRowAtIndexPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

