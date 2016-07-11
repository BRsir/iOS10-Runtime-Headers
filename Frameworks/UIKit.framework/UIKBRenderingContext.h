/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBRenderingContext : NSObject <NSCopying> {
    UIKBRenderConfig * _renderConfig;
    unsigned long long  _shiftState;
}

@property (nonatomic, retain) UIKBRenderConfig *renderConfig;
@property (nonatomic) unsigned long long shiftState;

+ (id)renderingContextForRenderConfig:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithRenderConfig:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)renderConfig;
- (void)setRenderConfig:(id)arg1;
- (void)setShiftState:(unsigned long long)arg1;
- (unsigned long long)shiftState;

@end