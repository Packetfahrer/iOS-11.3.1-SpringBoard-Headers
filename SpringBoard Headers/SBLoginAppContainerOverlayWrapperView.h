//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SBLockOverlayView, _UIBackdropView;

@interface SBLoginAppContainerOverlayWrapperView : UIView
{
    _UIBackdropView *_backdropView;
    SBLockOverlayView *_overlayView;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1 overlayView:(id)arg2;
- (void)layoutSubviews;
@property(readonly, nonatomic) SBLockOverlayView *overlayView; // @synthesize overlayView=_overlayView;

@end

