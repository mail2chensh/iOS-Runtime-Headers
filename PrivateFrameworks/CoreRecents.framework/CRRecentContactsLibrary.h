/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents
 */

@class NSObject<OS_dispatch_queue>, NSXPCConnection;

@interface CRRecentContactsLibrary : NSObject {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_replyQueue;
}

+ (struct NSObject { Class x1; }*)_recentEventForGroupMembers:(id)arg1 displayName:(id)arg2 date:(id)arg3 weight:(id)arg4 metadata:(id)arg5 options:(unsigned long long)arg6;
+ (id)defaultInstance;
+ (struct NSObject { Class x1; }*)explicitGroupEventForGroupMembers:(id)arg1 displayName:(id)arg2 date:(id)arg3 metadata:(id)arg4 options:(unsigned long long)arg5;
+ (id)frecencyComparator;
+ (id)frecencyComparatorForSearch:(id)arg1 preferredKinds:(id)arg2 sendingAddress:(id)arg3 queryOptions:(unsigned long long)arg4;
+ (id)frecencyComparatorForSearch:(id)arg1 preferredKinds:(id)arg2 sendingAddress:(id)arg3;
+ (struct NSObject { Class x1; }*)groupMemberWithAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3;
+ (id)rankedFrecencyComparatorWithPreferredSources:(id)arg1;
+ (id)recentEventForAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3 date:(id)arg4 metadata:(id)arg5;
+ (struct NSObject { Class x1; }*)recentEventForAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3 date:(id)arg4 weight:(id)arg5 metadata:(id)arg6 options:(unsigned long long)arg7;
+ (struct NSObject { Class x1; }*)recentEventForAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3 date:(id)arg4 weight:(id)arg5 metadata:(id)arg6;
+ (struct NSObject { Class x1; }*)recentEventForAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3 date:(id)arg4;

- (int)_daemonProcessID;
- (id)_newConnection;
- (id)_remoteLibraryWithErrorHandler:(id)arg1;
- (bool)_removeRecentContactsWithRecentIDs:(id)arg1 syncKeys:(id)arg2 recentsDomain:(id)arg3 error:(out id*)arg4;
- (void)_searchRecentsUsingQuery:(id)arg1 synchronously:(bool)arg2 completion:(id)arg3;
- (id)copyOrderedRecentsForSearchText:(id)arg1 recentsDomain:(id)arg2 sendingAddress:(id)arg3 kinds:(id)arg4;
- (id)copyRecentsForDomain:(id)arg1;
- (void)dealloc;
- (id)init;
- (unsigned long long)maxDateEventsPerRecentContact;
- (void)performRecentsSearch:(id)arg1 queue:(id)arg2 completion:(id)arg3;
- (void)recordContactEvents:(id)arg1 recentsDomain:(id)arg2 sendingAddress:(id)arg3 source:(id)arg4 userInitiated:(bool)arg5;
- (void)recordContactEvents:(id)arg1 recentsDomain:(id)arg2 sendingAddress:(id)arg3 userInitiated:(bool)arg4;
- (void)recordContactEvents:(id)arg1 recentsDomain:(id)arg2 sendingAddress:(id)arg3;
- (void)recordContactEventsForHeaders:(id)arg1 recentsDomain:(id)arg2;
- (bool)removeRecentContacts:(id)arg1 error:(out id*)arg2;
- (void)requestRecentsUsingPredicate:(id)arg1 inDomains:(id)arg2 comparator:(id)arg3 queue:(id)arg4 completion:(id)arg5;
- (void)setImplicitGroupThreshold:(unsigned long long)arg1 forDomain:(id)arg2;
- (void)start;

@end
