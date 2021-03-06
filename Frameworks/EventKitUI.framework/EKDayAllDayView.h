/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class <EKDayAllDayViewDelegate>, EKEvent, NSMutableArray, UILabel, UIScrollView, UIView;

@interface EKDayAllDayView : UIView {
    UILabel *_allDay;
    <EKDayAllDayViewDelegate> *_delegate;
    EKEvent *_dimmedOccurrence;
    UIView *_dividerLineViewBottom;
    UIView *_dividerLineViewTop;
    double _fixedHeight;
    int _maxVisibleRows;
    double _occurrenceInset;
    NSMutableArray *_occurrenceViews;
    long long _orientation;
    UIScrollView *_scroller;
    EKEvent *_selectedEvent;
    bool_allDayLabelHighlighted;
    bool_allowSelection;
    bool_showSelection;
    bool_showsBorderLines;
    bool_showsLabel;
    bool_usesSmallText;
}

@property bool allowsOccurrenceSelection;
@property <EKDayAllDayViewDelegate> * delegate;
@property(retain) EKEvent * dimmedOccurrence;
@property double fixedHeight;
@property int maxVisibleRows;
@property(readonly) double naturalHeight;
@property bool showsBorderLines;
@property bool showsLabel;
@property bool showsSelection;

+ (id)allDayLabelBoldFont;
+ (id)allDayLabelFont;
+ (id)unscaledAllDayFont;

- (void).cxx_destruct;
- (double)_allDayAreaHeightForEventCount:(long long)arg1;
- (double)_borderLineWidth;
- (void)_configureOccurrenceViewMarginAndPadding:(id)arg1;
- (double)_height;
- (void)addViewToScroller:(id)arg1;
- (bool)allowsOccurrenceSelection;
- (void)configureOccurrenceViewForGestureController:(id)arg1;
- (bool)containsEvent:(id)arg1;
- (void)dayOccurrenceViewClicked:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (id)delegate;
- (void)didMoveToWindow;
- (id)dimmedOccurrence;
- (double)firstEventYOffset;
- (double)fixedHeight;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAllDayLabelHighlighted;
- (void)layoutSubviews;
- (int)maxVisibleRows;
- (double)naturalHeight;
- (double)nextAvailableOccurrenceViewYOrigin;
- (id)occurrenceViewForEvent:(id)arg1;
- (id)occurrenceViews;
- (void)removeAllOccurrenceViews;
- (void)selectEvent:(id)arg1;
- (id)selectedEvent;
- (void)setAllDayLabelColor:(id)arg1;
- (void)setAllDayLabelHighlighted:(bool)arg1;
- (void)setAllowsOccurrenceSelection:(bool)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimmedOccurrence:(id)arg1;
- (void)setFixedHeight:(double)arg1;
- (void)setMaxVisibleRows:(int)arg1;
- (void)setOccurrenceInset:(double)arg1 labelInset:(double)arg2;
- (void)setOccurrences:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setShowsBorderLines:(bool)arg1;
- (void)setShowsLabel:(bool)arg1;
- (void)setShowsSelection:(bool)arg1;
- (bool)showsBorderLines;
- (bool)showsLabel;
- (bool)showsSelection;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateLabelFont;

@end
