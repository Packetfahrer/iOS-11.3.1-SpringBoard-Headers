//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL, UIViewController, WGWidgetDiscoveryController;

@protocol WGWidgetDiscoveryControllerDelegate <NSObject>

@optional
- (_Bool)didPurgeNonASTCSnapshotsForWidgetDiscoveryController:(WGWidgetDiscoveryController *)arg1;
- (_Bool)didPurgeNonCAMLSnapshotsForWidgetDiscoveryController:(WGWidgetDiscoveryController *)arg1;
- (id)whiteStatusBarAssertionForWidgetDiscoveryController:(WGWidgetDiscoveryController *)arg1;
- (void)widgetDiscoveryController:(WGWidgetDiscoveryController *)arg1 didEndUsingStatusBarAssertion:(id)arg2;
- (UIViewController *)widgetDiscoveryController:(WGWidgetDiscoveryController *)arg1 preferredViewControllerForPresentingFromViewController:(UIViewController *)arg2;
- (void)widgetDiscoveryController:(WGWidgetDiscoveryController *)arg1 requestUnlockWithCompletion:(void (^)(_Bool))arg2;
- (_Bool)widgetDiscoveryController:(WGWidgetDiscoveryController *)arg1 shouldPurgeArchivedSnapshotsForWidgetWithBundleIdentifier:(NSString *)arg2;
- (void)widgetDiscoveryController:(WGWidgetDiscoveryController *)arg1 widgetWithBundleIdentifier:(NSString *)arg2 didEncounterProblematicSnapshotAtURL:(NSURL *)arg3;
- (_Bool)widgetDiscoveryControllerShouldIncludeInternalWidgets:(WGWidgetDiscoveryController *)arg1;
@end

