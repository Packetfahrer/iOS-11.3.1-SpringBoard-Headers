//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBStarkAppToAppWorkspaceTransaction.h"

@class SBAlert, SBAlertChangeTransaction;

@interface SBStarkImpersonatedAppToAppWorkspaceTransaction : SBStarkAppToAppWorkspaceTransaction
{
    SBAlertChangeTransaction *_deactivateAlertTransaction;
    SBAlert *_deactivatingAlert;
}

- (void).cxx_destruct;
- (_Bool)_canBeInterrupted;
- (void)_deactivateAlertIfPossible;
- (void)_didComplete;
- (void)_doCommit;
- (void)_handleFailureToLaunch;
- (id)_newAnimationFromAppToApp;
- (id)_newAnimationFromAppToLauncher;
- (id)_newAnimationFromAppToNowPlaying;
- (void)animationControllerDidFinishAnimation:(id)arg1;
- (_Bool)canInterruptForTransitionRequest:(id)arg1;
- (id)initWithTransitionRequest:(id)arg1;
- (void)mainScreenApplicationUpdateScenesTransactionCompleted:(id)arg1;

@end
