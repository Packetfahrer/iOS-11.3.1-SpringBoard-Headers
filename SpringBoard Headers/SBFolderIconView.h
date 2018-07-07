//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBIconView.h"

#import "_UISettingsKeyObserver.h"

@class NSString, SBFolderSettings;

@interface SBFolderIconView : SBIconView <_UISettingsKeyObserver>
{
    SBFolderSettings *_folderSettings;
}

+ (_Bool)canShowLabelAccessoryView;
- (void).cxx_destruct;
- (void)_applyEditingStateAnimated:(_Bool)arg1;
- (id)_folderIconImageView;
- (void)_updateAdaptiveColors;
- (_Bool)allowsTapWhileEditing;
@property(nonatomic) unsigned long long backgroundStyle;
- (unsigned long long)centerVisibleMiniIconIndex;
- (void)cleanupAfterFloatyFolderCrossfade;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)dropGlow;
- (unsigned long long)firstVisibleMiniIconIndex;
- (id)folder;
- (id)folderIcon;
- (struct CGRect)frameForMiniIconAtIndex:(unsigned long long)arg1;
- (id)iconBackgroundView;
- (void)iconDropDidComplete;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic, getter=isAnimatingScrolling) _Bool animatingScrolling;
- (unsigned long long)lastVisibleMiniIconIndex;
- (void)matchBackgroundWallpaperCenterToFolderIconView:(id)arg1;
- (void)prepareDropGlow;
- (void)prepareForIconDrop;
- (void)prepareForReuse;
- (void)prepareToCrossfadeWithFloatyFolderView:(id)arg1 allowFolderInteraction:(_Bool)arg2;
- (void)removeDropGlow;
- (void)scrollToFirstGapAnimated:(_Bool)arg1;
- (void)scrollToGapOrTopIfFullOfPage:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)scrollToTopOfFirstPageAnimated:(_Bool)arg1;
- (void)scrollToTopOfPage:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)setBackgroundAndIconGridImageAlpha:(double)arg1;
- (void)setFloatyFolderCrossfadeFraction:(double)arg1;
- (void)setIcon:(id)arg1;
- (void)setIconGridImageAlpha:(double)arg1;
- (void)setShouldRasterizeImageView:(_Bool)arg1;
- (void)setSuppressesBlurryBackgroundChanges:(_Bool)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)showDropGlow:(_Bool)arg1;
- (struct CGRect)visibleImageRelativeFrameForMiniIconAtIndex:(unsigned long long)arg1;
- (unsigned long long)visibleMiniIconCount;
- (unsigned long long)visibleMiniIconListIndex;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

