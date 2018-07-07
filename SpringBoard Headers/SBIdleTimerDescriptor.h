//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"
#import "NSCopying.h"

@class NSString;

@interface SBIdleTimerDescriptor : NSObject <BSDescriptionProviding, NSCopying>
{
    long long _timerMode;
    double _sampleInterval;
    double _warnInterval;
    double _totalInterval;
    double _quickUnwarnInterval;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithTimerMode:(long long)arg1 warnInterval:(double)arg2 totalInterval:(double)arg3;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic) double quickUnwarnInterval; // @synthesize quickUnwarnInterval=_quickUnwarnInterval;
@property(nonatomic) double sampleInterval; // @synthesize sampleInterval=_sampleInterval;
@property(nonatomic) long long timerMode; // @synthesize timerMode=_timerMode;
@property(nonatomic) double totalInterval; // @synthesize totalInterval=_totalInterval;
@property(nonatomic) double warnInterval; // @synthesize warnInterval=_warnInterval;
@property(readonly, nonatomic) _Bool shouldExpireAfterWarn;
@property(readonly, nonatomic) _Bool shouldWarn;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

