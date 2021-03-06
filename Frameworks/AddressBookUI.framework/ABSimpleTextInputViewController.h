/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABSimpleTextInputViewControllerDelegate>, <ABStyleProvider>, NSString;

@interface ABSimpleTextInputViewController : UITableViewController <ABPropertyEditingTableViewCellDelegate> {
    <ABSimpleTextInputViewControllerDelegate> *_delegate;
    NSString *_placeholder;
    <ABStyleProvider> *_styleProvider;
    id _value;
}

@property(copy,readonly) NSString * debugDescription;
@property <ABSimpleTextInputViewControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(copy) NSString * placeholder;
@property(copy) NSString * stringValue;
@property(retain) <ABStyleProvider> * styleProvider;
@property(readonly) Class superclass;

- (bool)_allowsAutorotation;
- (bool)_isSupportedInterfaceOrientation:(long long)arg1;
- (double)ab_heightToFitForViewInPopoverView;
- (void)cancel:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)placeholder;
- (void)propertyEditingTableViewCell:(id)arg1 valueDidChange:(id)arg2;
- (void)save:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)setTitleLocalizationKey:(id)arg1;
- (id)stringValue;
- (id)styleProvider;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)updateSaveButton;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
