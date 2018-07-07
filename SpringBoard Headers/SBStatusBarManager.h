//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"

@class NSHashTable, NSMutableArray, NSString, UIWindow;

@interface SBStatusBarManager : NSObject <BSDescriptionProviding>
{
    NSHashTable *_statusBars;
    UIWindow *_recycledStatusBarsContainerWindow;
    NSMutableArray *_recycledStatusBars;
    NSHashTable *_hideStatusBarAssertions;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_removeStatusBarContainer:(id)arg1;
- (id)acquireHideFrontMostStatusBarAssertionForReason:(id)arg1;
- (id)createStatusBarWithReason:(id)arg1;
- (id)createStatusBarWithReason:(id)arg1 withFrame:(struct CGRect)arg2;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)frontMostStatusBarStyleRequest;
- (void)handleStatusBarTapWithEvent:(id)arg1;
- (id)init;
- (_Bool)isFrontMostStatusBarHidden;
- (void)recycleStatusBar:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

