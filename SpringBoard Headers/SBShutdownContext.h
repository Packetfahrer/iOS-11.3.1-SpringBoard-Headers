//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SBShutdownContext : NSObject <NSCopying>
{
    NSString *_reason;
    _Bool _fromUserPowerDown;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(nonatomic) _Bool fromUserPowerDown; // @synthesize fromUserPowerDown=_fromUserPowerDown;
- (id)initWithReason:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;

@end

