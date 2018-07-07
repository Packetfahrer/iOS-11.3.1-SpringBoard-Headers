//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CAMediaTimingFunction;

@interface _SBSteppedAnimationTimingFunction : NSObject
{
    CAMediaTimingFunction *_timingFunction;
    struct SBNormalizedTransitionInterval _constrainedRange;
}

+ (id)timingFunctionWithTimingFunction:(id)arg1 constrainedToIntervalBetween:(double)arg2 and:(double)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct SBNormalizedTransitionInterval constrainedRange; // @synthesize constrainedRange=_constrainedRange;
- (id)initWithTimingFunction:(id)arg1 constrainedToIntervalBetween:(double)arg2 and:(double)arg3;
@property(readonly, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;
- (double)valueAtPercentage:(double)arg1;

@end

