//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardViewControllerBase.h"

#import "SBLockScreenEmergencyDialerDelegate.h"

@class NSString, SBLockScreenEmergencyDialerController, TUCallCenter;

@interface SBDashBoardEmergencyDialerViewController : SBDashBoardViewControllerBase <SBLockScreenEmergencyDialerDelegate>
{
    TUCallCenter *_callCenter;
    SBLockScreenEmergencyDialerController *_controller;
    _Bool _inEmergencyCall;
    _Bool _inEmergencyCallMode;
}

- (void).cxx_destruct;
- (void)_activateEmergencyDialerController;
- (void)_deactivateEmergencyDialerController;
- (void)_updateEmergencyCallMode:(id)arg1;
- (void)aggregateAppearance:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (void)dealloc;
- (void)emergencyDialer:(id)arg1 willDeactivateWithError:(id)arg2;
- (_Bool)handleEvent:(id)arg1;
- (long long)presentationPriority;
- (long long)presentationType;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

