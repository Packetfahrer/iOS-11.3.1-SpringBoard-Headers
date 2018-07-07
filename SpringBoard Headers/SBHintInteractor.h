//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBViewControllerInteractiveTransitioning.h"
#import "UIInteractionProgressObserver.h"

@class NSString, UIInteractionProgress;

@interface SBHintInteractor : NSObject <UIInteractionProgressObserver, SBViewControllerInteractiveTransitioning>
{
    id <SBViewControllerContextTransitioning> _transitionContext;
    CDStruct_3e878e9e _hintInterval;
    UIInteractionProgress *_interactionProgress;
}

- (void).cxx_destruct;
- (void)_updateInteractionPercentComplete:(double)arg1;
- (void)cancelTransition;
- (void)finishInteractiveTransition;
- (id)initWithInteractionProgress:(id)arg1 maxHintProgress:(double)arg2;
@property(readonly, nonatomic) UIInteractionProgress *interactionProgress; // @synthesize interactionProgress=_interactionProgress;
- (void)interactionProgress:(id)arg1 didEnd:(_Bool)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
@property(readonly, nonatomic) double maxHintProgress;
- (void)startInteractiveTransition:(id)arg1;
- (_Bool)supportsRestarting;
- (void)updateTransition:(double)arg1;

// Remaining properties
@property(readonly, nonatomic) long long completionCurve;
@property(readonly, nonatomic) double completionSpeed;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsInteractiveStart;

@end

