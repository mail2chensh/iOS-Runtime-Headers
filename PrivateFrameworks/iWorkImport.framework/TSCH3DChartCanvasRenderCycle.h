/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartCanvasRenderCycle : TSCH3DChartRenderCycle {
    boolmInteractiveMode;
}

- (bool)allocateFramebufferWithAllocationInfo:(const struct FramebufferAllocationInfo { id x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; }*)arg1;
- (void)beginInteractiveModeWithMinimumBufferSize:(struct CGSize { double x1; double x2; })arg1;
- (void)endInteractiveMode;
- (id)initWithRenderCycleInfo:(const struct RenderCycleInfo { id x1; id x2; id x3; }*)arg1;
- (unsigned long long)multisamples;
- (Class)noninteractivePresenterClass;
- (Class)noninteractiveSetupClass;
- (void)switchToChartRenderSetupClass:(Class)arg1;
- (bool)usesMultipassRendering;

@end
