//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBLeafIcon.h"

#import "SBLeafIconDataSource.h"

@class NSString;

@interface SBSpringBoardApplicationIcon : SBLeafIcon <SBLeafIconDataSource>
{
}

- (id)_generateImageWithFormat:(int)arg1;
- (id)icon:(id)arg1 defaultImageWithFormat:(int)arg2;
- (id)icon:(id)arg1 imageWithFormat:(int)arg2;
- (_Bool)icon:(id)arg1 launchFromLocation:(long long)arg2 context:(id)arg3 activationSettings:(id)arg4 actions:(id)arg5;
- (int)iconAccessoryType:(id)arg1;
- (_Bool)iconAllowsLaunch:(id)arg1;
- (id)iconBadgeNumberOrString:(id)arg1;
- (_Bool)iconCanEllipsizeLabel:(id)arg1;
- (_Bool)iconCanTightenLabel:(id)arg1;
- (_Bool)iconCompleteUninstall:(id)arg1;
- (id)iconDisplayName:(id)arg1 forLocation:(long long)arg2;
- (id)iconFormattedAccessoryString:(id)arg1;
- (long long)iconLabelAccessoryType:(id)arg1;
- (unsigned long long)iconPriority:(id)arg1;
- (_Bool)iconProgressIsPaused:(id)arg1;
- (double)iconProgressPercent:(id)arg1;
- (long long)iconProgressState:(id)arg1;
- (_Bool)iconSupportsUninstall:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

