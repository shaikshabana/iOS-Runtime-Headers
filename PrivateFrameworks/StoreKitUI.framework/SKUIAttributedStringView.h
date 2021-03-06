/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIAttributedStringView : UIView {
    float _calculatedTopInset;
    BOOL _containsLinks;
    int _firstLineTopInset;
    SKUIAttributedStringLayout *_layout;
    NSLayoutManager *_layoutManager;
    <SKUILinkHandler> *_linkDelegate;
    NSMutableArray *_requiredBadges;
    int _stringTreatment;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _textBounds;
    UIColor *_textColor;
    BOOL _textColorFollowsTintColor;
    NSTextContainer *_textContainer;
    NSTextStorage *_textStorage;
    BOOL _touchInside;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _trackingRange;
    BOOL _trackingTouch;
    UIColor *_treatmentColor;
}

@property (nonatomic, readonly) float baselineOffset;
@property (nonatomic) BOOL containsLinks;
@property (nonatomic, readonly) float firstBaselineOffset;
@property (nonatomic) int firstLineTopInset;
@property (nonatomic, retain) SKUIAttributedStringLayout *layout;
@property (nonatomic) <SKUILinkHandler> *linkDelegate;
@property (nonatomic, copy) NSArray *requiredBadges;
@property (nonatomic) int stringTreatment;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic) BOOL textColorFollowsTintColor;
@property (nonatomic, retain) UIColor *treatmentColor;
@property (nonatomic, readonly) BOOL usesTallCharacterSet;

+ (struct CGSize { float x1; float x2; })sizeWithLayout:(id)arg1 treatment:(int)arg2;

- (void).cxx_destruct;
- (void)_reloadTopInset;
- (void)_setTouchInside:(BOOL)arg1;
- (void)_setTrackingTouch:(BOOL)arg1;
- (void)_setupTapLocatorContainer;
- (BOOL)_touchInsideLinkText:(struct CGPoint { float x1; float x2; })arg1 linkTextRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (float)baselineOffset;
- (BOOL)containsLinks;
- (id)description;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)firstBaselineOffset;
- (int)firstLineTopInset;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)layout;
- (id)linkDelegate;
- (id)requiredBadges;
- (void)setContainsLinks:(BOOL)arg1;
- (void)setFirstLineTopInset:(int)arg1;
- (void)setLayout:(id)arg1;
- (void)setLinkDelegate:(id)arg1;
- (void)setRequiredBadges:(id)arg1;
- (void)setStringTreatment:(int)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextColorFollowsTintColor:(BOOL)arg1;
- (void)setTreatmentColor:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (int)stringTreatment;
- (id)textColor;
- (BOOL)textColorFollowsTintColor;
- (void)tintColorDidChange;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (id)treatmentColor;
- (BOOL)usesTallCharacterSet;

@end
