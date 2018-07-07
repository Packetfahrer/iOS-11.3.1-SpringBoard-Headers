//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable;

@interface SBReusableViewMap : NSObject
{
    NSMapTable *_recycledViewsByClass;
    _Bool _invalidated;
    id <SBReusableViewMapDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) __weak id <SBReusableViewMapDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)invalidate;
- (id)newViewOfClass:(Class)arg1;
- (void)purgeAllViews;
- (void)purgeViewsForClass:(Class)arg1;
- (void)recycleView:(id)arg1;
- (id)viewOfClass:(Class)arg1;

@end

