//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, SBAppSwitcherSnapshotImageCache;

@interface SBFluidSwitcherPageContentViewProvider : NSObject
{
    id <SBFluidSwitcherPageContentViewProviderDelegate> _delegate;
    SBAppSwitcherSnapshotImageCache *_snapshotCache;
    NSMutableDictionary *_switcherServiceViewControllerMap;
}

- (void).cxx_destruct;
- (id)_containerViewController;
- (long long)_interfaceOrientation;
- (struct CGSize)_pageViewSizeForAppLayout:(id)arg1;
- (id)_snapshotViewForAppLayout:(id)arg1 setActive:(_Bool)arg2;
- (id)_viewForRemoteAlert:(id)arg1 appLayout:(id)arg2;
- (id)_viewForService:(id)arg1 appLayout:(id)arg2;
@property(nonatomic) __weak id <SBFluidSwitcherPageContentViewProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (id)initWithDelegate:(id)arg1 snapshotCache:(id)arg2;
- (_Bool)isSuitableForRecycledItemContainer:(id)arg1;
- (id)pageContentViewForAppLayout:(id)arg1 setActive:(_Bool)arg2;
- (void)purgePageContentViewForAppLayout:(id)arg1;

@end

