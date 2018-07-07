//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"

@class BKSDisplayRenderOverlayDescriptor, NSString, NSURL;

@interface SBRestartTransitionRequest : NSObject <BSDescriptionProviding>
{
    NSString *_requester;
    NSString *_reason;
    int _restartType;
    double _delay;
    _Bool _wantsPersistentSnapshot;
    BKSDisplayRenderOverlayDescriptor *_customOverlayDescriptor;
    NSURL *_applicationLaunchURL;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *applicationLaunchURL; // @synthesize applicationLaunchURL=_applicationLaunchURL;
@property(copy, nonatomic) BKSDisplayRenderOverlayDescriptor *customOverlayDescriptor; // @synthesize customOverlayDescriptor=_customOverlayDescriptor;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(readonly, copy) NSString *description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (id)initWithRequester:(id)arg1 reason:(id)arg2;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(copy, nonatomic) NSString *requester; // @synthesize requester=_requester;
@property(nonatomic) int restartType; // @synthesize restartType=_restartType;
@property(nonatomic) _Bool wantsPersistentSnapshot; // @synthesize wantsPersistentSnapshot=_wantsPersistentSnapshot;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

