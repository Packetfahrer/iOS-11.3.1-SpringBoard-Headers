//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBHardwareButtonGestureParametersObserver.h"
#import "SBPressPrecedenceArbiter.h"
#import "SBSOSClawGestureObserverDelegate.h"
#import "SBSOSLockGestureObserverDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSString, SBClickGestureRecognizer, SBCombinationHardwareButtonActions, SBHomeHardwareButton, SBLockHardwareButton, SBPressGestureRecognizer, SBProximitySensorManager, SBSOSClawGestureObserver, SBSOSLockGestureObserver;

@interface SBCombinationHardwareButton : NSObject <UIGestureRecognizerDelegate, SBHardwareButtonGestureParametersObserver, SBSOSLockGestureObserverDelegate, SBSOSClawGestureObserverDelegate, SBPressPrecedenceArbiter>
{
    SBCombinationHardwareButtonActions *_buttonActions;
    SBClickGestureRecognizer *_screenshotGestureRecognizer;
    SBHomeHardwareButton *_homeHardwareButton;
    SBLockHardwareButton *_lockHardwareButton;
    SBProximitySensorManager *_proximitySensorManager;
    SBPressGestureRecognizer *_sosGestureRecognizer;
    SBSOSClawGestureObserver *_sosClawGestureObserver;
    SBSOSLockGestureObserver *_sosLockGestureObserver;
}

- (void).cxx_destruct;
- (void)_configureGestureRecognizers;
- (void)_configureSOSGestureBehaviors;
- (void)_sosTriggerMechanismDidChange;
@property(retain, nonatomic) SBCombinationHardwareButtonActions *buttonActions; // @synthesize buttonActions=_buttonActions;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
@property(nonatomic) __weak SBHomeHardwareButton *homeHardwareButton; // @synthesize homeHardwareButton=_homeHardwareButton;
- (id)initWithScreenshotGestureRecognizer:(id)arg1 homeHardwareButton:(id)arg2 lockHardwareButton:(id)arg3 proximitySensorManager:(id)arg4;
@property(nonatomic) __weak SBLockHardwareButton *lockHardwareButton; // @synthesize lockHardwareButton=_lockHardwareButton;
- (id)preemptablePressGestureRecognizers;
- (void)provider:(id)arg1 didUpdateButtonGestureParameters:(id)arg2;
@property(nonatomic) __weak SBProximitySensorManager *proximitySensorManager; // @synthesize proximitySensorManager=_proximitySensorManager;
- (void)screenshotGesture:(id)arg1;
@property(retain, nonatomic) SBClickGestureRecognizer *screenshotGestureRecognizer; // @synthesize screenshotGestureRecognizer=_screenshotGestureRecognizer;
@property(retain, nonatomic) SBSOSClawGestureObserver *sosClawGestureObserver; // @synthesize sosClawGestureObserver=_sosClawGestureObserver;
@property(retain, nonatomic) SBPressGestureRecognizer *sosGestureRecognizer; // @synthesize sosGestureRecognizer=_sosGestureRecognizer;
@property(retain, nonatomic) SBSOSLockGestureObserver *sosLockGestureObserver; // @synthesize sosLockGestureObserver=_sosLockGestureObserver;
- (void)sosClawAutoCallInteractiveStateChanged:(id)arg1 interacting:(_Bool)arg2;
- (void)sosClawDidBecomeActive:(id)arg1;
- (void)sosClawDidBecomeInactive:(id)arg1;
- (void)sosClawDidTriggerSOS:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sosGesture:(id)arg1;
- (void)sosLockDidTriggerSOS:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sosLockTriggerDidBecomeActive:(id)arg1;
- (void)sosLockTriggerDidBecomeInactive:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

