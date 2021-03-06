/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class CPLPlatformObject, NSString;

@interface CPLEngineClientCache : CPLEngineStorage <CPLAbstractObject> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) CPLPlatformObject * platformObject;
@property(readonly) Class superclass;

- (id)_relatedIdentifierForRecordWithIdentifier:(id)arg1;
- (bool)addRecord:(id)arg1 error:(id*)arg2;
- (bool)applyBatch:(id)arg1 withError:(id*)arg2;
- (id)compactedBatchFromExpandedBatch:(id)arg1;
- (bool)deleteRecordWithIdentifier:(id)arg1 error:(id*)arg2;
- (bool)hasRecordWithIdentifier:(id)arg1;
- (id)localChangeBatchFromCloudBatch:(id)arg1 usingMapping:(id)arg2 withError:(id*)arg3;
- (id)recordWithIdentifier:(id)arg1;
- (id)recordsWithRelatedIdentifier:(id)arg1;
- (id)relatedIdentifierForRecordWithIdentifier:(id)arg1;
- (bool)resetWithError:(id*)arg1;
- (id)resourceOfType:(unsigned long long)arg1 forRecordWithIdentifier:(id)arg2 error:(id*)arg3;
- (bool)updateRecord:(id)arg1 error:(id*)arg2;

@end
