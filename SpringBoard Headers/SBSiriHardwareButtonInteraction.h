//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBHardwareButtonGestureParametersProviderBase.h"

#import "SBHardwareButtonInteraction.h"

@class NSString;

@interface SBSiriHardwareButtonInteraction : SBHardwareButtonGestureParametersProviderBase <SBHardwareButtonInteraction>
{
    _Bool _dispatchedInitialButtonDown;
    _Bool _startedPreheat;
    int _eventSource;
    int _activationEvent;
    double _activationInterval;
}

+ (_Bool)dismissSiriAlertOnSinglePressUp:(int)arg1 source:(int)arg2;
+ (id)hardwareButtonInteractionForHomeButton;
+ (id)hardwareButtonInteractionForLockButton;
- (void)_cancelAllPluginActions;
- (void)_cancelPreheatingOfPlugin;
- (double)_longPressTimeInterval;
- (void)_preheatPluginForPresentationAfterInterval:(double)arg1;
- (void)_siriHomeButtonPrefsDidChange:(id)arg1;
@property(nonatomic) int activationEvent; // @synthesize activationEvent=_activationEvent;
@property(nonatomic) double activationInterval; // @synthesize activationInterval=_activationInterval;
- (_Bool)consumeInitialPressDown;
- (_Bool)consumeLongPress;
- (_Bool)consumeSinglePressUp;
@property(nonatomic) _Bool dispatchedInitialButtonDown; // @synthesize dispatchedInitialButtonDown=_dispatchedInitialButtonDown;
@property(nonatomic) int eventSource; // @synthesize eventSource=_eventSource;
- (id)hardwareButtonGestureParameters;
- (id)init;
- (void)observeFinalPressUp;
- (void)observeLongPressCanceled;
@property(nonatomic) _Bool startedPreheat; // @synthesize startedPreheat=_startedPreheat;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

