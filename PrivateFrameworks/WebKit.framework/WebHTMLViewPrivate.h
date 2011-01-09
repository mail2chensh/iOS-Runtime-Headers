/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class WebDataSource, NSTimer, WAKView, WebPluginController, WebEvent, NSString, NSMutableDictionary, NSArray;



@interface WebHTMLViewPrivate : NSObject 
{
    BOOL closed;
    BOOL needsToApplyStyles;
    BOOL ignoringMouseDraggedEvents;
    BOOL printing;
    BOOL avoidingPrintOrphan;
    WAKView *layerHostingView;
    WebEvent *mouseDownEvent;
    BOOL handlingMouseDownEvent;
    WebEvent *keyDownEvent;
    BOOL exposeInputContext;
    struct CGPoint { 
        float x; 
        float y; 
    } lastScrollPosition;
    WebPluginController *pluginController;
    NSString *toolTip;
    id trackingRectOwner;
    void *trackingRectUserData;
    NSTimer *autoscrollTimer;
    WebEvent *autoscrollTriggerEvent;
    NSArray *pageRects;
    NSMutableDictionary *highlighters;
    BOOL transparentBackground;
    struct WebHTMLViewInterpretKeyEventsParameters { struct KeyboardEvent {} *x1; BOOL x2; BOOL x3; BOOL x4; } *interpretKeyEventsParameters;
    BOOL receivedNOOP;
    WebDataSource *dataSource;
    SEL selectorForDoCommandBySelector;
}

+ (void)initialize;

- (void)clear;
- (void)finalize;
- (void)dealloc;

@end