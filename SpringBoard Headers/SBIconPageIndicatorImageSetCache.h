//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBIconPageIndicatorImageSetResult, _UILegibilitySettings;

@interface SBIconPageIndicatorImageSetCache : NSObject
{
    _UILegibilitySettings *_legibilitySettings;
    SBIconPageIndicatorImageSetResult *_indicatorImageSetResults;
    SBIconPageIndicatorImageSetResult *_searchImageSetResults;
    SBIconPageIndicatorImageSetResult *_cameraImageSetResults;
}

+ (id)dashBoardPageIndicatorImageSetCache;
+ (id)homescreenPageIndicatorImageSetCache;
- (void).cxx_destruct;
- (id)_emptyPageIndicatorSet;
- (id)cameraIndicatorImageSetForLegibilitySettings:(id)arg1;
- (id)pageIndicatorImageSetForLegibilitySettings:(id)arg1;
- (id)searchIndicatorImageSetForLegibilitySettings:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;

@end

