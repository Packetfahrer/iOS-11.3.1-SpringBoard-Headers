//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBUIBannerTargetImplementation.h"

@class NSHashTable, NSMutableArray, NSMutableSet, NSString, SBUIBannerContext, SBUISound;

@interface SBStarkBannerTarget : NSObject <SBUIBannerTargetImplementation>
{
    id <SBStarkBannerTargetObserver> _observer;
    NSHashTable *_sources;
    _Bool _invalidated;
    NSMutableSet *_suspensionReasons;
    NSMutableArray *_pendedContexts;
    SBUIBannerContext *_currentContext;
    SBUISound *_currentSound;
    long long _displayAssertions;
}

- (void).cxx_destruct;
- (_Bool)_canDequeueWithOptions:(long long)arg1;
- (_Bool)_canDismissWithOptions:(long long)arg1;
- (void)_dequeueWithOptions:(long long)arg1 dismissReason:(int)arg2;
- (void)_dismissContext:(id)arg1 withOptions:(long long)arg2 dismissReason:(int)arg3;
- (void)_dismissIntervalElapsed:(id)arg1;
- (_Bool)_isSuspendedForAssistant;
- (void)_killIntervalElapsed:(id)arg1;
- (void)_replaceIntervalElapsed:(id)arg1;
@property(readonly, nonatomic) void *bannerTargetIdentifier;
@property(readonly, nonatomic) long long bannerTargetIdiom;
- (void)cacheBannerForContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)currentBannerContextForSource:(id)arg1;
@property(readonly, nonatomic) SBUIBannerContext *currentContext; // @synthesize currentContext=_currentContext;
- (void)dealloc;
- (void)dismissCurrentBannerContextForSource:(id)arg1;
- (id)init;
- (void)invalidate;
@property(nonatomic, getter=isPausedForUserInteraction) _Bool pausedForUserInteraction;
- (_Bool)isShowingModalBanner;
- (_Bool)isSuspended;
- (_Bool)isSuspendedForReason:(id)arg1;
- (void)modallyPresentBannerWithContext:(id)arg1;
- (void)noteContext:(id)arg1 subActionSelected:(unsigned long long)arg2;
- (void)noteContextCanceled:(id)arg1;
- (void)noteContextSelected:(id)arg1;
@property(nonatomic) __weak id <SBStarkBannerTargetObserver> observer; // @synthesize observer=_observer;
- (void)registerSource:(id)arg1;
- (void)removeCachedBannerForContext:(id)arg1;
- (void)setSuspended:(_Bool)arg1 cancellingCurrent:(_Bool)arg2 forReason:(id)arg3;
- (void)signalSource:(id)arg1;
- (void)unregisterSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

