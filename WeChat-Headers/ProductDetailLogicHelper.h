//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "IMsgExt.h"
#import "LocationRetrieveDelegate.h"
#import "PBMessageObserverDelegate.h"

@class LocationRetriever, NSString, ScanProductItem;

@interface ProductDetailLogicHelper : MMObject <LocationRetrieveDelegate, PBMessageObserverDelegate, IMsgExt>
{
    LocationRetriever *m_locationRetriver;
    ScanProductItem *m_productItem;
    unsigned long long lastMsgSvrId;
    id <ProductDetailLogicHelperDelegate> _delegate;
}

@property(nonatomic) __weak id <ProductDetailLogicHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)sendGetActionInfoRequest:(id)arg1;
- (void)startAsyncGetActionInfo;
- (void)dealloc;
- (id)initWithProductItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

