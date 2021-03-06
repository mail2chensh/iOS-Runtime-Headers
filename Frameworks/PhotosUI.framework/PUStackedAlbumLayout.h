/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class NSArray, NSMutableDictionary, PUAlbumListTransitionContext, UICollectionViewLayoutAttributes;

@interface PUStackedAlbumLayout : UICollectionViewLayout {
    struct CGPoint { 
        double x; 
        double y; 
    struct CGSize { 
        double width; 
        double height; 
    PUAlbumListTransitionContext *_albumListTransitionContext;
    } _contentSizeAdjust;
    NSMutableDictionary *_derivedLayoutAttributesByIndexPath;
    UICollectionViewLayoutAttributes *_globalHeaderAttributes;
    } _referenceCenter;
    UICollectionViewLayoutAttributes *_referenceItemLayoutAttributes;
    NSMutableDictionary *_visibleLayoutAttributesByIndexPath;
    NSArray *_visibleStackedItemLayoutAttributes;
    double _yAdjust;
    NSMutableDictionary *_zIndexByIndexPath;
    bool_isInteractive;
}

@property(retain) PUAlbumListTransitionContext * albumListTransitionContext;
@property struct CGSize { double x1; double x2; } contentSizeAdjust;
@property(retain) UICollectionViewLayoutAttributes * globalHeaderAttributes;
@property(setter=setInteractive:) bool isInteractive;
@property struct CGPoint { double x1; double x2; } referenceCenter;
@property(copy) UICollectionViewLayoutAttributes * referenceItemLayoutAttributes;
@property(copy) NSArray * visibleStackedItemLayoutAttributes;
@property double yAdjust;

- (void).cxx_destruct;
- (id)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned long long)arg3;
- (id)_newAdjustedLayoutAttributes:(id)arg1 indexPath:(id)arg2;
- (id)albumListTransitionContext;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (struct CGSize { double x1; double x2; })contentSizeAdjust;
- (id)globalHeaderAttributes;
- (bool)isInteractive;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)prepareLayout;
- (struct CGPoint { double x1; double x2; })referenceCenter;
- (id)referenceItemLayoutAttributes;
- (void)setAlbumListTransitionContext:(id)arg1;
- (void)setContentSizeAdjust:(struct CGSize { double x1; double x2; })arg1;
- (void)setGlobalHeaderAttributes:(id)arg1;
- (void)setInteractive:(bool)arg1;
- (void)setReferenceCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setReferenceItemLayoutAttributes:(id)arg1;
- (void)setVisibleStackedItemLayoutAttributes:(id)arg1;
- (void)setYAdjust:(double)arg1;
- (id)visibleStackedItemLayoutAttributes;
- (double)yAdjust;
- (long long)zIndexForItemAtIndexPath:(id)arg1;

@end
