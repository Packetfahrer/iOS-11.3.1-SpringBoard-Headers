//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBBaseStartupTransition.h"

@class SBFUserAuthenticationController, SBLockScreenManager;

@interface SBStartupTransitionToLockOut : SBBaseStartupTransition
{
    SBLockScreenManager *_lockScreenManager;
    SBFUserAuthenticationController *_authController;
}

- (void).cxx_destruct;
- (id)initWithDestination:(unsigned long long)arg1 context:(id)arg2;
@property(readonly, nonatomic) SBLockScreenManager *lockScreenManager; // @synthesize lockScreenManager=_lockScreenManager;
- (void)performTransitionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)suggestedLockAnimationForTransitionRequest:(id)arg1;

@end

