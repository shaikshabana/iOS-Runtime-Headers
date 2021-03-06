/* Generated by RuntimeBrowser.
 */

@protocol MCDNowPlayingViewControllerDelegate <NSObject>

@optional

- (void)nowPlayingViewController:(MCDNowPlayingViewController *)arg1 didSendAction:(int)arg2 state:(int)arg3;
- (BOOL)nowPlayingViewController:(MCDNowPlayingViewController *)arg1 shouldDisplayButton:(int)arg2 withImage:(out id*)arg3 tinted:(out BOOL*)arg4;
- (BOOL)nowPlayingViewController:(MCDNowPlayingViewController *)arg1 shouldEnableButton:(int)arg2;
- (BOOL)nowPlayingViewControllerCanLike:(MCDNowPlayingViewController *)arg1;
- (BOOL)nowPlayingViewControllerCanRepeat:(MCDNowPlayingViewController *)arg1;
- (BOOL)nowPlayingViewControllerCanShuffle:(MCDNowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerLike:(MCDNowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerToggleRepeat:(MCDNowPlayingViewController *)arg1;
- (void)nowPlayingViewControllerToggleShuffle:(MCDNowPlayingViewController *)arg1;

@end
