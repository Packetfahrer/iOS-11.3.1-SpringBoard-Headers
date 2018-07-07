//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBLogoutProgressDataSource.h"
#import "SBTestRecipe.h"

@class NSArray, NSDictionary, NSMutableArray, NSString, SBLogoutProgressAlertViewController;

@interface SBLogoutProgressTestRecipe : NSObject <SBLogoutProgressDataSource, SBTestRecipe>
{
    NSMutableArray *_tasks;
    SBLogoutProgressAlertViewController *_logoutProgressAlert;
    NSArray *_remainingApplications;
    NSDictionary *_remainingBlockingTasks;
}

+ (id)title;
- (void).cxx_destruct;
- (id)_defaultBlockingTasks;
- (id)_defaultPendingApplications;
- (id)debugBlockingTasksForLogoutProgressAlertViewController:(id)arg1;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
@property(retain, nonatomic) SBLogoutProgressAlertViewController *logoutProgressAlert; // @synthesize logoutProgressAlert=_logoutProgressAlert;
- (id)pendingApplicationsForLogoutProgressAlertViewController:(id)arg1;
@property(copy, nonatomic) NSArray *remainingApplications; // @synthesize remainingApplications=_remainingApplications;
@property(retain, nonatomic) NSDictionary *remainingBlockingTasks; // @synthesize remainingBlockingTasks=_remainingBlockingTasks;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

