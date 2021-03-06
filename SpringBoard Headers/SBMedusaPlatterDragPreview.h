//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SBIcon, SBIconView, SBMedusaDecoratedDeviceApplicationSceneViewController;

@interface SBMedusaPlatterDragPreview : UIView
{
    struct CGSize _platterSize;
    _Bool _flocked;
    _Bool _showsIconLabel;
    _Bool _showsIconHighlight;
    _Bool _showsIconCloseBox;
    SBIcon *_icon;
    SBIconView *_iconView;
    SBMedusaDecoratedDeviceApplicationSceneViewController *_medusaDecoratedSceneViewController;
    unsigned long long _platterViewState;
    double _requestedIconContentScale;
    UIView *_iconContainerView;
}

+ (double)appCornerRadius;
+ (double)floatingApplicationDiffuseShadowRadius;
+ (double)iconLiftAlpha;
+ (long long)iconShadowGraphicsQuality;
+ (double)liftScale;
- (void).cxx_destruct;
- (void)_setApplicationSceneViewShadowForState:(unsigned long long)arg1;
- (void)_setIconContentScale:(double)arg1 lifted:(_Bool)arg2;
- (void)_setIconShadowForState:(unsigned long long)arg1;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (double)cornerRadiusForAppPlatter;
- (void)draggingSourceCancelAnimationCompleted;
- (void)draggingSourceDroppedWithOperation:(unsigned long long)arg1;
- (void)dropDestinationAnimationCompleted;
- (void)handleCleanup;
@property(retain, nonatomic) SBIcon *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UIView *iconContainerView; // @synthesize iconContainerView=_iconContainerView;
@property(readonly, nonatomic) SBIconView *iconView; // @synthesize iconView=_iconView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithIconViewClass:(Class)arg1;
@property(nonatomic, getter=isFlocked) _Bool flocked; // @synthesize flocked=_flocked;
- (void)layoutSubviews;
@property(retain, nonatomic) SBMedusaDecoratedDeviceApplicationSceneViewController *medusaDecoratedSceneViewController; // @synthesize medusaDecoratedSceneViewController=_medusaDecoratedSceneViewController;
@property(nonatomic) unsigned long long platterViewState; // @synthesize platterViewState=_platterViewState;
@property(nonatomic) double requestedIconContentScale; // @synthesize requestedIconContentScale=_requestedIconContentScale;
- (void)setComponentAlphas;
- (void)setPlatterViewState:(unsigned long long)arg1 andSize:(struct CGSize)arg2;
- (void)setRequestedIconContentScale:(double)arg1 lifted:(_Bool)arg2;
@property(nonatomic) _Bool showsIconCloseBox; // @synthesize showsIconCloseBox=_showsIconCloseBox;
@property(nonatomic) _Bool showsIconHighlight; // @synthesize showsIconHighlight=_showsIconHighlight;
@property(nonatomic) _Bool showsIconLabel; // @synthesize showsIconLabel=_showsIconLabel;
- (_Bool)shouldDisplayIconAccessoriesForPlatterViewState:(unsigned long long)arg1;
- (_Bool)shouldDisplayIconCloseBoxForPlatterViewState:(unsigned long long)arg1;
- (_Bool)shouldDisplayIconLabelForPlatterViewState:(unsigned long long)arg1;
- (_Bool)shouldHighlightIconForPlatterViewState:(unsigned long long)arg1;
- (void)updateIconViewComponentVisibility;

@end

