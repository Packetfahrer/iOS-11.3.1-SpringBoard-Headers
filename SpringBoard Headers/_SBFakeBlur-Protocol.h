//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol _SBFakeBlur <NSObject>
- (long long)effectiveStyle;
@property(nonatomic, getter=isFullscreen) _Bool fullscreen;
@property(nonatomic) __weak id <_SBFakeBlurObserver> observer;
- (void)offsetWallpaperBy:(struct CGPoint)arg1;
- (void)requestStyle:(long long)arg1;
@property(nonatomic) unsigned long long transformOptions;
@property(nonatomic) double zoomScale;
@end

