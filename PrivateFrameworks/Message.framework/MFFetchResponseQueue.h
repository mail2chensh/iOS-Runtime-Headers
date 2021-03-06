/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@class MFIMAPConnection, MFLibraryIMAPStore;

@interface MFFetchResponseQueue : MFBufferedQueue {
    MFIMAPConnection *_connection;
    unsigned long long _flags;
    unsigned long long _highestModSequence;
    unsigned long long _newMessageCount;
    unsigned long long _numNewUIDs;
    MFLibraryIMAPStore *_store;
    bool_isSearching;
}

- (bool)addItem:(id)arg1;
- (void)dealloc;
- (bool)handleItems:(id)arg1;
- (id)init;
- (id)insertMessages:(id)arg1;
- (id)messageToSyncFlagsForUID:(unsigned int)arg1;
- (bool)shouldAddUID:(unsigned long long)arg1;

@end
