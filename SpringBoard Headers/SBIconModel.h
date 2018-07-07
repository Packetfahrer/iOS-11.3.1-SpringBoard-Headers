//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSOrderedSet, NSSet, SBRootFolder;

@interface SBIconModel : NSObject
{
    NSDictionary *_desiredIconState;
    NSOrderedSet *_desiredIconStateFlattened;
    NSMutableDictionary *_leafIconsByIdentifier;
    NSMutableDictionary *_leafIdentifiersForMasqueradeIdentifier;
    NSSet *_hiddenIconTags;
    NSSet *_visibleIconTags;
    _Bool _tagsHaveBeenSet;
    SBRootFolder *_rootFolder;
    id <SBIconModelStore> _store;
    id <SBIconModelApplicationDataSource> _applicationDataSource;
    id <SBIconModelDelegate> _delegate;
    _Bool _allowsSaving;
    _Bool _ignoresIconsNotInIconState;
    _Bool _sortsIconsAlphabetically;
    NSSet *_archivedLeafIdentifiers;
}

- (void).cxx_destruct;
- (id)_applicationIcons;
- (_Bool)_canAddDownloadingIconForBundleID:(id)arg1;
- (id)_iconState;
- (id)_indexPathInRootFolder:(id)arg1 forNewIcon:(id)arg2 isDesignatedLocation:(_Bool *)arg3 replaceExistingIconAtIndexPath:(id *)arg4;
- (void)_noteApplicationIconImageChanged:(id)arg1;
- (void)_replaceAppIconsWithDownloadingIcons;
- (void)_replaceAppIconsWithDownloadingIcons:(id)arg1;
- (void)_saveDesiredIconState;
- (void)_saveIconState;
- (id)_unarchiveRootFolder;
- (id)addBookmarkIconForWebClip:(id)arg1;
- (id)addDownloadingIconForBundleID:(id)arg1 withIdentifier:(id)arg2;
- (id)addDownloadingIconForDownload:(id)arg1;
- (void)addIcon:(id)arg1;
- (void)addIconForApplication:(id)arg1;
@property(nonatomic) _Bool allowsSaving; // @synthesize allowsSaving=_allowsSaving;
@property(readonly, nonatomic) id <SBIconModelApplicationDataSource> applicationDataSource; // @synthesize applicationDataSource=_applicationDataSource;
- (id)applicationIconForBundleIdentifier:(id)arg1;
- (id)applicationWithBundleIdentifier:(id)arg1;
@property(copy, nonatomic) NSSet *archivedLeafIdentifiers; // @synthesize archivedLeafIdentifiers=_archivedLeafIdentifiers;
- (id)bookmarkIconForWebClipIdentifier:(id)arg1;
- (void)checkModelConsistency;
- (void)checkModelConsistencyInRootFolder:(id)arg1;
- (void)clearDesiredIconState;
- (void)clearDesiredIconStateIfPossible;
- (id)currentLeafIdentifiers;
- (void)dealloc;
@property(nonatomic) __weak id <SBIconModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deleteIconState;
- (id)description;
- (void)didUnarchiveMetadata:(id)arg1;
- (id)downloadingIconForBundleIdentifier:(id)arg1;
- (id)expectedIconForDisplayIdentifier:(id)arg1;
- (id)exportFlattenedState:(_Bool)arg1 includeMissingIcons:(_Bool)arg2;
- (id)exportPendingState:(_Bool)arg1 includeMissingIcons:(_Bool)arg2;
- (id)exportState:(_Bool)arg1;
- (id)forecastedLayoutForIconState:(id)arg1 includeMissingIcons:(_Bool)arg2;
- (_Bool)hasDesiredIconState;
- (id)iconModelMetadata;
- (id)iconState;
- (id)iconsOfClass:(Class)arg1;
@property(nonatomic) _Bool ignoresIconsNotInIconState; // @synthesize ignoresIconsNotInIconState=_ignoresIconsNotInIconState;
- (void)importDesiredIconState:(id)arg1;
- (_Bool)importState:(id)arg1;
- (id)indexPathForIconInPlatformState:(id)arg1;
- (id)indexPathForNewIcon:(id)arg1 isDesignatedLocation:(_Bool *)arg2 replaceExistingIconAtIndexPath:(id *)arg3;
- (id)initWithStore:(id)arg1 applicationDataSource:(id)arg2;
- (_Bool)isIconVisible:(id)arg1;
- (_Bool)isMasqueradedLeafIdentifier:(id)arg1;
- (void)layout;
- (id)leafIconForIdentifier:(id)arg1;
- (id)leafIcons;
@property(retain, nonatomic) NSDictionary *leafIconsByIdentifier; // @synthesize leafIconsByIdentifier=_leafIconsByIdentifier;
- (id)leafIconsWithIdentifiers:(id)arg1;
@property(retain, nonatomic) NSDictionary *leafIdentifiersForMasqueradeIdentifier; // @synthesize leafIdentifiersForMasqueradeIdentifier=_leafIdentifiersForMasqueradeIdentifier;
- (void)loadAllIcons;
- (void)localeChanged;
@property(readonly, copy, nonatomic) NSSet *missingDesiredIconIdentifiers;
- (id)placeholdersByDisplayID;
- (id)prioritizedMasqueradeIconForIdentifier:(id)arg1;
- (void)removeIcon:(id)arg1;
- (void)removeIconForIdentifier:(id)arg1;
- (id)rootFolder;
- (void)saveIconStateIfNeeded;
@property(nonatomic) _Bool sortsIconsAlphabetically; // @synthesize sortsIconsAlphabetically=_sortsIconsAlphabetically;
- (void)setVisibilityOfIconsWithVisibleTags:(id)arg1 hiddenTags:(id)arg2;
@property(readonly, nonatomic) id <SBIconModelStore> store; // @synthesize store=_store;
- (id)visibleIconIdentifiers;

@end

