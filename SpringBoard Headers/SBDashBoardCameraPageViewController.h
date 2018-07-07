//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardPageViewController.h"

#import "SBDashBoardDelegatingScreenEdgePanGestureRecognizerDelegate.h"
#import "SBDashBoardHostedAppViewControllerDelegate.h"
#import "SBHomeGestureParticipantDelegate.h"
#import "SBSceneHandleObserver.h"
#import "SBSystemGestureRecognizerDelegate.h"

@class NSSet, NSString, SBDashBoardDelegatingScreenEdgePanGestureRecognizer, SBDashBoardHostedAppViewController, SBFluidBehaviorSettings, SBHomeGestureParticipant, UIView, UIViewFloatAnimatableProperty;

@interface SBDashBoardCameraPageViewController : SBDashBoardPageViewController <SBDashBoardHostedAppViewControllerDelegate, SBSceneHandleObserver, SBSystemGestureRecognizerDelegate, SBDashBoardDelegatingScreenEdgePanGestureRecognizerDelegate, SBHomeGestureParticipantDelegate>
{
    UIView *_maskView;
    UIView *_tintView;
    SBDashBoardHostedAppViewController *_appViewController;
    _Bool _orientationLockAcquired;
    struct CGPoint _previousTranslation;
    _Bool _interactiveDismissalInProgress;
    SBDashBoardDelegatingScreenEdgePanGestureRecognizer *_bottomEdgeRecognizer;
    UIViewFloatAnimatableProperty *_scaleProperty;
    UIViewFloatAnimatableProperty *_alphaProperty;
    SBFluidBehaviorSettings *_scaleSettings;
    SBFluidBehaviorSettings *_alphaSettings;
    SBHomeGestureParticipant *_homeGestureParticipant;
}

+ (_Bool)isAvailableForConfiguration;
+ (unsigned long long)requiredCapabilities;
- (void).cxx_destruct;
- (void)_addOrRemoveGestureForCurrentSettings;
- (void)_bailIfFaceTimeCallComesIn;
- (struct CGPoint)_convertTranslationFromContainerOrientationToContentOrientation:(struct CGPoint)arg1;
- (void)_createProperties;
- (void)_handleBottomEdgeGesture:(id)arg1;
- (void)_handleBottomEdgeGestureBegan:(id)arg1;
- (void)_handleBottomEdgeGestureChanged:(id)arg1;
- (void)_handleBottomEdgeGestureEnded:(id)arg1;
- (void)_prepareForInteractiveGestureToCameraVisible:(_Bool)arg1;
- (void)_relinquishHiddenAssertionForHomeGrabber:(id)arg1;
- (void)_relinquishHomeGestureOwnership;
- (void)_requestHomeGestureOwnership;
- (void)_resetAfterInteractiveGestureToCameraVisible:(_Bool)arg1;
- (void)_setSceneGrabberHidden:(_Bool)arg1;
- (_Bool)_shouldCancelInteractiveDismissGesture;
- (void)_takeHiddenAssertionForHomeGrabber:(id)arg1;
- (void)_transitionAppViewWithProgress:(double)arg1;
- (void)_updateCameraScale:(double)arg1 dimmingAlpha:(double)arg2;
- (void)_updateCameraScale:(double)arg1 dimmingAlpha:(double)arg2 interactive:(_Bool)arg3;
- (void)_updateCameraScale:(double)arg1 interactive:(_Bool)arg2;
- (void)_updateDimmingAlpha:(double)arg1 interactive:(_Bool)arg2;
- (void)_updateForPropertyChanged;
@property(retain, nonatomic) NSSet *actionsToDeliver;
- (void)aggregateAppearance:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
@property(retain, nonatomic) UIViewFloatAnimatableProperty *alphaProperty; // @synthesize alphaProperty=_alphaProperty;
@property(retain, nonatomic) SBFluidBehaviorSettings *alphaSettings; // @synthesize alphaSettings=_alphaSettings;
@property(retain, nonatomic) SBDashBoardDelegatingScreenEdgePanGestureRecognizer *bottomEdgeRecognizer; // @synthesize bottomEdgeRecognizer=_bottomEdgeRecognizer;
- (_Bool)canHostAnApp;
- (_Bool)dashBoardHostedAppViewController:(id)arg1 shouldTransitionToMode:(long long)arg2;
- (void)didTransitionToVisible:(_Bool)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)handleEvent:(id)arg1;
@property(retain, nonatomic) SBHomeGestureParticipant *homeGestureParticipant; // @synthesize homeGestureParticipant=_homeGestureParticipant;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1;
- (id)hostedApp;
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1;
- (_Bool)isHostingAnApp;
- (void)loadView;
- (long long)presentationAltitude;
- (id)requestedDismissalSettings;
- (long long)requestedDismissalType;
@property(retain, nonatomic) UIViewFloatAnimatableProperty *scaleProperty; // @synthesize scaleProperty=_scaleProperty;
@property(retain, nonatomic) SBFluidBehaviorSettings *scaleSettings; // @synthesize scaleSettings=_scaleSettings;
- (void)sceneHandle:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3;
- (long long)touchGestureInterfaceOrientation;
- (void)updateTransitionToVisible:(_Bool)arg1 progress:(double)arg2 mode:(long long)arg3;
- (void)viewDidAppear:(_Bool)arg1;
- (id)viewForSystemGestureRecognizer:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)willTransitionToVisible:(_Bool)arg1;
- (_Bool)wouldHandleButtonEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

