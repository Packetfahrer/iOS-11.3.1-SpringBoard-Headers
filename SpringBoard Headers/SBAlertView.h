//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SBAlert;

@interface SBAlertView : UIView
{
    SBAlert *_alert;
    unsigned int _shouldAnimateIn:1;
    double _durationForInflightRotation;
}

- (void).cxx_destruct;
- (void)_handleWillRotateNotification:(id)arg1;
- (id)alert;
- (void)alertDisplayBecameVisible;
- (void)alertDisplayWillBecomeVisible;
- (void)alertWindowViewControllerResizedFromContentFrame:(struct CGRect)arg1 toContentFrame:(struct CGRect)arg2;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)dismiss;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isAnimatingOut;
- (_Bool)isReadyToBeRemovedFromView;
- (void)layoutForInterfaceOrientation:(long long)arg1;
- (void)setAlert:(id)arg1;
- (void)setShouldAnimateIn:(_Bool)arg1;
- (_Bool)shouldAddClippingViewDuringRotation;
- (_Bool)shouldAnimateIn;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end

