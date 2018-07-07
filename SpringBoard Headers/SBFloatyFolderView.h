//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBFolderView.h"

#import "UIGestureRecognizerDelegate.h"
#import "_UISettingsKeyObserver.h"

@class NSMapTable, NSMutableArray, NSString, SBFloatyFolderBackgroundClipView, SBFolderSettings, UILongPressGestureRecognizer, UIPinchGestureRecognizer, UITapGestureRecognizer;

@interface SBFloatyFolderView : SBFolderView <UIGestureRecognizerDelegate, _UISettingsKeyObserver>
{
    SBFloatyFolderBackgroundClipView *_scrollClipView;
    NSMutableArray *_pageBackgroundViews;
    NSMapTable *_pageBackgroundViewsForIconListViews;
    unsigned long long _scalingViewPageIndex;
    UITapGestureRecognizer *_tapGesture;
    UIPinchGestureRecognizer *_pinchGesture;
    UILongPressGestureRecognizer *_longPressGesture;
    SBFolderSettings *_folderSettings;
    struct CGPoint _preReachabilityTitleOrigin;
    struct CGPoint _reachabilityTitleOrigin;
    struct CGPoint _preReachabilityScaleOrigin;
    struct CGPoint _reachabilityScaleOrigin;
    double _reachabilityYOffset;
    _Bool _layingOutForReachability;
    _Bool _displayingMultipleIconLists;
    _Bool _convertingIconListStyle;
    _Bool _animatingRotation;
    unsigned long long _backgroundEffect;
}

+ (unsigned long long)_countOfAdditionalPagesToKeepVisibleInOneDirection;
+ (Class)_scrollViewClass;
- (void).cxx_destruct;
- (void)_addIconListView:(id)arg1;
- (void)_configureGestures;
- (void)_convertToMultipleIconListsAnimated:(_Bool)arg1;
- (void)_convertToSingleIconListAnimated:(_Bool)arg1;
- (unsigned long long)_countOfAdditionalPagesToKeepAnimatingInOneDirection;
- (void)_currentPageIndexDidChange;
- (struct CGRect)_frameForScalingView;
- (void)_handleLongPressGesture:(id)arg1;
- (void)_handleOutsideTap:(id)arg1;
- (void)_handlePinchGesture:(id)arg1;
- (void)_handleReachabilityActivatedAnimate:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleReachabilityDectivatedAnimate:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (struct CGRect)_iconListFrameForPageRect:(struct CGRect)arg1 atIndex:(unsigned long long)arg2;
- (void)_layoutSubviews;
- (id)_newPageBackgroundView;
- (double)_offsetToCenterPageControlInSpaceForPageControl;
- (void)_orientationDidChange:(long long)arg1;
- (struct CGRect)_pageBackgroundFrameForPageRect:(struct CGRect)arg1;
- (void)_removeIconListView:(id)arg1;
- (_Bool)_shouldConvertToMultipleIconListsInLandscapeOrientation;
- (_Bool)_showsTitle;
- (_Bool)_tapToCloseGestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (double)_titleFontSize;
- (double)_titleVerticalOffsetForOrientation:(long long)arg1;
- (void)_updateIconListContainment:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_updateScalingViewLocation;
@property(nonatomic) unsigned long long backgroundEffect; // @synthesize backgroundEffect=_backgroundEffect;
- (id)borrowScalingView;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)didTransitionAnimated:(_Bool)arg1;
- (void)enumeratePageBackgroundViewsUsingBlock:(CDUnknownBlockType)arg1;
- (void)fadeContentForMagnificationFraction:(double)arg1;
- (void)fadeContentForMinificationFraction:(double)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleReachabilityActivated:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)iconListViewAtPoint:(struct CGPoint)arg1;
- (id)initWithFolder:(id)arg1 orientation:(long long)arg2 viewMap:(id)arg3 context:(id)arg4;
@property(nonatomic, getter=isAnimatingRotation) _Bool animatingRotation; // @synthesize animatingRotation=_animatingRotation;
@property(nonatomic, getter=isConvertingIconListStyle) _Bool convertingIconListStyle; // @synthesize convertingIconListStyle=_convertingIconListStyle;
@property(nonatomic, getter=isDisplayingMultipleIconLists) _Bool displayingMultipleIconLists; // @synthesize displayingMultipleIconLists=_displayingMultipleIconLists;
- (_Bool)locationCountsAsInsideFolder:(struct CGPoint)arg1;
- (double)reachabilityYOffset;
- (void)returnScalingView;
- (void)setAccessibilityLegibilitySettings:(id)arg1;
- (void)setBackgroundAlpha:(double)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (struct CGPoint)visibleFolderRelativeImageCenterForIcon:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willTransitionAnimated:(_Bool)arg1 withSettings:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

