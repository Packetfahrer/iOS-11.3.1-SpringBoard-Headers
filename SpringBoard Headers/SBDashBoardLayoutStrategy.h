//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SBDashBoardLayoutStrategy : NSObject
{
    id <SBDashBoardPersistentContentLayoutProviding><SBDashBoardDateTimeLayoutAggregating> _persistentLayout;
}

- (void).cxx_destruct;
- (double)_customListWidthForPage:(id)arg1 startingBounds:(struct CGRect)arg2;
- (double)_listInsetXForPage:(id)arg1;
- (unsigned long long)_listLayoutForPage:(id)arg1;
- (unsigned long long)_listWidthStrategyForPage:(id)arg1;
@property(nonatomic) __weak id <SBDashBoardPersistentContentLayoutProviding><SBDashBoardDateTimeLayoutAggregating> persistentLayout; // @synthesize persistentLayout=_persistentLayout;
- (struct UIEdgeInsets)suggestedContentInsetsForListForPage:(id)arg1;
- (struct CGRect)suggestedFrameForDateTimeViewInScreenCoordinates:(struct CGRect)arg1 forceCenteredX:(_Bool)arg2;
- (struct CGRect)suggestedFrameForListForPage:(id)arg1 bounds:(struct CGRect)arg2;

@end

