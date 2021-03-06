//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBApplicationSceneEntity.h"

@class SBDeviceApplicationSceneHandle;

@interface SBDeviceApplicationSceneEntity : SBApplicationSceneEntity
{
}

- (long long)_mainDisplayPreferredInterfaceOrientation;
- (void)_setMainDisplayPreferredInterfaceOrientation:(long long)arg1;
- (_Bool)_supportsLayoutRole:(long long)arg1;
- (id)deviceApplicationSceneEntity;
- (id)initWithApplication:(id)arg1 sceneHandleProvider:(id)arg2;
- (id)initWithApplicationForMainDisplay:(id)arg1;
- (id)initWithApplicationForMainSecureDisplay:(id)arg1;
- (id)initWithApplicationSceneHandle:(id)arg1;
- (_Bool)isDeviceApplicationSceneEntity;
- (_Bool)supportsPresentationAtAnySize;
- (Class)viewControllerClass;
- (_Bool)wantsExclusiveForeground;

// Remaining properties
@property(readonly, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle; // @dynamic sceneHandle;

@end

