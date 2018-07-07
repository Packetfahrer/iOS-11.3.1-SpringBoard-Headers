//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBIconIndexMutableListObserver.h"
#import "SBIconIndexNode.h"
#import "SBIconListModelObserver.h"
#import "SBTreeNode.h"

@class NSArray, NSCountedSet, NSHashTable, NSMutableSet, NSString, SBFolderIcon, SBIconIndexMutableList;

@interface SBFolder : NSObject <SBTreeNode, SBIconIndexNode, SBIconIndexMutableListObserver, SBIconListModelObserver>
{
    NSHashTable *_nodeObservers;
    NSHashTable *_folderObservers;
    SBIconIndexMutableList *_lists;
    NSString *_displayName;
    NSString *_defaultDisplayName;
    _Bool _displayNameDirty;
    _Bool _open;
    SBFolderIcon *_icon;
    _Bool _cancelable;
    NSMutableSet *_addedIcons;
    NSMutableSet *_removedIcons;
    NSCountedSet *_coalesceChangesRequests;
    unsigned long long _maxListCount;
    unsigned long long _maxIconCountInLists;
    NSString *_uniqueIdentifier;
    SBFolder *_parentFolder;
}

+ (_Bool)isFolderNodeIdentifier:(id)arg1;
+ (_Bool)isRootFolderClass;
- (void).cxx_destruct;
- (void)_addList:(id)arg1;
- (_Bool)_compactLists;
- (id)_createNewListWithIcon:(id)arg1;
- (_Bool)_isCoalescingContentChanges;
- (id)_listsForCompaction;
- (void)_removeLists:(id)arg1;
- (void)_setLists:(id)arg1;
- (id)addEmptyList;
- (void)addFolderObserver:(id)arg1;
- (id)addIcon:(id)arg1;
- (void)addNodeObserver:(id)arg1;
- (id)allIcons;
- (_Bool)canAddIcon;
- (_Bool)canAddIconCount:(unsigned long long)arg1;
- (_Bool)canAddIconCount:(unsigned long long)arg1 startingAtList:(id)arg2;
- (_Bool)canEditDisplayName;
- (_Bool)canRemoveIcons;
@property(readonly, nonatomic) NSArray *children;
- (void)compactIconsAndLists;
- (_Bool)compactLists;
- (id)containedNodeIdentifiers;
- (_Bool)containsNodeIdentifier:(id)arg1;
- (void)dealloc;
- (id)defaultDisplayName;
@property(readonly, copy) NSString *description;
- (void)didAddFolder:(id)arg1;
- (void)didRemoveFolder:(id)arg1;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void)enumerateAllIconsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateAllIconsWithBaseIndexPath:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateAllIconsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)folderContainingIndexPath:(id)arg1 relativeIndexPath:(id *)arg2;
- (id)folderIcons;
@property(nonatomic) __weak SBFolderIcon *icon; // @synthesize icon=_icon;
- (id)iconAtIndexPath:(id)arg1;
- (void)iconList:(id)arg1 didAddIcon:(id)arg2;
- (void)iconList:(id)arg1 didMoveIcon:(id)arg2;
- (void)iconList:(id)arg1 didRemoveIcon:(id)arg2;
- (void)iconList:(id)arg1 didReplaceIcon:(id)arg2 withIcon:(id)arg3;
- (id)iconsOfClass:(Class)arg1;
- (unsigned long long)indexOfList:(id)arg1;
- (id)indexPathForFirstFreeSlotAvoidingFirstList:(_Bool)arg1;
- (id)indexPathForFirstFreeSlotStartingAtList:(id)arg1 avoidingFirstList:(_Bool)arg2;
- (id)indexPathForFolder:(id)arg1;
- (id)indexPathForIcon:(id)arg1;
- (id)indexPathForIcon:(id)arg1 includingPlaceholders:(_Bool)arg2;
- (id)indexPathForIconPassingTest:(CDUnknownBlockType)arg1;
- (id)indexPathForIconWithIdentifier:(id)arg1;
- (id)indexPathForIconWithIdentifier:(id)arg1 includingPlaceholders:(_Bool)arg2;
- (id)indexPathForIconWithOptions:(unsigned long long)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)indexPathForNodeIdentifier:(id)arg1;
- (id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2;
- (id)indexPathsForIconsPassingTest:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithMaxListCount:(unsigned long long)arg1 maxIconCountInLists:(unsigned long long)arg2;
- (id)insertIcon:(id)arg1 atIndexPath:(id *)arg2;
@property(nonatomic, getter=isCancelable) _Bool cancelable; // @synthesize cancelable=_cancelable;
- (_Bool)isEmpty;
- (_Bool)isFull;
- (_Bool)isIconStateDirty;
@property(nonatomic, getter=isOpen) _Bool open; // @synthesize open=_open;
- (_Bool)isRootFolder;
- (_Bool)isValidPageIndex:(unsigned long long)arg1;
- (id)leafIcons;
- (void)list:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (void)list:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (id)listAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long listCount;
- (void)listDidMoveNodes:(id)arg1;
- (Class)listModelClass;
@property(readonly, copy, nonatomic) NSArray *lists;
- (id)listsContainingIcon:(id)arg1;
- (id)listsContainingLeafIconWithIdentifier:(id)arg1;
- (void)markIconStateClean;
@property(readonly, nonatomic) unsigned long long maxIconCountInLists; // @synthesize maxIconCountInLists=_maxIconCountInLists;
@property(readonly, nonatomic) unsigned long long maxListCount;
- (id)nodeDescriptionWithPrefix:(id)arg1;
- (id)nodeIdentifier;
- (id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned long long)arg2;
- (id)orderedIcons;
@property(readonly, nonatomic) __weak id <SBTreeNode> parent;
@property(nonatomic) __weak SBFolder *parentFolder; // @synthesize parentFolder=_parentFolder;
- (id)performCascadingIconInsertion:(id)arg1 indexPath:(id)arg2;
- (id)performCascadingIconInsertion:(id)arg1 listIndex:(unsigned long long)arg2 iconIndex:(unsigned long long)arg3;
- (id)placeIcon:(id)arg1 atIndexPath:(id *)arg2;
- (void)purgeLists;
- (void)removeEmptyList:(id)arg1;
- (void)removeFolderObserver:(id)arg1;
- (void)removeIconAtIndexPath:(id)arg1;
- (void)removeNodeObserver:(id)arg1;
- (void)setDefaultDisplayName:(id)arg1;
- (_Bool)shouldRemoveWhenEmpty;
- (void)sort;
- (void)startCoalescingContentChangesWithRequestID:(id)arg1;
- (void)stopCoalescingContentChangesForRequestID:(id)arg1;
- (void)stopCoalescingContentChangesForRequestID:(id)arg1 forceReload:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

