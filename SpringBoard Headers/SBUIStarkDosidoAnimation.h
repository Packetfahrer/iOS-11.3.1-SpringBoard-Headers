//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIStarkScreenAnimationController.h"

@class SBAlert, SBApplicationSceneHandle, SBDosidoAnimator, UIView;

@interface SBUIStarkDosidoAnimation : SBUIStarkScreenAnimationController
{
    UIView *_fromView;
    UIView *_toView;
    UIView *_viewToHide;
    SBAlert *_alertImpersonator;
    SBDosidoAnimator *_dosidoAnimator;
    SBApplicationSceneHandle *_impersonatedApplicationSceneHandle;
    _Bool _animationFinished;
    _Bool _fromAssistant;
}

- (void).cxx_destruct;
- (double)_animationDelay;
- (id)_animationFactory;
- (void)_application:(id)arg1 processStateDidChange:(id)arg2;
- (void)_cleanupAnimation;
- (void)_cleanupHosting;
- (void)_commonInitFromView:(id)arg1 toView:(id)arg2 alert:(id)arg3 toDisplay:(id)arg4;
- (void)_maybeReportAnimationFinished;
- (id)_progressDependencies;
- (void)_startAnimation;
- (_Bool)_waitsForActivatingSceneContentAvailableIfNecessary;
- (void)_willSetupStartDependencies;
- (id)animationSettings;
- (void)dealloc;
- (id)initFromAlertImpersonator:(id)arg1 toApplicationSceneEntity:(id)arg2 starkScreenController:(id)arg3;
- (id)initFromApplicationSceneEntity:(id)arg1 toAlertImpersonator:(id)arg2 starkScreenController:(id)arg3;
- (id)initFromApplicationSceneEntity:(id)arg1 toApplicationSceneEntity:(id)arg2 starkScreenController:(id)arg3;
- (void)noteDependencyDidInvalidate;

@end

