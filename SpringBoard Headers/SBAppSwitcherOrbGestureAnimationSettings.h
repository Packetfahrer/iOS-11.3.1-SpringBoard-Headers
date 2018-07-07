//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUISettings.h"

@class SBFluidBehaviorSettings;

@interface SBAppSwitcherOrbGestureAnimationSettings : SBUISettings
{
    SBFluidBehaviorSettings *_popToSwitcherSettings;
    SBFluidBehaviorSettings *_peekingAndPanningSettings;
    SBFluidBehaviorSettings *_breathingSettings;
    double _response;
}

+ (id)settingsControllerModule;
- (void).cxx_destruct;
@property(retain, nonatomic) SBFluidBehaviorSettings *breathingSettings; // @synthesize breathingSettings=_breathingSettings;
@property(retain, nonatomic) SBFluidBehaviorSettings *peekingAndPanningSettings; // @synthesize peekingAndPanningSettings=_peekingAndPanningSettings;
@property(retain, nonatomic) SBFluidBehaviorSettings *popToSwitcherSettings; // @synthesize popToSwitcherSettings=_popToSwitcherSettings;
@property(nonatomic) double response; // @synthesize response=_response;
- (void)setDefaultValues;

@end

