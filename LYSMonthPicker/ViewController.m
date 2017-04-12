//
//  ViewController.m
//  LYSMonthPicker
//
//  Created by jk on 2017/4/12.
//  Copyright © 2017年 Goldcard. All rights reserved.
//

#import "ViewController.h"
#import "LYSMonthChooser.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
    btn.frame = CGRectMake(0, 120, self.view.bounds.size.width, 44);
    [btn setTitle:@"开始" forState:UIControlStateNormal];
    [btn setTitle:@"开始" forState:UIControlStateHighlighted];
    [btn setTitleColor:[UIColor redColor] forState:UIControlStateNormal];
    [btn addTarget:self action:@selector(btnClicked:) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:btn];
    // Do any additional setup after loading the view, typically from a nib.
}

-(void)btnClicked:(UIButton*)sender{
    LYSMonthChooser *chooser = [LYSMonthChooser new];
    chooser.minYear = 2000;
    chooser.SelectedBlock = ^(NSString *date){
        NSLog(@"you choose Month is %@",date);
    };
    [chooser show];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
