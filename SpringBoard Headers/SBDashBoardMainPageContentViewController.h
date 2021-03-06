//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardPageViewController.h"

#import "SBDashBoardCombinedListViewControllerDelegate.h"
#import "SBDashBoardNotificationDestination.h"
#import "SBDashBoardPageViewControllerProtocol.h"
#import "_UISettingsKeyObserver.h"

@class NSArray, NSSet, NSString, SBDashBoardAppearance, SBDashBoardBehavior, SBDashBoardCombinedListViewController, SBDashBoardLayoutStrategy, SBDashBoardPresentation, SBDashBoardUserPictureViewController, SBLockScreenLogoutButtonViewController, SBLockScreenSettings, UIColor, _UILegibilitySettings;

@interface SBDashBoardMainPageContentViewController : SBDashBoardPageViewController <_UISettingsKeyObserver, SBDashBoardCombinedListViewControllerDelegate, SBDashBoardNotificationDestination, SBDashBoardPageViewControllerProtocol>
{
    SBDashBoardUserPictureViewController *_userPictureViewController;
    SBDashBoardCombinedListViewController *_combinedListViewController;
    SBLockScreenLogoutButtonViewController *_logoutButtonViewController;
    SBLockScreenSettings *_testSettings;
    _Bool _useFakeBlur;
    SBDashBoardLayoutStrategy *_layoutStrategy;
}

+ (double)_phoneListWidth;
+ (_Bool)isAvailableForConfiguration;
+ (unsigned long long)requiredCapabilities;
+ (Class)viewClass;
- (void).cxx_destruct;
- (void)_addOrRemoveLogoutButtonViewController;
- (void)_addOrRemoveNotificationsListIfNecessaryAnimated:(_Bool)arg1;
- (void)_addOrRemoveUserPictureViewController;
- (void)_addOrRemoveViewsAsAppropriate;
- (id)_dashBoardMainPageView;
- (_Bool)_isPortrait;
- (_Bool)_listBelowDateTime;
- (void)aggregateAppearance:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
@property(readonly, nonatomic) SBDashBoardCombinedListViewController *combinedListViewController; // @synthesize combinedListViewController=_combinedListViewController;
- (void)combinedListViewController:(id)arg1 hasContent:(_Bool)arg2;
- (double)customListWidth;
- (double)dateTimeInsetX;
- (unsigned long long)dateTimeLayout;
- (void)dealloc;
- (_Bool)dismissNotificationInLongLookAnimated:(_Bool)arg1;
@property(nonatomic) __weak id <SBDashBoardNotificationDispatcher> dispatcher; // @dynamic dispatcher;
- (_Bool)handleEvent:(id)arg1;
- (id)init;
- (_Bool)isNotificationContentExtensionVisible:(id)arg1;
- (_Bool)isPresentingNotificationInLongLook;
@property(readonly, nonatomic, getter=isShowingMediaControls) _Bool showingMediaControls;
@property(retain, nonatomic) SBDashBoardLayoutStrategy *layoutStrategy; // @synthesize layoutStrategy=_layoutStrategy;
- (double)listInsetX;
- (unsigned long long)listLayout;
- (unsigned long long)listWidthStrategy;
- (id)notificationSectionSettingsForCombinedListViewController:(id)arg1;
- (void)postNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
@property(nonatomic) _Bool useFakeBlur; // @synthesize useFakeBlur=_useFakeBlur;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)updateForPresentation:(id)arg1;
- (void)updateNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)updateNotificationSectionSettings:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)withdrawNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;

// Remaining properties
@property(readonly, copy, nonatomic) SBDashBoardAppearance *activeAppearance;
@property(readonly, copy, nonatomic) SBDashBoardBehavior *activeBehavior;
@property(readonly, copy, nonatomic) NSString *appearanceIdentifier;
@property(readonly, nonatomic) _Bool authenticated;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) long long backgroundStyle;
@property(readonly, copy, nonatomic) NSSet *components;
@property(readonly, copy, nonatomic) NSString *dashBoardIdentifier;
@property(nonatomic) __weak id <SBDashBoardViewControllerProtocol> dashBoardViewController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) SBDashBoardPresentation *externalPresentation;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long idleTimerDuration;
@property(readonly, nonatomic) long long idleTimerMode;
@property(readonly, nonatomic) long long idleWarnMode;
@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(readonly, nonatomic) long long notificationBehavior;
@property(readonly, nonatomic) long long participantState;
@property(readonly, nonatomic) long long presentationAltitude;
@property(readonly, nonatomic) __weak id <UICoordinateSpace> presentationCoordinateSpace;
@property(readonly, nonatomic) long long presentationPriority;
@property(readonly, copy, nonatomic) NSArray *presentationRegions;
@property(readonly, nonatomic) long long presentationStyle;
@property(readonly, nonatomic) long long presentationTransition;
@property(readonly, nonatomic) long long presentationType;
@property(nonatomic) __weak id <SBDashBoardViewPresenting> presenter;
@property(readonly, nonatomic) long long proximityDetectionMode;
@property(readonly, nonatomic) unsigned long long restrictedCapabilities;
@property(readonly, nonatomic) long long scrollingStrategy;
@property(readonly) Class superclass;
@property(nonatomic, getter=isTransitioning) _Bool transitioning;

@end

