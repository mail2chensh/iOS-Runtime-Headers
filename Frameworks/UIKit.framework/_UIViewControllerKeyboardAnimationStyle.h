/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIViewControllerKeyboardAnimationStyleInfo, _UIViewControllerTransitionContext;

@interface _UIViewControllerKeyboardAnimationStyle : UIInputViewAnimationStyleDirectional {
    _UIViewControllerTransitionContext *_context;
    _UIViewControllerKeyboardAnimationStyleInfo *_info;
    bool_allowCustomTransition;
    bool_disableAlongsideView;
}

@property bool allowCustomTransition;
@property(readonly) _UIViewControllerTransitionContext * context;
@property bool disableAlongsideView;
@property(readonly) _UIViewControllerKeyboardAnimationStyleInfo * info;

+ (id)animationStyleWithContext:(id)arg1 useCustomTransition:(bool)arg2;
+ (id)animationStyleWithContext:(id)arg1;

- (bool)allowCustomTransition;
- (bool)canDismissWithScrollView;
- (id)context;
- (id)controllerForStartPlacement:(id)arg1 endPlacement:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (bool)disableAlongsideView;
- (id)info;
- (id)initWithContext:(id)arg1;
- (bool)isAnimationCompleted;
- (bool)isEqual:(id)arg1;
- (void)launchAnimation:(id)arg1 afterStarted:(id)arg2 completion:(id)arg3 forHost:(id)arg4 fromCurrentPosition:(bool)arg5;
- (void)setAllowCustomTransition:(bool)arg1;
- (void)setDisableAlongsideView:(bool)arg1;

@end
