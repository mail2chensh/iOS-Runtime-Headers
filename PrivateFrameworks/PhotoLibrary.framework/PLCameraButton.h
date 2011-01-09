/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIImageView, UIImage, UIView, NSArray;



@interface PLCameraButton : UIButton 
{
    UIView *_rotationHolder;
    UIImageView *_iconView;
    BOOL _lockEnabled;
    BOOL _isLandscape;
    BOOL _dontDrawDisabled;
    UIImage *_cameraIcon;
    UIImage *_cameraIconLandscape;
    NSArray *_videoRecordingIcons;
    BOOL _videoMode;
    BOOL _videoIsRecording;
    NSInteger _orientation;
    BOOL _watchingOrientationChanges;
}

+ (void)_initializeSafeCategory;

- (void)setButtonOrientation:(NSInteger)arg1 animated:(BOOL)arg2;
- (void)_startWatchingDeviceOrientationChanges;
- (void)_deviceOrientationChanged:(id)arg1;
- (void)_setIcon:(id)arg1;
- (void)setLockEnabled:(BOOL)arg1;
- (void)_stopWatchingDeviceOrientationChanges;
- (void)setDontShowDisabledState:(BOOL)arg1;
- (void)setVideoMode:(BOOL)arg1;
- (void)setVideoIsRecording:(BOOL)arg1;
- (id)initWithDefaultSize;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)_setHighlightOnMouseDown:(BOOL)arg1;
- (NSInteger)orientation;
- (void)willMoveToSuperview:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)dealloc;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;

@end