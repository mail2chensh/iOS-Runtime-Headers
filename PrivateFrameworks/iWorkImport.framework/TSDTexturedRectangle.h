/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CALayer, NSMutableArray, NSMutableDictionary, NSString, TSDTextureSet, TSUColor;

@interface TSDTexturedRectangle : NSObject <NSCopying> {
    struct CGPoint { 
        double x; 
        double y; 
    struct CGPoint { 
        double x; 
        double y; 
    struct CGSize { 
        double width; 
        double height; 
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    struct CGSize { 
        double width; 
        double height; 
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _singleTextureSize;
    NSString *_text;
    double _textBaseline;
    TSUColor *_textColor;
    } _textRange;
    double _textXHeight;
    bool_isVerticalText;
    boolmIsFlattened;
    boolmSingleTextureContainsMipmaps;
    NSMutableDictionary *mAttributes;
    struct CGImage { } *mBakedImage;
    struct CGColorSpace { } *mColorSpace;
    } mContentRect;
    CALayer *mLayer;
    } mOffset;
    } mOriginalFrame;
    } mOriginalPosition;
    TSDTextureSet *mParent;
    id mRenderBlock;
    unsigned int mSingleTextureName;
    } mSize;
    struct CGImage { } *mSourceImage;
    NSMutableArray *mTags;
    double mTextureOpacity;
    long long mTextureType;
}

@property struct CGColorSpace { }* colorSpace;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentRect;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frameOnCanvas;
@property(readonly) struct CGImage { }* image;
@property(readonly) bool isBackgroundTexture;
@property bool isFlattened;
@property(readonly) bool isImageSource;
@property(readonly) bool isRenderable;
@property bool isVerticalText;
@property(readonly) CALayer * layer;
@property struct CGPoint { double x1; double x2; } offset;
@property struct CGPoint { double x1; double x2; } originalPosition;
@property TSDTextureSet * parent;
@property(readonly) CALayer * parentLayer;
@property(readonly) unsigned int singleTextureName;
@property(readonly) double singleTextureOpacity;
@property(readonly) struct CGSize { double x1; double x2; } singleTextureSize;
@property(readonly) unsigned int singleTextureTarget;
@property struct CGSize { double x1; double x2; } size;
@property(retain) NSMutableArray * tags;
@property(copy) NSString * text;
@property double textBaseline;
@property(retain) TSUColor * textColor;
@property struct _NSRange { unsigned long long x1; unsigned long long x2; } textRange;
@property double textXHeight;
@property double textureOpacity;
@property long long textureType;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectForTextures:(id)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectOnCanvasForTextures:(id)arg1;

- (void)adjustAnchorRelativeToParentsCenterOfRotation:(struct CGPoint { double x1; double x2; })arg1 isMagicMove:(bool)arg2;
- (void)bakeLayerWithAngle:(double)arg1 scale:(double)arg2;
- (struct CGColorSpace { }*)colorSpace;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertToCanvasCoordinates:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOnCanvas;
- (struct CGImage { }*)image;
- (id)initWithCGImage:(struct CGImage { }*)arg1;
- (id)initWithLayer:(id)arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 offset:(struct CGPoint { double x1; double x2; })arg2 renderBlock:(id)arg3;
- (bool)isBackgroundTexture;
- (bool)isFlattened;
- (bool)isImageSource;
- (bool)isRenderable;
- (bool)isVerticalText;
- (id)layer;
- (struct CGPoint { double x1; double x2; })offset;
- (struct CGPoint { double x1; double x2; })originalPosition;
- (struct CGColorSpace { }*)p_colorSpace;
- (struct CGImage { }*)p_newImageAndBufferWithAngle:(double)arg1 scale:(double)arg2 offset:(struct CGPoint { double x1; double x2; })arg3;
- (void)p_updateFrame;
- (id)parent;
- (id)parentLayer;
- (void)releaseSingleTexture;
- (void)renderIntoContext:(struct CGContext { }*)arg1;
- (void)renderLayerContentsIfNeeded;
- (void)resetAnchorPoint;
- (void)resetToSourceImage;
- (void)setColorSpace:(struct CGColorSpace { }*)arg1;
- (void)setContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIsFlattened:(bool)arg1;
- (void)setIsVerticalText:(bool)arg1;
- (void)setOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOriginalPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setParent:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTags:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextBaseline:(double)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTextXHeight:(double)arg1;
- (void)setTextureOpacity:(double)arg1;
- (void)setTextureType:(long long)arg1;
- (void)setupSingleTexture;
- (void)setupSingleTextureAndGenerateMipMaps:(bool)arg1;
- (unsigned int)singleTextureName;
- (double)singleTextureOpacity;
- (struct CGSize { double x1; double x2; })singleTextureSize;
- (unsigned int)singleTextureTarget;
- (struct CGSize { double x1; double x2; })size;
- (id)tags;
- (void)teardown;
- (id)text;
- (double)textBaseline;
- (id)textColor;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })textRange;
- (double)textXHeight;
- (double)textureOpacity;
- (long long)textureType;

@end
