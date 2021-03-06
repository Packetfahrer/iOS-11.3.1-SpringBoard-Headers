//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBIconImageView.h"

#import "SBFolderIconObserver.h"
#import "SBIconBlurryBackgroundViewObserver.h"

@class NSMutableArray, NSString, SBFloatyFolderView, SBFolderIconBackgroundView, UIView, _SBIconGridWrapperView;

@interface SBFolderIconImageView : SBIconImageView <SBFolderIconObserver, SBIconBlurryBackgroundViewObserver>
{
    SBFolderIconBackgroundView *_backgroundView;
    UIView *_solidColorBackgroundView;
    UIView *_pageGridContainer;
    _SBIconGridWrapperView *_leftWrapperView;
    _SBIconGridWrapperView *_rightWrapperView;
    NSMutableArray *_pageElements;
    unsigned long long _currentPageIndex;
    SBFloatyFolderView *_crossfadeFolderView;
    UIView *_crossfadeScalingView;
    _Bool _animating;
    unsigned long long _imageUpdatesDisableCount;
    unsigned long long _transitionToken;
    unsigned long long _backgroundStyle;
    unsigned long long _currentBackgroundStyle;
}

- (void).cxx_destruct;
- (id)_currentPageElement;
- (id)_folderIcon;
- (id)_generateSquareContentsImage;
- (Class)_iconGridImageClass;
- (struct CGSize)_interPageSpacing;
- (struct CGSize)_interiorGridSizeClipRect;
- (void)_performScrollingMovingToLeft:(_Bool)arg1 movingToRight:(_Bool)arg2 targetPageIndex:(unsigned long long)arg3 targetPageScrollRow:(unsigned long long)arg4 newLeftElement:(id)arg5 newRightElement:(id)arg6 animated:(_Bool)arg7;
- (void)_setAnimating:(_Bool)arg1;
- (void)_setPageElements:(id)arg1;
- (void)_setupGridViewsInDefaultConfiguration;
- (void)_showLeftMinigrid;
- (void)_showRightMinigrid;
- (void)_updateAccessibilityBackgroundContrast;
- (void)_updateCurrentBackgroundStyle;
- (void)_updateRasterization;
@property(nonatomic) unsigned long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
- (id)backgroundView;
- (void)blurryBackgroundViewDidChangeWhetherBlurring:(id)arg1;
- (unsigned long long)centerVisibleMiniIconIndex;
- (void)cleanupAfterFloatyFolderCrossfade;
@property(readonly, nonatomic) unsigned long long concreteBackgroundStyle;
- (id)contentsImage;
@property(nonatomic) unsigned long long currentBackgroundStyle; // @synthesize currentBackgroundStyle=_currentBackgroundStyle;
@property(readonly, nonatomic) unsigned long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
- (id)darkeningOverlayImage;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)disableImageUpdates;
- (void)enableImageUpdates;
- (unsigned long long)firstVisibleMiniIconIndex;
- (void)folderIcon:(id)arg1 didUpdateGridImage:(id)arg2 forListIndex:(unsigned long long)arg3 forContainedIconImageUpdate:(id)arg4;
- (struct CGRect)frameForMiniIconAtIndex:(unsigned long long)arg1;
- (struct CGRect)frameForMiniIconAtIndexPath:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
- (unsigned long long)lastVisibleMiniIconIndex;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)prepareToCrossfadeWithFloatyFolderView:(id)arg1 allowFolderInteraction:(_Bool)arg2;
- (void)scrollToFirstGapAnimated:(_Bool)arg1;
- (void)scrollToGapOrTopIfFullOfPage:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)scrollToTopOfFirstPageAnimated:(_Bool)arg1;
- (void)scrollToTopOfPage:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)setBackgroundAndIconGridImageAlpha:(double)arg1;
- (void)setBackgroundScale:(double)arg1;
- (void)setFloatyFolderCrossfadeFraction:(double)arg1;
- (void)setIcon:(id)arg1 location:(long long)arg2 animated:(_Bool)arg3;
- (void)setIconGridImageAlpha:(double)arg1;
- (void)setSuppressesBlurryBackgroundChanges:(_Bool)arg1;
- (void)setWallpaperRelativeCenter:(struct CGPoint)arg1;
- (id)snapshot;
- (void)updateImageAnimated:(_Bool)arg1;
- (struct CGRect)visibleImageRelativeFrameForMiniIconAtIndex:(unsigned long long)arg1;
- (unsigned long long)visibleMiniIconCount;
- (unsigned long long)visibleMiniIconListIndex;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

