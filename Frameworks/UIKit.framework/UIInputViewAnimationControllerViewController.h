/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIViewControllerAnimatedTransitioning_Keyboard>, <UIViewControllerContextTransitioning>, NSString;

@interface UIInputViewAnimationControllerViewController : NSObject <UIInputViewAnimationController> {
    <UIViewControllerAnimatedTransitioning_Keyboard> *_animator;
    <UIViewControllerContextTransitioning> *_context;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (id)controllerWithContext:(id)arg1;

- (void)completeAnimationWithHost:(id)arg1 context:(id)arg2;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (void)performAnimationWithHost:(id)arg1 context:(id)arg2;
- (id)prepareAnimationWithHost:(id)arg1 startPlacement:(id)arg2 endPlacement:(id)arg3;

@end
