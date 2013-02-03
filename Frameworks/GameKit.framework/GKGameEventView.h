/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UILabel, UIWindow, UIImageView;

@interface GKGameEventView : UIView {
    UIImageView *_backgroundView;
    double _duration;
    UIImageView *_imageView;
    UILabel *_label;
    BOOL _showing;
    UIWindow *_window;
}

@property(retain) UIImageView *backgroundView;
@property(retain) UIImageView *imageView;
@property(retain) UILabel *label;
@property(retain) UIWindow *window;
@property double duration;
@property BOOL showing;

- (id)backgroundView;
- (void)dealloc;
- (double)duration;
- (void)hide;
- (id)imageView;
- (id)init;
- (id)label;
- (void)layoutForOrientation:(NSInteger)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (void)orientationChanged:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setImageView:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setShowing:(BOOL)arg1;
- (void)setWindow:(id)arg1;
- (void)show;
- (BOOL)showing;
- (id)window;

@end