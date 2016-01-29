//
//  LKOnboardingViewController.h
//  Pods
//
//  Created by Rizwan Sattar on 1/25/16.
//
//

#import <LaunchKit/LaunchKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LKOnboardingViewController : LKViewController

@property (copy, nonatomic, nullable) LKRemoteUIDismissalHandler dismissalHandler;

- (void) setActualOnboardingUI:(UIViewController *)actualOnboardingUI;
- (void) finishOnboardingWithResult:(LKViewControllerFlowResult)result;

@end

NS_ASSUME_NONNULL_END