//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface _SBLoadApplicationResult : NSObject
{
    _Bool _success;
    _Bool _update;
    NSString *_errorDescription;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
@property(nonatomic, getter=isSuccess) _Bool success; // @synthesize success=_success;
@property(nonatomic, getter=isUpdate) _Bool update; // @synthesize update=_update;

@end

