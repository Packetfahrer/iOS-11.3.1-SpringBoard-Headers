//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIMainScreenAnimationController.h"

@class BKSDisplayRenderOverlay;

@interface SBUIStartupToHomescreenAnimationController : SBUIMainScreenAnimationController
{
    BKSDisplayRenderOverlay *_persistentSnapshotOverlay;
}

- (void).cxx_destruct;
- (double)_animationDelay;
- (void)_cleanupAnimation;
- (void)_prepareAnimation;
- (_Bool)_shouldDismissBanner;
- (void)_startAnimation;
- (id)animationSettings;
- (id)initWithTransitionContextProvider:(id)arg1;
- (id)initWithTransitionContextProvider:(id)arg1 overlay:(id)arg2;

@end

