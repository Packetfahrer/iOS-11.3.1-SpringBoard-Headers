//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFastEnumeration.h"
#import "SBIconIndexNode.h"
#import "SBTreeNode.h"

@class NSArray, NSHashTable, NSString, SBFolder, SBIconIndexMutableList;

@interface SBIconListModel : NSObject <SBTreeNode, SBIconIndexNode, NSFastEnumeration>
{
    SBIconIndexMutableList *_icons;
    unsigned long long _maxIconCount;
    NSHashTable *_nodeObservers;
    NSHashTable *_listObservers;
    _Bool _iconStateIsDirty;
    SBFolder *_folder;
}

- (void).cxx_destruct;
- (id)_iconAtIndex:(unsigned long long)arg1;
- (void)_notifyListObservers:(CDUnknownBlockType)arg1;
- (_Bool)addIcon:(id)arg1;
- (_Bool)addIcon:(id)arg1 asDirty:(_Bool)arg2;
- (void)addListObserver:(id)arg1;
- (void)addNodeObserver:(id)arg1;
- (_Bool)allowsAddingIcon:(id)arg1;
- (_Bool)allowsAddingIconCount:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *children;
- (unsigned long long)compactIcons;
- (id)containedNodeIdentifiers;
- (_Bool)containsNodeIdentifier:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)directlyContainedIconPassingTest:(CDUnknownBlockType)arg1;
- (id)directlyContainedIconWithIdentifier:(id)arg1;
- (_Bool)directlyContainsIcon:(id)arg1;
- (_Bool)directlyContainsIconWithIdentifier:(id)arg1;
- (_Bool)directlyContainsLeafIconWithIdentifier:(id)arg1;
- (void)enumerateFolderIconsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateIconsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)firstFreeSlotIndex;
@property(readonly, nonatomic) __weak SBFolder *folder; // @synthesize folder=_folder;
- (id)iconAtIndex:(unsigned long long)arg1;
- (id)icons;
- (id)iconsOfClass:(Class)arg1;
- (unsigned long long)indexForIcon:(id)arg1;
- (id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2;
- (id)init;
- (id)initWithFolder:(id)arg1 maxIconCount:(unsigned long long)arg2;
- (id)insertIcon:(id)arg1 atIndex:(unsigned long long *)arg2;
- (_Bool)isEmpty;
- (_Bool)isFull;
- (_Bool)isIconStateDirty;
- (void)list:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (void)list:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (void)listDidMoveNodes:(id)arg1;
- (void)markIconStateClean;
@property(readonly, nonatomic) unsigned long long maxNumberOfIcons;
- (void)moveContainedIcon:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)moveContainedIcons:(id)arg1 toContiguousIndicesStartingAt:(unsigned long long)arg2;
- (_Bool)needsCompacting;
- (id)nodeDescriptionWithPrefix:(id)arg1;
- (id)nodeIdentifier;
- (id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long numberOfIcons;
@property(readonly, nonatomic) unsigned long long numberOfNonPlaceholderIcons;
@property(readonly, nonatomic) __weak id <SBTreeNode> parent;
- (id)placeIcon:(id)arg1 atIndex:(unsigned long long *)arg2;
- (void)removeIcon:(id)arg1;
- (void)removeIconAtIndex:(unsigned long long)arg1;
- (void)removeListObserver:(id)arg1;
- (void)removeNodeObserver:(id)arg1;
- (void)sortUsingSelector:(SEL)arg1;
- (void)warmUpIconImagesForLocation:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

