//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface SBDeferredWorkBuilder : NSObject
{
    NSMutableArray *_steps;
}

- (void).cxx_destruct;
- (void)addStep:(CDUnknownBlockType)arg1;
- (void)perform;
- (void)reset;

@end

