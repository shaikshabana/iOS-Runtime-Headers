/* Generated by RuntimeBrowser.
 */

@protocol SKUITabBarControllerDelegate <NSObject>

@optional

- (void)tabBarController:(UIViewController<SKUITabBarController> *)arg1 didEndDisplayingViewController:(UIViewController *)arg2;
- (void)tabBarController:(UIViewController<SKUITabBarController> *)arg1 didReselectViewController:(UIViewController *)arg2;
- (void)tabBarController:(UIViewController<SKUITabBarController> *)arg1 didSelectViewController:(UIViewController *)arg2;
- (void)tabBarController:(UIViewController<SKUITabBarController> *)arg1 willDisplayViewController:(UIViewController *)arg2;
- (void)tabBarController:(UIViewController<SKUITabBarController> *)arg1 willTransitionToSize:(struct CGSize { float x1; float x2; })arg2 withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg3;
- (unsigned int)tabBarControllerSupportedInterfaceOrientations:(UIViewController<SKUITabBarController> *)arg1;

@end
