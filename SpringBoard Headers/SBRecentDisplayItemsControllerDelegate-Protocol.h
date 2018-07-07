//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBDisplayItem, SBRecentDisplayItemsController;

@protocol SBRecentDisplayItemsControllerDelegate <NSObject>

@optional
- (void)recentDisplayItemsController:(SBRecentDisplayItemsController *)arg1 didAddItem:(SBDisplayItem *)arg2;
- (void)recentDisplayItemsController:(SBRecentDisplayItemsController *)arg1 didAddItem:(SBDisplayItem *)arg2 andDropItem:(SBDisplayItem *)arg3;
- (void)recentDisplayItemsController:(SBRecentDisplayItemsController *)arg1 didMoveItemToFront:(SBDisplayItem *)arg2;
- (void)recentDisplayItemsController:(SBRecentDisplayItemsController *)arg1 didRemoveItem:(SBDisplayItem *)arg2;
- (_Bool)recentDisplayItemsController:(SBRecentDisplayItemsController *)arg1 shouldAddItem:(SBDisplayItem *)arg2;
- (void)recentDisplayItemsControllerDidUpdateDisplayItems:(SBRecentDisplayItemsController *)arg1;
@end

