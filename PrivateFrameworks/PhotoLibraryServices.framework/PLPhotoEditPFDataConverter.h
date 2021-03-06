/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSString;

@interface PLPhotoEditPFDataConverter : NSObject <PLPhotoEditDataImporter, PLPhotoEditDataExporter> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (id)_filtersForLegacyAutoEnhanceSettingsDictionary:(id)arg1;
+ (id)_knownFormatVersions;
+ (id)_settingsDictionaryForLegacyAutoEnhanceFilters:(id)arg1;
+ (long long)_supportLevelForSettings:(id)arg1 knownKeys:(id)arg2;
+ (id)_supportedAdjustments;
+ (bool)canInterpretDataWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2;
+ (id)dataFromPhotoEditModel:(id)arg1 imageWidth:(unsigned long long)arg2 imageHeight:(unsigned long long)arg3 exifOrientation:(int)arg4;
+ (id)debugDescriptionForPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3;
+ (id)formatIdentifier;
+ (id)formatVersion;
+ (bool)loadPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 intoModel:(id)arg4 baseOrientation:(long long)arg5;

@end
