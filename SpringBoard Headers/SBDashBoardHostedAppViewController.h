//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardViewExternalControllerBase.h"

#import "BSInvalidatable.h"
#import "SBAppViewControllerDelegate.h"
#import "SBApplicationHosting.h"
#import "SBSceneHandleObserver.h"

@class FBUIApplicationSceneDeactivationAssertion, NSSet, NSString, SBAppViewController, SBApplicationSceneHandle, SBApplicationSceneView, SBFAuthenticationAssertion, UIApplicationSceneClientSettingsDiffInspector;

@interface SBDashBoardHostedAppViewController : SBDashBoardViewExternalControllerBase <SBAppViewControllerDelegate, SBSceneHandleObserver, SBApplicationHosting, BSInvalidatable>
{
    id <SBDashBoardHostedAppViewControllerDelegate> _delegate;
    SBAppViewController *_appViewController;
    FBUIApplicationSceneDeactivationAssertion *_resignActiveAssertion;
    SBFAuthenticationAssertion *_authenticationAssertion;
    NSString *_cachedBasicPublicDescription;
    _Bool _invalidated;
    UIApplicationSceneClientSettingsDiffInspector *_appClientSettingsDiffInspector;
    _Bool _intentToTransitionFromSecureAppToFull;
    _Bool _interfaceOrientationLocked;
}

- (void).cxx_destruct;
- (id)_appClientSettingsDiffInspector;
- (void)_setMode:(long long)arg1 fromClient:(_Bool)arg2 forReason:(id)arg3;
- (void)_setResignActiveAssertionEnabled:(_Bool)arg1;
@property(retain, nonatomic) NSSet *actionsToDeliver;
- (void)aggregateAppearance:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
@property(readonly, nonatomic) SBApplicationSceneView *appView;
- (void)appViewController:(id)arg1 didTransitionFromMode:(long long)arg2 toMode:(long long)arg3;
- (void)appViewControllerDidBecomeReady:(id)arg1;
- (void)appViewControllerDidDeactivateApplication:(id)arg1;
- (_Bool)appViewControllerShouldBackgroundApplicationOnDeactivate:(id)arg1;
- (void)appViewControllerWillActivateApplication:(id)arg1;
- (id)appearanceIdentifier;
@property(readonly, nonatomic) SBApplicationSceneHandle *applicationSceneHandle;
- (_Bool)canHostAnApp;
- (void)configureDisplayLayoutElement:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <SBDashBoardHostedAppViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)displayLayoutElementIdentifier;
- (_Bool)handleEvent:(id)arg1;
- (id)hostedApp;
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1;
- (id)initWithApplicationSceneEntity:(id)arg1;
@property(nonatomic) _Bool intentToTransitionFromSecureAppToFull; // @synthesize intentToTransitionFromSecureAppToFull=_intentToTransitionFromSecureAppToFull;
@property(nonatomic) _Bool interfaceOrientationLocked; // @synthesize interfaceOrientationLocked=_interfaceOrientationLocked;
- (void)invalidate;
- (_Bool)isHostingAnApp;
@property(nonatomic) long long mode;
@property(retain, nonatomic) id <SBScenePlaceholderContentContext> placeholderContentContext;
@property(nonatomic) _Bool placeholderContentEnabled;
- (long long)presentationPriority;
- (long long)presentationStyle;
- (long long)presentationType;
- (void)sceneHandle:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)willMoveToParentViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

