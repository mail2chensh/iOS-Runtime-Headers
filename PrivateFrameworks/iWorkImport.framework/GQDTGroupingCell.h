/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDTGroupingCell : GQDTCell {
    boolmHasValidFormulaValue;
    boolmIsCollapsed;
    id mFormat;
    struct __CFString { } *mFormulaValue;
    unsigned short mLevel;
    struct __CFBundle { } *mProcessorBundle;
    unsigned short mRowCount;
    unsigned short mRowIdx;
    id mValue;
}

+ (struct __CFString { }*)displayTypeString:(int)arg1;

- (struct __CFString { }*)createFormattedValue;
- (void)dealloc;
- (bool)hasFormulaValue;
- (bool)isCollapsed;
- (unsigned short)level;
- (int)readAttributes:(struct _xmlTextReader { }*)arg1;
- (int)readElement:(struct _xmlTextReader { }*)arg1;
- (int)readRootFormat:(struct _xmlTextReader { }*)arg1;
- (int)readValue:(struct _xmlTextReader { }*)arg1;
- (unsigned short)rowCount;
- (unsigned short)rowIdx;
- (void)setProcessorBundle:(struct __CFBundle { }*)arg1;
- (id)value;

@end
