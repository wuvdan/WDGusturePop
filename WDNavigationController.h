/**
   截屏全屏返回
   使用方法：
   在AppDelegate.h文件导入WDNavigationController和根控制器TabBarController
   并申明两个属性
   @property (nonatomic, strong) TabBarController *tabBarViewController;
   @property (nonatomic, strong) WDScreenShortView *screenshotView;
   在AppDelegate.m文件进行设置
   self.screenshotView = [[WDScreenShortView alloc] initWithFrame:[UIScreen mainScreen].bounds];
   [self.window insertSubview:self.screenshotView atIndex:0];
   self.screenshotView.hidden = true;
   让自己的NavigationController继承WDNavigationController，其他都按照系统的使用
 */

#import <UIKit/UIKit.h>

@interface WDScreenShortView : UIView

@end

@interface WDNavigationController : UINavigationController

@end
