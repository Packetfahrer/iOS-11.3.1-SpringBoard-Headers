//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBLeafIcon.h"

@class NSURL, SBBookmark, UIWebClip;

@interface SBBookmarkIcon : SBLeafIcon
{
    SBBookmark *_bookmark;
}

- (void).cxx_destruct;
- (id)applicationToLaunch;
@property(readonly, nonatomic) SBBookmark *bookmark; // @synthesize bookmark=_bookmark;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)folderFallbackTitle;
- (id)folderTitleOptions;
- (id)initWithBookmark:(id)arg1;
- (_Bool)isBookmarkIcon;
@property(readonly, nonatomic) NSURL *launchURL;
- (id)matchedWebApplication;
@property(readonly, nonatomic) UIWebClip *webClip;

@end

