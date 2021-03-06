/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSceneHostWrapperView : UIView <BSDescriptionProviding, FBSceneHostView, FBSceneLayerHostContainerViewDataSource, FBSceneLayerManagerObserver, _FBSceneGeometryObserver> {
    unsigned int _appearanceStyle;
    UIColor *_backgroundColorWhileHosting;
    UIColor *_backgroundColorWhileNotHosting;
    <FBSceneHostViewDelegate> *_delegate;
    NSMutableSet *_hiddenLayers;
    FBSceneLayerHostContainerView *_hostContainerView;
    unsigned int _hostedLayerTypes;
    FBSceneLayerManager *_layerManager;
    FBSceneHostManager *_manager;
    NSString *_requester;
    FBScene *_scene;
    BOOL _usingDefaultLayerTypes;
}

@property (nonatomic) unsigned int appearanceStyle;
@property (nonatomic, retain) UIColor *backgroundColorWhileHosting;
@property (nonatomic, retain) UIColor *backgroundColorWhileNotHosting;
@property (getter=isContextHosted, nonatomic, readonly) BOOL contextHosted;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FBSceneHostViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, retain) NSSet *hiddenLayers;
@property (nonatomic, retain) FBSceneLayerHostContainerView *hostContainerView;
@property (nonatomic) unsigned int hostedLayerTypes;
@property (getter=isHosting, nonatomic, readonly) BOOL hosting;
@property (nonatomic, readonly, retain) NSSet *hostingDisabledLayers;
@property (nonatomic, readonly) float level;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } referenceFrame;
@property (nonatomic, readonly, copy) NSString *requester;
@property (nonatomic, readonly, retain) FBScene *scene;
@property (readonly) Class superclass;

- (id)_backgroundColorWhileHosting;
- (id)_backgroundColorWhileNotHosting;
- (id)_hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3;
- (void)_hostingStatusChanged;
- (BOOL)_isReallyHosting;
- (void)_scene:(id)arg1 didChangeLayoutWithAnimationSettings:(id)arg2;
- (void)_setAppearanceStyle:(unsigned int)arg1 force:(BOOL)arg2;
- (id)_stringForAppearanceStyle;
- (void)_toggleBackgroundColorIfNecessary;
- (unsigned int)appearanceStyle;
- (id)backgroundColorWhileHosting;
- (id)backgroundColorWhileNotHosting;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)hiddenLayers;
- (id)hostContainerView;
- (unsigned int)hostedLayerTypes;
- (id)hostingDisabledLayers;
- (id)initWithScene:(id)arg1 requester:(id)arg2;
- (void)invalidate;
- (BOOL)isContextHosted;
- (BOOL)isHosting;
- (id)layersForHostContainerView:(id)arg1;
- (float)level;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })referenceFrame;
- (id)requester;
- (id)scene;
- (void)sceneLayerManager:(id)arg1 didRepositionLayer:(id)arg2 fromIndex:(unsigned int)arg3 toIndex:(unsigned int)arg4;
- (void)setAppearanceStyle:(unsigned int)arg1;
- (void)setBackgroundColorWhileHosting:(id)arg1;
- (void)setBackgroundColorWhileNotHosting:(id)arg1;
- (void)setDefaultHostedLayerTypes:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHostContainerView:(id)arg1;
- (void)setHostedLayerTypes:(unsigned int)arg1;
- (void)setLayer:(id)arg1 hidden:(BOOL)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)updateBackgroundColor;
- (id)window;

@end
