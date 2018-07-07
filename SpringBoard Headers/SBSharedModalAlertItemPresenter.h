//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBBarSwipeAffordanceObserver.h"
#import "SBHomeGestureParticipantDelegate.h"
#import "SBModalViewControllerStackDelegate.h"
#import "UIAlertControllerCoordinatedActionPerforming.h"
#import "_SBAlertControllerDelegate.h"

@class NSString, SBAlertItem, SBBarSwipeAffordanceView, SBHomeGestureParticipant, SBModalViewControllerStack, UIWindow;

@interface SBSharedModalAlertItemPresenter : NSObject <_SBAlertControllerDelegate, SBModalViewControllerStackDelegate, UIAlertControllerCoordinatedActionPerforming, SBBarSwipeAffordanceObserver, SBHomeGestureParticipantDelegate>
{
    id <SBFLockOutStatusProvider> _lockOutProvider;
    SBHomeGestureParticipant *_homeGestureParticipant;
    SBBarSwipeAffordanceView *_barSwipeView;
    SBModalViewControllerStack *_modalViewControllerStack;
    UIWindow *_window;
}

- (void).cxx_destruct;
- (id)_arbiter;
@property(retain, nonatomic, getter=_modalViewControllerStack, setter=_setModalViewControllerStack:) SBModalViewControllerStack *modalViewControllerStack; // @synthesize modalViewControllerStack=_modalViewControllerStack;
- (void)_performActionForAlertController:(id)arg1 invokeActionBlock:(CDUnknownBlockType)arg2 dismissControllerBlock:(CDUnknownBlockType)arg3;
- (id)_systemGestureManager;
- (void)_updateBarSwipeViewWithAlertController:(id)arg1;
- (void)_updateHomeGestureParticipantWithItemCountAdjustment:(long long)arg1;
- (void)alertControllerDidDisappear:(id)arg1;
@property(readonly, nonatomic) SBAlertItem *currentlyPresentedAlertItem;
- (void)dismissAlertItem:(id)arg1 animated:(_Bool)arg2;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1;
- (void)homeGesturePerformedForBarSwipeAffordanceView:(id)arg1;
- (id)initWithLockOutProvider:(id)arg1;
- (void)modalViewControllerStack:(id)arg1 didDismissViewController:(id)arg2;
- (void)modalViewControllerStack:(id)arg1 didPresentViewController:(id)arg2;
- (void)modalViewControllerStack:(id)arg1 willDismissViewController:(id)arg2;
- (void)modalViewControllerStack:(id)arg1 willPresentViewController:(id)arg2;
- (void)presentAlertItem:(id)arg1 isLocked:(_Bool)arg2 animated:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

