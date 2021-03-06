/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@class NSData, NSDate, NSDictionary, NSString;

@interface WebBookmark : NSObject {
    NSString *_UUID;
    int _archiveStatus;
    NSDictionary *_extraAttributes;
    NSData *_iconData;
    unsigned int _id;
    NSDictionary *_localAttributes;
    unsigned int _orderIndex;
    unsigned int _parentID;
    NSString *_serverID;
    unsigned int _specialID;
    NSData *_syncData;
    NSString *_syncKey;
    NSString *_title;
    NSString *_url;
    int _webFilterStatus;
    bool_deletable;
    bool_editable;
    bool_fetchedIconData;
    bool_folder;
    bool_hidden;
    bool_inserted;
    bool_locallyAdded;
    bool_needsSyncUpdate;
    bool_syncable;
}

@property(readonly) NSString * UUID;
@property(retain) NSString * address;
@property int archiveStatus;
@property(retain) NSDate * dateAdded;
@property(retain) NSDate * dateLastArchived;
@property(retain) NSDate * dateLastFetched;
@property(retain) NSDate * dateLastViewed;
@property(getter=isDeletable,readonly) bool deletable;
@property(getter=isEditable,readonly) bool editable;
@property(retain) NSDictionary * extraAttributes;
@property bool fetchedIconData;
@property(getter=isFolder,readonly) bool folder;
@property(getter=isHidden,readonly) bool hidden;
@property(retain) NSData * iconData;
@property(readonly) unsigned int identifier;
@property(getter=isInserted,readonly) bool inserted;
@property(retain) NSDictionary * localAttributes;
@property(retain) NSString * localPreviewText;
@property bool locallyAdded;
@property bool needsSyncUpdate;
@property(retain) NSDictionary * nextPageURLs;
@property(readonly) unsigned int parentID;
@property(retain) NSString * previewText;
@property(retain) NSString * serverID;
@property(retain) NSString * siteName;
@property(retain) NSString * sourceBundleID;
@property(retain) NSString * sourceLocalizedAppName;
@property(readonly) unsigned int specialID;
@property(retain) NSData * syncData;
@property(retain) NSString * syncKey;
@property(getter=isSyncable,readonly) bool syncable;
@property(retain) NSString * title;
@property int webFilterStatus;

+ (id)_trimmedPreviewText:(id)arg1;
+ (id)_trimmedTitle:(id)arg1;

- (id)UUID;
- (id)_initWithSqliteRow:(struct sqlite3_stmt { }*)arg1 hasIcon:(bool)arg2;
- (id)_initWithSqliteRow:(struct sqlite3_stmt { }*)arg1;
- (void)_markSpecial:(unsigned int)arg1;
- (void)_modifyExtraReadingListAttributes:(id)arg1;
- (void)_modifyLocalReadingListAttributes:(id)arg1;
- (unsigned int)_orderIndex;
- (id)_readingListPropertyNamed:(id)arg1;
- (void)_removeDirectoryAtPath:(id)arg1;
- (void)_setHidden:(bool)arg1;
- (void)_setID:(unsigned int)arg1;
- (void)_setInserted:(bool)arg1;
- (void)_setOrderIndex:(unsigned int)arg1;
- (void)_setParentID:(unsigned int)arg1;
- (void)_setSyncable:(bool)arg1;
- (void)_setUUID:(id)arg1;
- (unsigned long long)_sizeForFileOrDirectory:(id)arg1 withAttributes:(id)arg2;
- (id)_suggestedFileNameForWebView:(id)arg1;
- (id)address;
- (unsigned long long)archiveSize;
- (int)archiveStatus;
- (void)cleanupRedundantPreviewText;
- (void)clearArchive;
- (void)clearArchiveSynchronously;
- (id)dateAdded;
- (id)dateLastArchived;
- (id)dateLastFetched;
- (id)dateLastViewed;
- (void)dealloc;
- (id)description;
- (id)extraAttributes;
- (bool)fetchedIconData;
- (bool)fullArchiveAvailable;
- (unsigned long long)hash;
- (id)iconData;
- (unsigned int)identifier;
- (id)init;
- (id)initBuiltinDeviceBookmarkWithTitle:(id)arg1 address:(id)arg2;
- (id)initCarrierBookmarkWithTitle:(id)arg1 address:(id)arg2;
- (id)initFolderWithParentID:(unsigned int)arg1;
- (id)initReadingListBookmarkWithTitle:(id)arg1 address:(id)arg2 previewText:(id)arg3;
- (id)initWhiteListBookmarkWithTitle:(id)arg1 address:(id)arg2;
- (id)initWithTitle:(id)arg1 address:(id)arg2;
- (bool)isBookmarksBarFolder;
- (bool)isBookmarksMenuFolder;
- (bool)isDeletable;
- (bool)isEditable;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToBookmark:(id)arg1;
- (bool)isFolder;
- (bool)isFrequentlyVisitedSitesFolder;
- (bool)isHidden;
- (bool)isInserted;
- (bool)isReadingListFolder;
- (bool)isReadingListItem;
- (bool)isSyncable;
- (bool)isWebFilterWhiteListFolder;
- (id)localAttributes;
- (id)localPreviewText;
- (id)localizedTitle;
- (bool)locallyAdded;
- (bool)needsSyncUpdate;
- (id)nextPageURLs;
- (unsigned int)parentID;
- (id)previewText;
- (id)serverID;
- (void)setAddress:(id)arg1;
- (void)setArchiveStatus:(int)arg1;
- (void)setDateAdded:(id)arg1;
- (void)setDateLastArchived:(id)arg1;
- (void)setDateLastFetched:(id)arg1;
- (void)setDateLastViewed:(id)arg1;
- (void)setExtraAttributes:(id)arg1;
- (void)setFetchedIconData:(bool)arg1;
- (void)setIconData:(id)arg1;
- (void)setLocalAttributes:(id)arg1;
- (void)setLocalPreviewText:(id)arg1;
- (void)setLocallyAdded:(bool)arg1;
- (void)setNeedsSyncUpdate:(bool)arg1;
- (void)setNextPageURLs:(id)arg1;
- (void)setPreviewText:(id)arg1;
- (void)setServerID:(id)arg1;
- (void)setSiteName:(id)arg1;
- (void)setSourceBundleID:(id)arg1;
- (void)setSourceLocalizedAppName:(id)arg1;
- (void)setSyncData:(id)arg1;
- (void)setSyncKey:(id)arg1;
- (void)setTitle:(id)arg1 previewText:(id)arg2 dateLastFetched:(id)arg3;
- (void)setTitle:(id)arg1;
- (void)setWebFilterStatus:(int)arg1;
- (id)shortTypeDescription;
- (bool)shouldReattemptArchive;
- (id)siteName;
- (id)sourceBundleID;
- (id)sourceLocalizedAppName;
- (unsigned int)specialID;
- (id)syncData;
- (id)syncKey;
- (id)title;
- (int)webFilterStatus;
- (id)webarchivePathForNextPageURL:(id)arg1;
- (id)webarchivePathInReaderForm:(bool)arg1 fileExists:(bool*)arg2;
- (bool)writeOfflineWebView:(id)arg1 asArchive:(bool)arg2 inReaderForm:(bool)arg3;

@end
