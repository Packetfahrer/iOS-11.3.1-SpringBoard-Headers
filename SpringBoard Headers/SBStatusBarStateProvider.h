//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBStatusBarStateAggregatorPosting.h"
#import "UIStatusBarStateProvider.h"

@class NSHashTable, NSMutableArray, NSString, SBStatusBarStateAggregator;

@interface SBStatusBarStateProvider : NSObject <SBStatusBarStateAggregatorPosting, UIStatusBarStateProvider>
{
    SBStatusBarStateAggregator *_stateAggregator;
    NSHashTable *_stateObservers;
    CDStruct_8a690d05 _aggregatorData;
    int _aggregatorActions;
    CDStruct_8a690d05 _lastPost;
    unsigned long long _coalescentBlockDepth;
    _Bool _itemNeedsPost[35];
    _Bool _anyItemNeedsPost;
    _Bool _nonItemDataNeedsPost;
    _Bool _posting;
    NSMutableArray *_stylesWithDetailUpdates;
}

- (void).cxx_destruct;
- (void)_composePostActionsFromAggregatorActions:(int *)arg1;
- (void)_composePostDataFromAggregatorData:(CDStruct_8a690d05 *)arg1;
- (void)_didChangeDoubleHeightStatusStringForStyle:(long long)arg1;
- (void)_didFinishPost;
- (_Bool)_shouldPostForUpdatesToNonItemData:(const CDStruct_8a690d05 *)arg1;
- (_Bool)_shouldPostForVisitedItem:(int)arg1 withUpdates:(_Bool)arg2 toAggregatorData:(const CDStruct_8a690d05 *)arg3 lastPost:(const CDStruct_8a690d05 *)arg4;
- (void)addStatusBarStateObserver:(id)arg1;
- (void)beginCoalescentBlock;
- (void)dealloc;
- (void)endCoalescentBlock;
- (void)getStatusBarData:(CDStruct_8a690d05 *)arg1;
- (id)init;
- (void)removeStatusBarStateObserver:(id)arg1;
- (void)statusBarStateAggregator:(id)arg1 didUpdateNonItemData:(const CDStruct_8a690d05 *)arg2;
- (void)statusBarStateAggregator:(id)arg1 didVisitItem:(int)arg2 withUpdates:(_Bool)arg3 toData:(const CDStruct_8a690d05 *)arg4;
- (void)statusBarStateAggregatorDidFinishPost:(id)arg1 withData:(const CDStruct_8a690d05 *)arg2 actions:(int)arg3;
- (void)statusBarStateAggregatorDidStartPost:(id)arg1;
- (void)updateStatusBarItem:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

