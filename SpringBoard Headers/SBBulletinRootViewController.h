//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class SBBulletinRootView, SBBulletinWindowController, _SBBulletinRootViewControllerTransitionContext;

@interface SBBulletinRootViewController : UIViewController
{
    SBBulletinRootView *_rootView;
    SBBulletinWindowController *_windowController;
    _SBBulletinRootViewControllerTransitionContext *_activeTransitionContext;
}

- (void).cxx_destruct;
- (void)_getRotationContentSettings:(CDStruct_e950349b *)arg1;
- (id)initWithBulletinWindowController:(id)arg1;
- (void)loadView;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)shouldAutomaticallyForwardRotationMethods;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)wantsFullScreenLayout;

@end

