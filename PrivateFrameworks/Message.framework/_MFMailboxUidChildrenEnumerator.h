/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableArray;

@interface _MFMailboxUidChildrenEnumerator : NSEnumerator {
    unsigned long long _index;
    NSMutableArray *_mailboxes;
    bool_includeHidden;
}

- (id)_initWithMailbox:(id)arg1 includeHiddenChildren:(bool)arg2;
- (void)dealloc;
- (id)nextObject;

@end
