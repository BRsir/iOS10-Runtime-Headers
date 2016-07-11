/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKFullScreenAppViewController : UIViewController <CKBrowserSelectionControllerDelegate, CKBrowserViewControllerProtocol, CKDismissViewDelegate, CKFullScreenAppNavbarManagerDelegate, CKMessageEntryViewDelegate, CKMessageEntryViewInputDelegate, UIInteractionProgressObserver> {
    CADisplayLink * _animationDisplayLink;
    CKBrowserSelectionController * _appSelectionBrowser;
    UIWindow * _appSelectionBrowserWindow;
    UIView * _contentView;
    UIViewController<CKBrowserViewControllerProtocol> * _contentViewController;
    CKConversation * _conversation;
    <CKFullScreenAppViewControllerDelegate> * _delegate;
    CKDismissView * _dismissView;
    CKMessageEntryView * _entryView;
    UIView * _entryViewSnapshot;
    bool  _inDragAndDrop;
    bool  _inTransition;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialBrowserFrame;
    UISimpleInteractionProgress * _interactionProgress;
    CKFullScreenAppNavbarManager * _navbarManager;
    IMBalloonPlugin * _plugin;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _targetBrowserFrame;
    unsigned long long  _transitionDirection;
}

@property (nonatomic, retain) NSNumber *adamID;
@property (nonatomic, retain) CADisplayLink *animationDisplayLink;
@property (nonatomic, retain) CKBrowserSelectionController *appSelectionBrowser;
@property (nonatomic, retain) UIWindow *appSelectionBrowserWindow;
@property (nonatomic, readonly) unsigned long long badgeValue;
@property (nonatomic, readonly) IMBalloonPlugin *balloonPlugin;
@property (nonatomic, retain) IMBalloonPluginDataSource *balloonPluginDataSource;
@property (nonatomic, readonly) CKBrowserDragManager *browserDragManager;
@property (nonatomic, readonly) long long browserPresentationStyle;
@property (nonatomic, readonly) bool canReplaceDataSource;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, retain) UIViewController<CKBrowserViewControllerProtocol> *contentViewController;
@property (nonatomic, retain) CKConversation *conversation;
@property (nonatomic) NSString *conversationID;
@property (nonatomic) long long currentBrowserConsumer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKFullScreenAppViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CKDismissView *dismissView;
@property (nonatomic, retain) CKMessageEntryView *entryView;
@property (nonatomic, retain) UIView *entryViewSnapshot;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView *iavOverride;
@property (nonatomic) bool inDragAndDrop;
@property (nonatomic, readonly) bool inExpandedPresentation;
@property (nonatomic) bool inTransition;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } initialBrowserFrame;
@property (nonatomic, retain) UISimpleInteractionProgress *interactionProgress;
@property (nonatomic) bool isiMessage;
@property (nonatomic, readonly) bool mayBeKeptInViewHierarchy;
@property (nonatomic, retain) CKFullScreenAppNavbarManager *navbarManager;
@property (nonatomic, readonly) long long parentModalPresentationStyle;
@property (nonatomic, readonly) <UIViewControllerTransitioningDelegate> *parentTransitioningDelegate;
@property (nonatomic, retain) IMBalloonPlugin *plugin;
@property (nonatomic, retain) UIViewController *presentationViewController;
@property (nonatomic) NSObject<CKBrowserViewControllerSendDelegate> *sendDelegate;
@property (nonatomic, readonly) bool shouldShowChatChrome;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsQuickView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } targetBrowserFrame;
@property (nonatomic) unsigned long long transitionDirection;
@property (nonatomic, readonly) bool wantsDarkUI;
@property (nonatomic, readonly) bool wantsOpaqueUI;

+ (double)navbarHeight;

- (void).cxx_destruct;
- (void)_animationDisplayLinkFired;
- (bool)_canOpenParentApp;
- (bool)_currentPluginIsDT;
- (void)_dismiss:(id)arg1;
- (void)_dismissAppSelectionBrowser;
- (void)_dismissDismissView;
- (void)_dragBegan:(id)arg1;
- (void)_dragEnded:(id)arg1;
- (double)_maxEntryViewHeight;
- (void)_openParentApp:(id)arg1;
- (void)_presentAppSelectionBrowser;
- (void)_presentDismissView;
- (void)_setupEntryView;
- (bool)_shouldEnableAppButton;
- (void)_updateEntryViewFrame;
- (void)animateBrowserViewAfterFullScreenTransition;
- (void)animateBrowserViewFromSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 interactive:(bool)arg2 completion:(id /* block */)arg3;
- (void)animateBrowserViewToTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 completion:(id /* block */)arg2;
- (id)animationDisplayLink;
- (id)appSelectionBrowser;
- (id)appSelectionBrowserWindow;
- (id)balloonPlugin;
- (id)balloonPluginDataSource;
- (long long)browserPresentationStyle;
- (void)browserSelectionControllerSelectedBalloonPlugin:(id)arg1;
- (bool)canBecomeFirstResponder;
- (void)collapse:(id)arg1;
- (id)contentView;
- (id)contentViewController;
- (id)conversation;
- (id)conversationID;
- (void)dealloc;
- (id)delegate;
- (void)dismiss;
- (id)dismissView;
- (void)dismissViewWasTapped:(id)arg1;
- (id)entryView;
- (id)entryViewSnapshot;
- (id)iavOverride;
- (bool)inDragAndDrop;
- (bool)inTransition;
- (id)initWithBalloonPlugin:(id)arg1;
- (id)initWithBalloonPlugin:(id)arg1 dataSource:(id)arg2;
- (id)initWithConversation:(id)arg1 plugin:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialBrowserFrame;
- (id)interactionProgress;
- (void)interactionProgress:(id)arg1 didEnd:(bool)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (bool)isiMessage;
- (void)loadView;
- (bool)messageEntryShouldHideCaret:(id)arg1;
- (void)messageEntryView:(id)arg1 didTapMediaObject:(id)arg2;
- (void)messageEntryView:(id)arg1 sendButtonLongPressEnded:(struct CGPoint { double x1; double x2; })arg2;
- (void)messageEntryView:(id)arg1 sendButtonLongPressMoved:(struct CGPoint { double x1; double x2; })arg2;
- (bool)messageEntryView:(id)arg1 shouldInsertMediaObjects:(id)arg2;
- (void)messageEntryViewBrowserButtonHit:(id)arg1;
- (void)messageEntryViewDidBeginEditing:(id)arg1;
- (void)messageEntryViewDidChange:(id)arg1;
- (void)messageEntryViewDidEndEditing:(id)arg1;
- (void)messageEntryViewDidTakeFocus:(id)arg1;
- (void)messageEntryViewDigitalTouchButtonHit:(id)arg1;
- (void)messageEntryViewHandwritingButtonHit:(id)arg1;
- (long long)messageEntryViewHighLightInputButton:(id)arg1;
- (double)messageEntryViewMaxHeight:(id)arg1;
- (void)messageEntryViewPhotoButtonHit:(id)arg1;
- (void)messageEntryViewRaiseGestureAutoSend:(id)arg1;
- (void)messageEntryViewRecordingDidChange:(id)arg1;
- (void)messageEntryViewSendButtonHit:(id)arg1;
- (void)messageEntryViewSendButtonHitWhileDisabled:(id)arg1;
- (void)messageEntryViewSendButtonLongPressBegan:(id)arg1;
- (bool)messageEntryViewShouldBeginEditing:(id)arg1;
- (id)navbarManager;
- (void)navbarManagerDidDismissAllMessages:(id)arg1;
- (void)navbarManagerDidReceiveMessage:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })navigationBarInsetsWithoutPalette;
- (id)plugin;
- (long long)preferredStatusBarStyle;
- (id)presentationViewController;
- (id)sendDelegate;
- (void)setAnimationDisplayLink:(id)arg1;
- (void)setAppSelectionBrowser:(id)arg1;
- (void)setAppSelectionBrowserWindow:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setContentViewController:(id)arg1;
- (void)setConversation:(id)arg1;
- (void)setConversationID:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDismissView:(id)arg1;
- (void)setEntryView:(id)arg1;
- (void)setEntryViewSnapshot:(id)arg1;
- (void)setInDragAndDrop:(bool)arg1;
- (void)setInTransition:(bool)arg1;
- (void)setInitialBrowserFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInteractionProgress:(id)arg1;
- (void)setIsiMessage:(bool)arg1;
- (void)setNavbarManager:(id)arg1;
- (void)setPlugin:(id)arg1;
- (void)setPresentationViewController:(id)arg1;
- (void)setSendDelegate:(id)arg1;
- (void)setTargetBrowserFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTransitionDirection:(unsigned long long)arg1;
- (bool)shouldAutorotate;
- (bool)shouldShowChatChrome;
- (unsigned long long)supportedInterfaceOrientations;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetBrowserFrame;
- (unsigned long long)transitionDirection;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (bool)wantsDarkUI;
- (bool)wantsOpaqueUI;
- (void)willMoveToParentViewController:(id)arg1;

@end