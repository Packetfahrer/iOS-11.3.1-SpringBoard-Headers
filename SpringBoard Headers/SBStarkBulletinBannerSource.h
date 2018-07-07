//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBStarkBannerSource.h"

#import "BBObserverDelegate.h"
#import "SBVolumePressBandit.h"

@class NSString;

@interface SBStarkBulletinBannerSource : SBStarkBannerSource <SBVolumePressBandit, BBObserverDelegate>
{
    _Bool _quietModeEnabled;
}

- (void)_showTestBanner:(id)arg1;
- (void)dealloc;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3;
- (void)observer:(id)arg1 modifyBulletin:(id)arg2;
- (void)observer:(id)arg1 noteAlertBehaviorOverridesChanged:(unsigned long long)arg2;
- (void)observer:(id)arg1 noteServerReceivedResponseForBulletin:(id)arg2;
- (void)observer:(id)arg1 removeBulletin:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

