//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBActivationSettings;

@protocol SBActivationSettings <NSObject>
- (void)applyActivationSettings:(SBActivationSettings *)arg1;
- (_Bool)boolForActivationSetting:(unsigned int)arg1;
- (void)clearActivationSettings;
- (SBActivationSettings *)copyActivationSettings;
- (long long)flagForActivationSetting:(unsigned int)arg1;
- (id)objectForActivationSetting:(unsigned int)arg1;
- (void)setFlag:(long long)arg1 forActivationSetting:(unsigned int)arg2;
- (void)setObject:(id)arg1 forActivationSetting:(unsigned int)arg2;
@end

