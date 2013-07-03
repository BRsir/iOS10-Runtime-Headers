/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFModernAtomView, UIView;

@interface MFModernAtomBackgroundView : UIView  {
    UIView *_selectedView;
    UIView *_separatorView;
    int _separatorStyle;
    BOOL _selected;
    float _scalingFactor;
    MFModernAtomView *_hostAtomView;
}

@property(readonly) UIView * separatorView;
@property(retain) MFModernAtomView * hostAtomView;
@property int separatorStyle;
@property BOOL selected;
@property float scalingFactor;


- (id)_chevronImage;
- (id)hostAtomView;
- (void)setScalingFactor:(float)arg1;
- (float)separatorWidth;
- (float)scalingFactor;
- (void)setHostAtomView:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)separatorView;
- (BOOL)selected;
- (int)separatorStyle;
- (void)setSelected:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSeparatorStyle:(int)arg1;
- (void)tintColorDidChange;
- (void)invalidateIntrinsicContentSize;
- (void)layoutSubviews;

@end