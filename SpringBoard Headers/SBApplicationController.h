//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BKSTerminationAssertionObserver.h"
#import "FBUIApplicationServiceDelegate.h"
#import "SBApplicationLifecycleObserver.h"
#import "SBApplicationRestrictionDataSource.h"
#import "SBApplicationWakeSchedulerDelegate.h"

@class FBApplicationLibrary, NSDictionary, NSLock, NSMutableDictionary, NSMutableSet, NSSet, NSString, SBApplicationInfo, SBApplicationLibraryObserver, SBApplicationRestrictionController, SBReverseCountedSemaphore;

@interface SBApplicationController : NSObject <SBApplicationRestrictionDataSource, SBApplicationLifecycleObserver, FBUIApplicationServiceDelegate, BKSTerminationAssertionObserver, SBApplicationWakeSchedulerDelegate>
{
    NSMutableDictionary *_applicationsByBundleIdentifer;
    NSMutableSet *_applicationsPlayingMutedAudioSinceLastLock;
    NSDictionary *_backgroundDisplayDict;
    NSLock *_applicationsLock;
    NSMutableDictionary *_systemAppsVisibilityOverrides;
    NSSet *_cachedSystemAppsWithVisibilityOverrideHidden;
    _Bool _booting;
    SBApplicationRestrictionController *_restrictionController;
    SBApplicationLibraryObserver *_appLibraryObserver;
    FBApplicationLibrary *_appLibrary;
    SBApplicationInfo *_systemAppInfo;
    SBReverseCountedSemaphore *_uninstallationReverseSemaphore;
}

+ (void)_setClearAllLegacySnapshotsWhenLoaded:(_Bool)arg1;
+ (void)_setClearSystemAppSnapshotsWhenLoaded:(_Bool)arg1;
+ (id)_sharedInstanceCreateIfNecessary:(_Bool)arg1;
+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;
- (void).cxx_destruct;
- (Class)_appClassForInfo:(id)arg1;
- (id)_appInfosToBundleIDs:(id)arg1;
- (void)_finishDeferredMajorVersionMigrationTasks_FlushLegacySnapshots;
- (void)_finishDeferredMajorVersionMigrationTasks_FlushSystemSnapshots;
- (id)_loadApplicationFromApplicationInfo:(id)arg1;
- (_Bool)_loadApplicationWithoutMutatingIconState:(id)arg1;
- (id)_loadApplications:(id)arg1 removed:(id)arg2;
- (void)_loadApplicationsAndIcons:(id)arg1 removed:(id)arg2 reveal:(_Bool)arg3;
- (void)_lockStateChanged:(id)arg1;
- (id)_lock_applicationWithBundleIdentifier:(id)arg1;
- (void)_mediaServerConnectionDied:(id)arg1;
- (void)_memoryWarningReceived;
- (void)_preLoadApplications;
- (void)_registerForAVSystemControllerNotifications;
- (void)_removeApplicationsFromModelWithBundleIdentifier:(id)arg1 forInstall:(_Bool)arg2 withReason:(id)arg3;
- (void)_sendInstalledAppsDidChangeNotification:(id)arg1 removed:(id)arg2 modified:(id)arg3;
- (void)_unregisterForAVSystemControllerNotifications;
- (void)_unusuallyMutedAudioPlaying:(id)arg1;
- (void)_updateIconControllerAndModelForLoadedApplications:(id)arg1 reveal:(_Bool)arg2 popIn:(_Bool)arg3 reloadAllIcons:(_Bool)arg4;
- (void)_updateVisibilityOverrides;
- (id)allApplications;
- (id)allBundleIdentifiers;
- (id)alwaysAvailableApplicationBundleIdentifiers;
- (void)applicationRestrictionsMayHaveChanged;
- (void)applicationService:(id)arg1 deleteAllSnapshotsForBundleIdentifier:(id)arg2;
- (void)applicationService:(id)arg1 didSetBrightness:(double)arg2 forBundleIdentifier:(id)arg3;
- (void)applicationService:(id)arg1 getBadgeValueForBundleIdentifier:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)applicationService:(id)arg1 setBadgeValue:(id)arg2 forBundleIdentifier:(id)arg3;
- (void)applicationService:(id)arg1 setNextWakeDate:(id)arg2 forBundleIdentifier:(id)arg3;
- (void)applicationService:(id)arg1 suspendApplicationWithBundleIdentifier:(id)arg2;
- (id)applicationToLaunchWithLeafIdentifier:(id)arg1;
- (void)applicationVisibilityMayHaveChanged;
- (id)applicationWithBundleIdentifier:(id)arg1;
- (id)applicationWithPid:(int)arg1;
- (void)applicationsAdded:(id)arg1;
- (void)applicationsDemoted:(id)arg1;
- (void)applicationsModified:(id)arg1;
- (void)applicationsRemoved:(id)arg1;
- (id)bundleIdentifiersWithVisibilityOverrideHidden;
- (id)cameraApplication;
- (id)clockApplication;
- (id)dataActivationApplication;
- (void)dealloc;
- (id)faceTimeApp;
- (id)iPodOutApplication;
- (id)inCallServiceApp;
- (id)init;
- (id)loginApplication;
- (id)mapsApplication;
- (id)mobilePhone;
- (id)musicApplication;
- (void)noteTerminationAssertionEfficacyChangedTo:(unsigned long long)arg1 forBundleIdentifier:(id)arg2;
- (id)notesApplication;
- (void)requestUninstallApplication:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)restrictionController;
- (id)runningApplications;
- (void)scheduler:(id)arg1 didWakeApplication:(id)arg2;
- (_Bool)scheduler:(id)arg1 requestsApplicationLaunch:(id)arg2;
- (id)setupApplication;
- (id)testFlightApplication;
- (void)uninstallApplication:(id)arg1;
- (void)waitForUninstallsToComplete;
- (id)webApplications;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
