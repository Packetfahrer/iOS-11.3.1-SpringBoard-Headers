//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIStarkStartupAnimation.h"

@class UIStatusBar, UIView;

@interface SBUIStarkStartupToAppAnimation : SBUIStarkStartupAnimation
{
    UIView *_fromLockoutView;
    UIStatusBar *_fakeStatusBar;
    _Bool _finished;
}

- (void).cxx_destruct;
- (void)_application:(id)arg1 processStateDidChange:(id)arg2;
- (void)_cleanupAnimation;
- (id)_createViewToAnimate;
- (void)_finishedAnimation:(_Bool)arg1;
- (id)_progressDependencies;
- (void)_startAnimation;
- (_Bool)_waitsForActivatingSceneContentAvailableIfNecessary;
- (id)_zoomInFactory;
- (id)animationSettings;
@property(readonly, nonatomic) UIView *fromLockoutView; // @synthesize fromLockoutView=_fromLockoutView;
- (id)initFromLockoutView:(id)arg1 starkScreenController:(id)arg2;
- (id)initWithApplicationSceneEntity:(id)arg1 fromLockoutView:(id)arg2 starkScreenController:(id)arg3;

@end

