//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUISettings.h"

@class SBLockScreenBiometricFailureSettings;

@interface SBLockScreenMesaSettings : SBUISettings
{
    _Bool _passcodeRequiredEventsCountAsFailures;
    _Bool _flashRedOnPasscodeRequiredEvents;
    _Bool _successFeedbackWaitsUntilButtonUp;
    SBLockScreenBiometricFailureSettings *_firstFailureSettings;
    SBLockScreenBiometricFailureSettings *_secondFailureSettings;
    SBLockScreenBiometricFailureSettings *_thirdFailureSettings;
    SBLockScreenBiometricFailureSettings *_fourthFailureSettings;
    SBLockScreenBiometricFailureSettings *_fifthFailureSettings;
    double _slowPressDuration;
}

+ (id)settingsControllerModule;
- (void).cxx_destruct;
@property(retain, nonatomic) SBLockScreenBiometricFailureSettings *fifthFailureSettings; // @synthesize fifthFailureSettings=_fifthFailureSettings;
@property(retain, nonatomic) SBLockScreenBiometricFailureSettings *firstFailureSettings; // @synthesize firstFailureSettings=_firstFailureSettings;
@property(nonatomic) _Bool flashRedOnPasscodeRequiredEvents; // @synthesize flashRedOnPasscodeRequiredEvents=_flashRedOnPasscodeRequiredEvents;
@property(retain, nonatomic) SBLockScreenBiometricFailureSettings *fourthFailureSettings; // @synthesize fourthFailureSettings=_fourthFailureSettings;
@property(nonatomic) _Bool passcodeRequiredEventsCountAsFailures; // @synthesize passcodeRequiredEventsCountAsFailures=_passcodeRequiredEventsCountAsFailures;
@property(retain, nonatomic) SBLockScreenBiometricFailureSettings *secondFailureSettings; // @synthesize secondFailureSettings=_secondFailureSettings;
- (void)setDefaultValues;
@property(nonatomic) double slowPressDuration; // @synthesize slowPressDuration=_slowPressDuration;
@property(nonatomic) _Bool successFeedbackWaitsUntilButtonUp; // @synthesize successFeedbackWaitsUntilButtonUp=_successFeedbackWaitsUntilButtonUp;
@property(retain, nonatomic) SBLockScreenBiometricFailureSettings *thirdFailureSettings; // @synthesize thirdFailureSettings=_thirdFailureSettings;

@end
