//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBUIUserAgent_Internal.h"

@class NSMutableDictionary, NSString, SBIdleTimerPolicyAggregator;

@interface SBUserAgent : NSObject <SBUIUserAgent_Internal>
{
    NSMutableDictionary *_idleTimerDisableAssertions;
    SBIdleTimerPolicyAggregator *_idleTimerPolicyAggregator;
}

- (void).cxx_destruct;
- (void)_cleanupFromBannerLaunch;
@property(retain, nonatomic, setter=_setIdleTimerPolicyAggregator:) SBIdleTimerPolicyAggregator *_idleTimerPolicyAggregator; // @synthesize _idleTimerPolicyAggregator;
- (_Bool)_launchFromSource:(int)arg1 withURL:(id)arg2 bundleID:(id)arg3 allowUnlock:(_Bool)arg4 animate:(_Bool)arg5;
- (_Bool)_openApplication:(id)arg1 withURL:(id)arg2 fromSource:(int)arg3 animated:(_Bool)arg4 options:(id)arg5;
- (id)_safeValue:(id)arg1 forKey:(id)arg2 ofType:(Class)arg3;
- (void)activateModalBulletinAlert:(id)arg1;
- (void)activateRemoteAlertService:(id)arg1 options:(id)arg2;
- (void)activateRemoteAlertService:(id)arg1 options:(id)arg2 activationHandler:(CDUnknownBlockType)arg3 deactivationHandler:(CDUnknownBlockType)arg4;
- (long long)activeInterfaceOrientation;
- (void)addActiveInterfaceOrientationObserver:(id)arg1;
- (void)addIdleTimerHandler:(id)arg1;
- (void)adjustLockScreenContentByOffset:(double)arg1 forAwayViewPlugin:(id)arg2 withAnimationDuration:(double)arg3;
- (_Bool)alertIsActive;
- (_Bool)applicationInstalledForDisplayID:(id)arg1;
- (_Bool)canLaunchFromAwayViewPluginWithURL:(id)arg1 bundleID:(id)arg2;
- (_Bool)canLaunchFromSource:(int)arg1 withURL:(id)arg2 bundleID:(id)arg3;
- (_Bool)deviceIsBlocked;
- (_Bool)deviceIsLocked;
- (_Bool)deviceIsPasscodeLocked;
- (_Bool)deviceIsPasscodeLockedRemotely;
- (_Bool)deviceIsTethered;
- (void)disableLockScreenBundleNamed:(id)arg1 deactivationContext:(id)arg2;
- (void)enableLockScreenBundleNamed:(id)arg1 activationContext:(id)arg2;
- (id)folderNameForDisplayID:(id)arg1;
- (id)foregroundApplicationDisplayID;
- (id)foregroundDisplayID;
- (id)init;
- (_Bool)isApplicationForegroundObscured:(id)arg1;
- (_Bool)isApplicationRestrictedOrHidden:(id)arg1;
- (_Bool)isIdleTimerDisabledForReason:(id)arg1;
- (_Bool)isInternalInstall;
- (_Bool)isNamedRemoteAlertServiceActive:(id)arg1 controllerClassName:(id)arg2;
- (_Bool)isScreenOn;
- (_Bool)launchApplicationFromSource:(int)arg1 withDisplayID:(id)arg2 options:(id)arg3;
- (_Bool)launchApplicationFromSource:(int)arg1 withURL:(id)arg2 options:(id)arg3;
- (_Bool)launchFromAwayViewPluginWithURL:(id)arg1 bundleID:(id)arg2 allowUnlock:(_Bool)arg3 animate:(_Bool)arg4;
- (_Bool)launchFromSource:(int)arg1 withURL:(id)arg2 bundleID:(id)arg3 allowUnlock:(_Bool)arg4;
- (id)localizedDisplayNameForDisplayID:(id)arg1;
- (void)lockAndDimDevice;
- (void)lockAndDimDeviceDisconnectingCallIfNecessary:(_Bool)arg1;
- (void)lockAndDimDeviceDisconnectingCallIfNecessary:(_Bool)arg1 andDimScreen:(_Bool)arg2;
- (_Bool)lockScreenIsShowing;
- (id)modalBulletinAlertHandlerRegistry;
- (int)networkUsageTypeForAppWithDisplayID:(id)arg1;
- (void)notifyOnNextUserEvent;
- (_Bool)openURL:(id)arg1 allowUnlock:(_Bool)arg2 animated:(_Bool)arg3;
- (void)removeActiveInterfaceOrientationObserver:(id)arg1;
- (void)removeIdleTimerHandler:(id)arg1;
- (void)setBadgeNumberOrString:(id)arg1 forApplicationWithID:(id)arg2;
- (void)setIdleText:(id)arg1;
- (void)setIdleTimerDisabled:(_Bool)arg1 forReason:(id)arg2;
- (void)setMinimumBacklightLevel:(float)arg1 animated:(_Bool)arg2;
- (void)setWallpaperTunnelActive:(_Bool)arg1 forFullscreenAlertController:(id)arg2;
- (_Bool)springBoardIsActive;
- (id)topSuspendedEventsOnlyDisplayID;
- (void)undimScreen;
- (void)updateCustomSubtitleTextForAwayViewPlugin:(id)arg1;
- (void)updateInterfaceOrientationIfNecessary;
- (void)updateLockScreenInterfaceIfNecessary;
- (struct __CFRunLoop *)wifiRunLoopRef;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

