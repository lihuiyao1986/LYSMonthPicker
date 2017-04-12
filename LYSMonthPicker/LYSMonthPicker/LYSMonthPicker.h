//
//  LYSMonthPicker.h
//  LYSMonthPicker
//
//  Created by jk on 2017/4/12.
//  Copyright © 2017年 Goldcard. All rights reserved.
//

#import <UIKit/UIKit.h>

@class LYSMonthPicker;

@protocol  LYSMonthPickerDelegate<NSObject>

@optional

- (void)monthPickerWillChangeDate:(LYSMonthPicker *)monthPicker;

- (void)monthPickerDidChangeDate:(LYSMonthPicker *)monthPicker;

@end

@interface LYSMonthPicker : UIPickerView<UIPickerViewDataSource, UIPickerViewDelegate>

@property (nonatomic, weak) id<LYSMonthPickerDelegate> monthPickerDelegate;

@property (nonatomic, strong) NSDate* date;

@property (nonatomic, strong, readonly) NSCalendar *calendar;

@property (nonatomic) NSInteger minimumYear;

@property (nonatomic) NSInteger maximumYear;

@property (nonatomic) BOOL yearFirst;

@property (nonatomic) BOOL wrapMonths;

@property (nonatomic) BOOL enableColourRow;

@property (nonatomic, getter = enableColourRow, setter = setEnableColourRow:) BOOL enableColorRow;

@property (nonatomic, strong) UIFont *font;

@property (nonatomic, strong) UIColor *fontColour;

@property (nonatomic, strong, getter = fontColour, setter = setFontColour:) UIColor *fontColor;


-(id)init;


-(id)initWithDate:(NSDate *)date;


-(id)initWithDate:(NSDate *)date calendar:(NSCalendar *)calendar;


@end
