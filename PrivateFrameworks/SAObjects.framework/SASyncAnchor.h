/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SASyncAnchor : AceObject <SAAceSerializable> {
}

@property long long count;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy) NSString * generation;
@property(readonly) unsigned long long hash;
@property(copy) NSString * key;
@property(readonly) Class superclass;
@property(copy) NSString * validity;

+ (id)anchor;
+ (id)anchorWithDictionary:(id)arg1 context:(id)arg2;

- (long long)count;
- (id)encodedClassName;
- (id)generation;
- (id)groupIdentifier;
- (id)key;
- (void)setCount:(long long)arg1;
- (void)setGeneration:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setValidity:(id)arg1;
- (id)validity;

@end
