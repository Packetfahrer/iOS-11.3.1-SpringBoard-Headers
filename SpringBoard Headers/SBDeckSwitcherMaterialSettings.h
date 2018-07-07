//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MTMaterialSettings.h"

@class MTVibrantStylingProvider, NSString;

@interface SBDeckSwitcherMaterialSettings : NSObject <MTMaterialSettings>
{
}

+ (id)sharedMaterialSettings;
@property(nonatomic) double blurRadius;
@property(nonatomic) double brightness;
@property(nonatomic) double luminanceAlpha;
@property(nonatomic) double saturation;
@property(nonatomic) double tintAlpha;
@property(nonatomic) _Bool usesLuminanceMap;
- (void)updateWithSettingsFromArchive:(id)arg1;
@property(readonly, nonatomic) __weak MTVibrantStylingProvider *vibrantStylingProvider;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

