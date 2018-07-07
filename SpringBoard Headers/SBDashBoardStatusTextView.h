//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBUILegibility.h"

@class NSArray, NSString, SBUILegibilityLabel, _UILegibilitySettings;

@interface SBDashBoardStatusTextView : UIView <SBUILegibility>
{
    _UILegibilitySettings *_legibilitySettings;
    double _strength;
    SBUILegibilityLabel *_internalLegalTextLabel;
    SBUILegibilityLabel *_deviceInformationLabel;
    SBUILegibilityLabel *_supervisionLabel;
    SBUILegibilityLabel *_provisionalEnrollmentLabel;
    unsigned long long _transactionCount;
    NSString *_internalLegalText;
    NSString *_supervisionText;
    NSArray *_deviceInformationText;
    NSString *_provisionalEnrollmentText;
}

- (void).cxx_destruct;
- (id)_font;
- (id)_largeFont;
- (double)_lineHeightOfNonLegalLabels;
- (double)_nonLegalLabelFontLeading;
- (double)_nonLegalTextParagraphSpacing;
- (double)_spacingBetweenNonLegalLabels;
- (void)_updateDeviceInformationLabel;
- (void)_updateInternalLegalLabel;
- (void)_updateLegibilityStrength;
- (void)_updateProvisionalEnrollmentLabel;
- (void)_updateSupervisionLabel;
- (void)_updateTextViews;
- (void)_updateTextViewsIfNecessary;
@property(copy, nonatomic) NSArray *deviceInformationText; // @synthesize deviceInformationText=_deviceInformationText;
- (id)initWithFrame:(struct CGRect)arg1;
@property(copy, nonatomic) NSString *internalLegalText; // @synthesize internalLegalText=_internalLegalText;
- (void)layoutSubviews;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property(copy, nonatomic) NSString *provisionalEnrollmentText; // @synthesize provisionalEnrollmentText=_provisionalEnrollmentText;
@property(nonatomic) double strength; // @synthesize strength=_strength;
@property(copy, nonatomic) NSString *supervisionText; // @synthesize supervisionText=_supervisionText;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateTextsWithBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

