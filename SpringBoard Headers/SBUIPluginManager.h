//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, SBUIPluginHost;

@interface SBUIPluginManager : NSObject
{
    NSMutableDictionary *_uiPlugins;
    SBUIPluginHost *_pendingActivation;
    SBUIPluginHost *_hostPendingActivation;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_loadedUIPluginHostsVisible:(_Bool)arg1;
- (void)cancelPendingActivationEvent:(int)arg1;
- (_Bool)handleActivationEvent:(int)arg1 eventSource:(int)arg2 withContext:(id)arg3;
- (_Bool)handleButtonDownEventFromSource:(int)arg1;
- (_Bool)handleButtonTapFromSource:(int)arg1;
- (_Bool)handleButtonUpEventFromSource:(int)arg1;
@property(retain) SBUIPluginHost *hostPendingActivation; // @synthesize hostPendingActivation=_hostPendingActivation;
- (id)loadUIPluginNamed:(id)arg1 withHost:(id)arg2;
- (id)loadedUIPluginHosts;
- (id)loadedUIPlugins;
- (_Bool)overrideInterfaceOrientation:(long long *)arg1;
- (_Bool)overrideScreenDimInterval:(double *)arg1;
- (void)prepareForActivationEvent:(int)arg1 eventSource:(int)arg2 afterInterval:(double)arg3;
- (_Bool)suppressingNotifications;
- (_Bool)unloadUIPlugin:(id)arg1 forHost:(id)arg2;
- (_Bool)wantsActivationEvent:(int)arg1 eventSource:(int)arg2 interval:(double *)arg3;

@end

