//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LSOpenResourceOperationDelegate.h"
#import "SBIconListViewDraggingPolicyHandling.h"

@class NSMapTable, NSString;

@interface SBIconListViewDraggingDataPolicyHandler : NSObject <LSOpenResourceOperationDelegate, SBIconListViewDraggingPolicyHandling>
{
    NSMapTable *_sourceURLsByOperationMapTable;
}

- (void).cxx_destruct;
- (id)_bestSupportedUTIForDragItem:(id)arg1 supportedTypes:(id)arg2;
- (id)_currentDraggingIconViewInView:(id)arg1 forLocation:(struct CGPoint)arg2;
- (void)_removeAnySourceURLForOperation:(id)arg1;
- (_Bool)allowsSpringLoadOnIconView:(id)arg1;
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)handleSpringLoadOnIconView:(id)arg1;
- (id)init;
- (void)openResourceOperation:(id)arg1 didFailWithError:(id)arg2;
- (void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

