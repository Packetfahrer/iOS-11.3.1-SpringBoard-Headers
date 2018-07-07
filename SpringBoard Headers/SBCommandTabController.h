//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBCommandTabViewControllerDelegate.h"
#import "SBRecentDisplayItemsControllerDelegate.h"
#import "SBRecentDisplayItemsPersistenceDelegate.h"

@class FBUIApplicationSceneDeactivationAssertion, NSObject<OS_dispatch_queue>, NSOrderedSet, NSString, NSTimer, SBCommandTabViewController, SBRecentDisplayItemsController, SBRecentDisplayItemsDataStore, SBRecentDisplayItemsDefaults, SBWindow;

@interface SBCommandTabController : NSObject <SBCommandTabViewControllerDelegate, SBRecentDisplayItemsControllerDelegate, SBRecentDisplayItemsPersistenceDelegate>
{
    SBCommandTabViewController *_commandTabViewController;
    NSTimer *_timer;
    FBUIApplicationSceneDeactivationAssertion *_resignActiveAssertion;
    SBRecentDisplayItemsController *_recentDisplayItemsController;
    NSOrderedSet *_persistedRecentDisplayItems;
    NSObject<OS_dispatch_queue> *_recentDisplayItemsPersistenceQueue;
    SBRecentDisplayItemsDataStore *_dataStore;
    SBRecentDisplayItemsDefaults *_defaults;
    SBWindow *_window;
}

+ (id)keyCommands;
+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;
- (void).cxx_destruct;
- (void)_activateWithForwardDirection:(_Bool)arg1;
- (void)_clearTimer;
- (void)_emitAnalyticsEventForDisplayItem:(id)arg1;
- (void)_showCommandTabBarAfterTimer:(id)arg1;
- (void)_showWindow:(_Bool)arg1;
- (void)activateWithKeyCommand:(id)arg1;
- (void)dataStore:(id)arg1 persistDisplayItems:(id)arg2;
- (void)dealloc;
- (void)dismiss;
- (id)init;
@property(readonly, nonatomic, getter=isVisible) _Bool visible;
- (void)launchCurrentSelectedApplication;
- (void)next;
- (id)persistedDisplayItemsForDataStore:(id)arg1;
- (void)previous;
- (_Bool)recentDisplayItemsController:(id)arg1 shouldAddItem:(id)arg2;
- (void)recentDisplayItemsControllerDidUpdateDisplayItems:(id)arg1;
- (void)viewController:(id)arg1 selectedApplicationWithDisplayItem:(id)arg2;
- (void)viewControllerWantsDismissal:(id)arg1;
@property(readonly, nonatomic) SBWindow *window; // @synthesize window=_window;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

