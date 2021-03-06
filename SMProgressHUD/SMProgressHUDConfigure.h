//
//  SMProgressHUDConfigure.h
//  SMProgressHUD
//
//  Created by OrangeLife on 15/10/10.
//  Copyright (c) 2015年 Shenme Studio. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

#ifndef SMProgressHUD_SMProgressHUDConfigure_h
#define SMProgressHUD_SMProgressHUDConfigure_h

#define kSMProgressWindowWidth [UIScreen mainScreen].bounds.size.width
#define kSMProgressWindowHeight [UIScreen mainScreen].bounds.size.height

static const NSTimeInterval kSMProgressHUDLoadingDelay = 30.f;
static const NSTimeInterval kSMProgressHUDAnimationDuration = 0.3f;

static const CGFloat kSMProgressHUDCornerRadius = 5.f;
static const CGFloat  kSMProgressHUDLoadingIconWH = 30.f;
static const CGFloat  kSMProgressHUDContentWidth = 200.f;
static const CGFloat  kSMProgressHUDContentHeight = 100.f;
static const CGFloat kSMProgressHUDAlertViewWidth = 280.f;

static NSString *SMProgressHUDLoadingTip = @"正在加载中...";

#endif
