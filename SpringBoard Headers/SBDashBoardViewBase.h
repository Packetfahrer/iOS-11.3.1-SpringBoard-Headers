//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBFTouchPassThroughView.h"

#import "SBDashBoardPresentationProviding.h"

@class NSArray, NSString;

@interface SBDashBoardViewBase : SBFTouchPassThroughView <SBDashBoardPresentationProviding>
{
}

- (_Bool)isDashBoardView;
@property(readonly, nonatomic) __weak id <UICoordinateSpace> presentationCoordinateSpace;
@property(readonly, copy, nonatomic) NSArray *presentationRegions;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

