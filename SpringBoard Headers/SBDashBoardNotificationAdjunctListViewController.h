//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardViewControllerBase.h"

#import "SBLockScreenNowPlayingControllerDelegate.h"
#import "_UISettingsKeyObserver.h"

@class NSString, SBDashBoardAdjunctItemView, SBDashBoardNowPlayingController, SBLockScreenSettings, UIStackView;

@interface SBDashBoardNotificationAdjunctListViewController : SBDashBoardViewControllerBase <SBLockScreenNowPlayingControllerDelegate, _UISettingsKeyObserver>
{
    SBDashBoardAdjunctItemView *_nowPlayingControlsItem;
    SBDashBoardNowPlayingController *_nowPlayingController;
    SBLockScreenSettings *_testSettings;
    long long _nowPlayingState;
    UIStackView *_stackView;
    _Bool _presentingContent;
    id <SBDashBoardNotificationAdjunctListViewControllerDelegate> _delegate;
}

+ (Class)viewClass;
- (void).cxx_destruct;
- (void)_didUpdateDisplay;
- (id)_nowPlayingControlsView;
- (void)_prepareNowPlayingControlsView;
- (_Bool)_shouldShowMediaControls;
- (void)_updateAdjunctListItems;
- (void)_updateMediaControlsVisibility;
- (void)_updateMediaControlsVisibilityAnimated:(_Bool)arg1;
- (void)_updatePresentingContent;
- (void)dealloc;
@property(nonatomic) __weak id <SBDashBoardNotificationAdjunctListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)handleEvent:(id)arg1;
- (id)init;
@property(readonly, nonatomic, getter=isPresentingContent) _Bool presentingContent; // @synthesize presentingContent=_presentingContent;
@property(readonly, nonatomic, getter=isShowingMediaControls) _Bool showingMediaControls;
@property(readonly, nonatomic) double listViewContentAnimationFriction;
@property(readonly, nonatomic) double listViewContentAnimationTension;
- (void)nowPlayingController:(id)arg1 didChangeToState:(long long)arg2;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

