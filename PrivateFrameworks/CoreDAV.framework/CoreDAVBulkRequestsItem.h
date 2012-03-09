/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class CoreDAVLeafItem, NSMutableSet, NSDictionary, NSSet;

@interface CoreDAVBulkRequestsItem : CoreDAVItem  {
    CoreDAVLeafItem *_maxResourcesItem;
    CoreDAVLeafItem *_maxSizeItem;
    NSMutableSet *_supportedItems;
}

@property(readonly) NSDictionary * dictRepresentation;
@property(retain) CoreDAVLeafItem * maxResourcesItem;
@property(retain) CoreDAVLeafItem * maxSizeItem;
@property(readonly) NSSet * supportedItems;
@property(readonly) int maxResources;
@property(readonly) int maxSize;
@property(readonly) BOOL supportsInsert;
@property(readonly) BOOL supportsUpdate;
@property(readonly) BOOL supportsDelete;


- (id)description;
- (id)init;
- (void)dealloc;
- (id)supportedItems;
- (id)maxSizeItem;
- (id)maxResourcesItem;
- (BOOL)supportsItemWithNameSpace:(id)arg1 name:(id)arg2;
- (BOOL)supportsDelete;
- (BOOL)supportsUpdate;
- (BOOL)supportsInsert;
- (int)maxResources;
- (void)addSupportedItem:(id)arg1;
- (void)setMaxSizeItem:(id)arg1;
- (void)setMaxResourcesItem:(id)arg1;
- (id)copyParseRules;
- (id)dictRepresentation;
- (int)maxSize;

@end