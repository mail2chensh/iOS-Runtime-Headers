/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSObject<NSLocking>, NSString, TSUFlushingManager;

@interface TSUFlushableObject : NSObject <TSUFlushable> {
    TSUFlushingManager *_flushingManager;
    NSObject<NSLocking> *_flushingManagerIvarLock;
    int _ownerCount;
    int _retainCount;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)dealloc;
- (void)flush;
- (bool)hasFlushableContent;
- (id)init;
- (id)ownerAutoreleasedAccess;
- (void)ownerDidAccess;
- (void)ownerRelease;
- (id)ownerRetain;
- (void)ownerWillAccess;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (void)unload;

@end
