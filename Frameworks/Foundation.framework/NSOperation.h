/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSOperation : NSObject 
{
    id _private;
    void *_reserved;
}

@property NSUInteger tag;

+ (void)initialize;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (double)threadPriority;
- (void)setThreadPriority:(double)arg1;
- (void)setCompletionBlock:(id)arg1;
- (BOOL)isReady;
- (void)start;
- (void)main;
- (void)finalize;
- (void)cancel;
- (id)init;
- (id)retain;
- (void)release;
- (void)dealloc;
- (NSUInteger)retainCount;
- (BOOL)isCancelled;
- (BOOL)isConcurrent;
- (BOOL)isAsynchronous;
- (void)setQueuePriority:(NSInteger)arg1;
- (void)waitUntilFinishedOrTimeout:(double)arg1;
- (void)addDependency:(id)arg1;
- (void)removeDependency:(id)arg1;
- (id)completionBlock;
- (NSInteger)queuePriority;
- (id)dependencies;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (void)waitUntilFinished;
- (id)_implicitObservationInfo;
- (void)setObservationInfo:(void*)arg1;
- (void*)observationInfo;
- (void)setTag:(NSUInteger)arg1;
- (NSUInteger)tag;
- (void)NSOperationAdditions_dealloc;

@end