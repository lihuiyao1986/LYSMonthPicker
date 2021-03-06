//
//  LYSDatePicker.h
//  LYSMonthPicker
//
//  Created by jk on 2017/4/12.
//  Copyright © 2017年 Goldcard. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LYSDatePicker : UIView

#pragma mark - 按钮的字体颜色
@property(nonatomic,strong)UIColor *btnFontColor;

#pragma mark - 左按钮的标题
@property(nonatomic,copy)NSString *leftBtnTitle;

#pragma mark - 右按钮的标题
@property(nonatomic,copy)NSString *rightBtnTitle;

#pragma mark - 最低年份
@property(nonatomic,assign)NSDate *minDate;

#pragma mark - 最高年份
@property(nonatomic,assign)NSDate *maxDate;

#pragma mark - 模式
@property(nonatomic,assign)UIDatePickerMode datePickerMode;

#pragma mark - 点击外面是否消失
@property(nonatomic,assign)BOOL dismissTouchOutside;

#pragma mark - 选中操作
@property(nonatomic,copy)void(^SelectedBlock)(NSDate* date);

#pragma mark - 显示
-(void)show;

#pragma mark - 显示
-(void)showInView:(UIView*)targetView;

@end
