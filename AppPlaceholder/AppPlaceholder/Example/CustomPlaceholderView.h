//
//  CustomPlaceholderView.h
//  AppPlaceholder
//
//  Created by 刘硕 on 2016/12/1.
//  Copyright © 2016年 刘硕. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CustomPlaceholderView : UIView

@property (nonatomic, copy) void(^reloadClickBlock)(void);

@end
