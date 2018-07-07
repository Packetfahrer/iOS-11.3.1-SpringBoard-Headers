//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBScaleIconZoomAnimator.h"

@class SBFloatyFolderView, SBFolderController, SBFolderIcon, SBFolderIconView, SBFolderZoomSettings, SBIconView, _SBInnerFolderIconZoomAnimator;

@interface SBFolderIconZoomAnimator : SBScaleIconZoomAnimator
{
    SBFolderController *_innerFolderController;
    SBFloatyFolderView *_innerFolderView;
    _SBInnerFolderIconZoomAnimator *_innerZoomAnimator;
    SBIconView *_targetFolderIconView;
}

- (void).cxx_destruct;
- (void)_cleanupAnimation;
- (_Bool)_forceSquareZoomDimension;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_performAnimationToFraction:(double)arg1 withCentralAnimationSettings:(id)arg2 delay:(double)arg3 alreadyAnimating:(_Bool)arg4 sharedCompletion:(CDUnknownBlockType)arg5;
- (void)_prepareAnimation;
- (id)_referenceFolderIconView;
- (void)_setAnimationFraction:(double)arg1;
- (id)_targetIconViewForFolderIcon:(id)arg1;
- (struct CGRect)_zoomedFrame;
- (id)defaultTargetIconContainerView;
- (id)initWithAnimationContainer:(id)arg1 innerFolderController:(id)arg2 folderIcon:(id)arg3;
@property(readonly, nonatomic) SBFolderIconView *targetIconView; // @dynamic targetIconView;

// Remaining properties
@property(retain, nonatomic) SBFolderZoomSettings *settings; // @dynamic settings;
@property(readonly, nonatomic) SBFolderIcon *targetIcon; // @dynamic targetIcon;

@end

