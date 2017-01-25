//
//  ViewController.m
//  w3Calculator
//
//  Created by Kuga Kugaraja on 2017-01-25.
//  Copyright © 2017 Kuga Kugaraja. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController
//
@synthesize num1, num2, answer, theNumber, operand, lblText;

//auto execute when app loads
- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    //default all variables, variable name should be capitalize
    [self setNum1:0];
    [self setNum2:0];
    [self setAnswer:0.0];
    [self setOperand:PLUS];
    [self setTheNumber:@"0"];
    [self printNumber];
    
}

-(void)printNumber
{
    [lblText setText:self.theNumber];

}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
