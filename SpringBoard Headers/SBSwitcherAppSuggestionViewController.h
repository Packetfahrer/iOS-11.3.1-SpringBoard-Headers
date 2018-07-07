//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSObject<OS_dispatch_queue>, SBAppSwitcherPageView, SBBestAppSuggestion, SBSwitcherAppSuggestionBannerView, UILongPressGestureRecognizer, UITapGestureRecognizer;

@interface SBSwitcherAppSuggestionViewController : UIViewController
{
    SBBestAppSuggestion *_bestAppSuggestion;
    _Bool _showSuggestions;
    SBSwitcherAppSuggestionBannerView *_bannerView;
    SBAppSwitcherPageView *_slideUpPageView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    _Bool _presentingOrDismissingBanner;
    _Bool _isPresentingApp;
    NSObject<OS_dispatch_queue> *_setSuggestionQueue;
    _Bool _suggestionQueueSuspended;
    id <SBSwitcherAppSuggestionViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_activateCurrentSuggestionWithAnimationCompletion:(CDUnknownBlockType)arg1;
- (void)_animateOutAndRemoveCurrentBottomBannerWithCompletion:(CDUnknownBlockType)arg1;
- (unsigned long long)_bannerStyle;
- (void)_beginInteractivePresentationOrAnimation;
- (void)_endInteractivePresentationOrAnimation;
- (void)_handleBannerTap:(id)arg1;
- (void)_handleBannerTap:(id)arg1 animationCompletion:(CDUnknownBlockType)arg2;
- (void)_handleLongPress:(id)arg1;
- (_Bool)_hasSuggestionBannerView;
- (struct CGRect)_idleOnscreenRectForBottomBanner;
- (void)_insertAndAnimateInBottomBannerForSuggestion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_insertContainerForSlideUp;
@property(nonatomic, getter=_isSuggestionQueueSuspended, setter=_setSuggestionQueueSuspended:) _Bool suggestionQueueSuspended; // @synthesize suggestionQueueSuspended=_suggestionQueueSuspended;
- (id)_newDynamicAnimationForTargetValue:(double)arg1 withStartValue:(double)arg2 withInitialVelocity:(double)arg3;
- (struct CGRect)_offscreenRectForBottomBanner;
- (struct CGRect)_offscreenRectForContentView;
- (struct CGRect)_presentedRectForContentView;
- (void)_removeContainerForSlideUp;
- (void)_setBestAppSuggestion:(id)arg1 animationCompletion:(CDUnknownBlockType)arg2;
- (void)_updateBottomBannerWithCompletion:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) SBBestAppSuggestion *bestAppSuggestion; // @synthesize bestAppSuggestion=_bestAppSuggestion;
- (void)dealloc;
@property(nonatomic) __weak id <SBSwitcherAppSuggestionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
@property(nonatomic) _Bool showSuggestions; // @synthesize showSuggestions=_showSuggestions;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)willMoveToParentViewController:(id)arg1;

@end

