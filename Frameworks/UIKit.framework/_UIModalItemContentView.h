/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIButton, UILabel, UITableView, UITextField, UIView, UIViewController, _UIModalItem, _UIModalItemsPresentingViewController;

@interface _UIModalItemContentView : UIView <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {
    struct CGSize { 
        double width; 
        double height; 
    struct CGSize { 
        double width; 
        double height; 
    struct CGSize { 
        double width; 
        double height; 
    struct CGSize { 
        double width; 
        double height; 
    UIViewController *_accessoryViewController;
    UIView *_accessoryViewControllerContrainerView;
    } _accessoryViewControllerSize;
    } _actualViewControllerSize;
    UITableView *_buttonTable;
    UIButton *_cancelButton;
    long long _cancelButtonIndex;
    UIButton *_defaultButton;
    long long _defaultButtonIndex;
    UITextField *_loginTextField;
    } _maxSize;
    UILabel *_messageLabel;
    _UIModalItem *_modalItem;
    UITextField *_passwordTextField;
    } _presentingSize;
    _UIModalItemsPresentingViewController *_presentingViewController;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
    bool_enableFirstOtherButton;
}

@property(readonly) UIViewController * accessoryViewController;
@property(readonly) UIView * accessoryViewControllerContrainerView;
@property(readonly) struct CGSize { double x1; double x2; } accessoryViewControllerSize;
@property struct CGSize { double x1; double x2; } actualViewControllerSize;
@property(readonly) UITableView * buttonTable;
@property(retain) UIButton * cancelButton;
@property(readonly) long long cancelButtonIndex;
@property(copy,readonly) NSString * debugDescription;
@property(retain) UIButton * defaultButton;
@property(readonly) long long defaultButtonIndex;
@property(copy,readonly) NSString * description;
@property bool enableFirstOtherButton;
@property(readonly) unsigned long long hash;
@property(readonly) UITextField * loginTextField;
@property struct CGSize { double x1; double x2; } maxSize;
@property(readonly) UILabel * messageLabel;
@property _UIModalItem * modalItem;
@property(readonly) UITextField * passwordTextField;
@property struct CGSize { double x1; double x2; } presentingSize;
@property _UIModalItemsPresentingViewController * presentingViewController;
@property(readonly) UILabel * subtitleLabel;
@property(readonly) Class superclass;
@property(readonly) UILabel * titleLabel;

- (void)_createAndConfigureButtonTable;
- (void)_createAndConfigureMessageLabel;
- (void)_createAndConfigureSubtitleLabel;
- (void)_createAndConfigureTextFieldsForInputStyle:(long long)arg1;
- (void)_createAndConfigureTitleLabel;
- (void)_createViewControllerContentView;
- (void)_reloadButtons;
- (id)accessoryViewController;
- (id)accessoryViewControllerContrainerView;
- (struct CGSize { double x1; double x2; })accessoryViewControllerSize;
- (struct CGSize { double x1; double x2; })actualViewControllerSize;
- (id)buttonTable;
- (id)cancelButton;
- (long long)cancelButtonIndex;
- (void)dealloc;
- (id)defaultButton;
- (long long)defaultButtonIndex;
- (bool)enableFirstOtherButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layout;
- (id)loginTextField;
- (struct CGSize { double x1; double x2; })maxSize;
- (id)messageLabel;
- (id)modalItem;
- (id)passwordTextField;
- (struct CGSize { double x1; double x2; })presentingSize;
- (id)presentingViewController;
- (void)setActualViewControllerSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setCancelButton:(id)arg1;
- (void)setDefaultButton:(id)arg1;
- (void)setEnableFirstOtherButton:(bool)arg1;
- (void)setMaxSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setModalItem:(id)arg1 skipLayout:(bool)arg2;
- (void)setModalItem:(id)arg1;
- (void)setPresentingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPresentingViewController:(id)arg1;
- (id)subtitleLabel;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)textFieldValueDidChange:(id)arg1;
- (id)titleLabel;

@end
