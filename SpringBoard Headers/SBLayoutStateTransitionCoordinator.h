//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBWorkspaceApplicationSceneTransitionContextDelegate.h"

@class NSHashTable, NSMapTable, NSString, SBLayoutStateTransitionContext, SBSceneManager;

@interface SBLayoutStateTransitionCoordinator : NSObject <SBWorkspaceApplicationSceneTransitionContextDelegate>
{
    NSHashTable *_observerHashTable;
    NSMapTable *_sceneEntityFrameProviderMapTable;
    SBLayoutStateTransitionContext *_transitionContext;
    SBSceneManager *_sceneManager;
}

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)beginTransitionForWorkspaceTransaction:(id)arg1;
- (void)endTransitionWithError:(id)arg1;
- (id)init;
- (id)initWithSceneManager:(id)arg1;
@property(readonly, nonatomic, getter=isTransitioning) _Bool transitioning;
- (id)layoutStateForApplicationTransitionContext:(id)arg1;
- (id)previousLayoutStateForApplicationTransitionContext:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)sceneEntityFrameProviderForLayoutRole:(long long)arg1;
@property(readonly, nonatomic) __weak SBSceneManager *sceneManager; // @synthesize sceneManager=_sceneManager;
- (void)setSceneEntityFrameProvider:(id)arg1 forLayoutRole:(long long)arg2;
@property(readonly, nonatomic) SBLayoutStateTransitionContext *transitionContext; // @synthesize transitionContext=_transitionContext;
- (void)willEndTransition;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

