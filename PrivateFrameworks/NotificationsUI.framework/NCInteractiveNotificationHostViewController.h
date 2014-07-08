/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/NotificationsUI.framework/NotificationsUI
 */

@class NCViewServiceDescriptor, <NCInteractiveNotificationHostDelegate>;

@interface NCInteractiveNotificationHostViewController : _UIRemoteViewController <NCInteractiveNotificationHostInterface, NCInteractiveNotificationHostDelegate> {
    bool_proximityMonitoringEnabled;
    bool_showsKeyboard;
    bool_modal;
    <NCInteractiveNotificationHostDelegate> *_delegate;
    double _bottomOverhangHeight;
    NCViewServiceDescriptor *_inlayViewService;
    NCViewServiceDescriptor *_accessoryViewService;
}

@property <NCInteractiveNotificationHostDelegate> * delegate;
@property bool showsKeyboard;
@property double bottomOverhangHeight;
@property(getter=isModal) bool modal;
@property(retain) NCViewServiceDescriptor * inlayViewService;
@property(retain) NCViewServiceDescriptor * accessoryViewService;

+ (void)requestInteractiveNotificationControllerWithName:(id)arg1 bundleIdentifier:(id)arg2 context:(id)arg3 completion:(id)arg4;
+ (void)initialize;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)getActionContextWithCompletion:(id)arg1;
- (void)_proximityStateChanged:(id)arg1;
- (void)_setProximityMonitoringEnabled:(bool)arg1;
- (void)setAccessoryViewService:(id)arg1;
- (void)setInlayViewService:(id)arg1;
- (void)setBottomOverhangHeight:(double)arg1;
- (void)setShowsKeyboard:(bool)arg1;
- (void)willPresentFromActionIdentifier:(id)arg1;
- (void)handleActionIdentifier:(id)arg1;
- (void)handleActionAtIndex:(long long)arg1;
- (void)didChangeRevealPercent:(double)arg1;
- (void)interactiveNotificationDidAppear;
- (void)setModal:(bool)arg1;
- (id)accessoryViewService;
- (id)inlayViewService;
- (double)bottomOverhangHeight;
- (void)_requestProximityMonitoringEnabled:(bool)arg1;
- (void)_setActionEnabled:(bool)arg1 atIndex:(unsigned long long)arg2;
- (void)_requestPreferredContentHeight:(double)arg1;
- (void)_dismissWithContext:(id)arg1;
- (bool)isModal;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (bool)showsKeyboard;

@end