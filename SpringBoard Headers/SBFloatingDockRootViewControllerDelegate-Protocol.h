//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBFloatingDockRootViewController, SBFolderController;

@protocol SBFloatingDockRootViewControllerDelegate <NSObject>
- (void)floatingDockRootViewController:(SBFloatingDockRootViewController *)arg1 floatingDockWantsToBePresented:(_Bool)arg2;
- (void)floatingDockRootViewController:(SBFloatingDockRootViewController *)arg1 willChangeToHeight:(double)arg2;

@optional
- (void)floatingDockRootViewController:(SBFloatingDockRootViewController *)arg1 modifyProgress:(double)arg2 interactive:(_Bool)arg3 completion:(void (^)(_Bool))arg4;
- (void)floatingDockRootViewController:(SBFloatingDockRootViewController *)arg1 willPerformTransitionWithFolder:(SBFolderController *)arg2 presenting:(_Bool)arg3 withTransitionCoordinator:(id <SBViewControllerTransitionCoordinator>)arg4;
- (void)floatingDockRootViewControllerDidEndPresentationTransition:(SBFloatingDockRootViewController *)arg1;
- (_Bool)floatingDockRootViewControllerShouldBeginScreenEdgeGestureRecognizer:(SBFloatingDockRootViewController *)arg1;
- (_Bool)floatingDockRootViewControllerShouldHandlePanGestureRecognizer:(SBFloatingDockRootViewController *)arg1;
@end

