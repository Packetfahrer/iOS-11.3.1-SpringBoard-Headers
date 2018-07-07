//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBCoverSheetSlidingViewController;

@protocol SBCoverSheetSlidingViewControllerDelegate <NSObject>
- (void)coverSheetSlidingViewController:(SBCoverSheetSlidingViewController *)arg1 animateForGestureActive:(_Bool)arg2 withProgress:(double)arg3 beginBlock:(void (^)(void))arg4 endBlock:(void (^)(void))arg5;
- (void)coverSheetSlidingViewController:(SBCoverSheetSlidingViewController *)arg1 animationTickedWithProgress:(double)arg2 coverSheetFrame:(struct CGRect)arg3 gestureActive:(_Bool)arg4 forPresentationValue:(_Bool)arg5;
- (void)coverSheetSlidingViewController:(SBCoverSheetSlidingViewController *)arg1 committingToEndPresented:(_Bool)arg2;
- (void)coverSheetSlidingViewController:(SBCoverSheetSlidingViewController *)arg1 dismissGestureChangedWithProgress:(double)arg2;
- (void)coverSheetSlidingViewController:(SBCoverSheetSlidingViewController *)arg1 prepareForDismissalTransitionForReversingTransition:(_Bool)arg2 forUserGesture:(_Bool)arg3;
- (void)coverSheetSlidingViewController:(SBCoverSheetSlidingViewController *)arg1 prepareForPresentationTransitionForUserGesture:(_Bool)arg2;
- (void)coverSheetSlidingViewControllerCleanupDismissalTransition:(SBCoverSheetSlidingViewController *)arg1;
- (void)coverSheetSlidingViewControllerCleanupInterstitialTransition:(SBCoverSheetSlidingViewController *)arg1;
- (void)coverSheetSlidingViewControllerCleanupPresentationTransition:(SBCoverSheetSlidingViewController *)arg1;
- (void)coverSheetSlidingViewControllerCleanupRubberBandedPresentationTransition:(SBCoverSheetSlidingViewController *)arg1;
- (void)coverSheetSlidingViewControllerDidPassRubberBandThreshold:(SBCoverSheetSlidingViewController *)arg1;
- (void)coverSheetSlidingViewControllerPrepareForRubberBandedPresentationTransition:(SBCoverSheetSlidingViewController *)arg1;
- (void)coverSheetSlidingViewControllerUserPresentGestureBegan:(SBCoverSheetSlidingViewController *)arg1;
- (_Bool)hasContentUnderCoverSheetSlidingViewController:(SBCoverSheetSlidingViewController *)arg1;
@end

