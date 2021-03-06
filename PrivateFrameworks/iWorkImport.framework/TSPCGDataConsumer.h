/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSUStreamWriteChannel>, NSError, NSObject<OS_dispatch_queue>;

@interface TSPCGDataConsumer : NSObject {
    NSError *_error;
    <TSUStreamWriteChannel> *_writeChannel;
    NSObject<OS_dispatch_queue> *_writeQueue;
}

+ (struct CGDataConsumer { }*)newCGDataConsumerForWriteChannel:(id)arg1;

- (void).cxx_destruct;
- (void)close;
- (id)init;
- (id)initWithWriteChannel:(id)arg1;
- (unsigned long long)putBytes:(const void*)arg1 count:(unsigned long long)arg2;

@end
