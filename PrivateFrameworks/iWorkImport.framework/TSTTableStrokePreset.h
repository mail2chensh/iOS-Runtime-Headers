/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface TSTTableStrokePreset : TSPObject <TSSPreset> {
    unsigned long long mIndex;
}

@property(readonly) NSString * presetKind;

- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (unsigned long long)index;
- (id)init;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (bool)isThemeEquivalent:(id)arg1;
- (id)presetKind;
- (void)saveToArchive:(struct TableStrokePresetArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; int x3; int x4; unsigned int x5[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setIndex:(unsigned long long)arg1;

@end
