//
//  ViewController.h
//  w3Calculator
//
//  Created by Kuga Kugaraja on 2017-01-25.
//  Copyright © 2017 Kuga Kugaraja. All rights reserved.
//

#import <UIKit/UIKit.h>

//track each button a value and track which one was pressed
#define PLUS 0
#define MINUS 1
#define MULTIPLY 2
#define DIVIDE 3

@interface ViewController : UIViewController
{
    //declare variables
    NSInteger num1;
    NSInteger num2;
    double answer;
    
    //track which was pressed
    NSInteger operand;
    
    //to track multi digits (456)
    NSString *theNumber;
    
    //label variable on screen
    IBOutlet UILabel *lblText;
    
    
    
}

//getter and setter variables
@property NSInteger num1;
@property NSInteger num2;
@property double answer;
@property NSInteger operand;

//this need to be alloc
//nonatomic means sharable between threads
//strong means i want you to instantiate mem for this item (oppasite is weaka)
@property (nonatomic, strong) NSString *theNumber;
@property (nonatomic, strong) IBOutlet UILabel *lblText;

@end

