/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class PSSpecifier;



@interface PSEditableTableCell : PreferencesTextTableCell 
{
    PSSpecifier *_userInfo;
    SEL _targetSetter;
    id _realTarget;
    NSInteger _type;
    BOOL _valueChanged;
}

@property NSInteger type;

+ (void)_initializeSafeCategory;

- (NSInteger)type;
- (void)setType:(NSInteger)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)dealloc;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (BOOL)canReload;
- (void)controlChanged:(id)arg1;
- (void)_setValueChanged;
- (void)_saveForExit;
- (void)setValueChangedTarget:(id)arg1 action:(SEL)arg2 userInfo:(id)arg3;
- (BOOL)isAccessibilityElement;

@end