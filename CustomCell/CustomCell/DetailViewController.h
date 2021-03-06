//
//  DetailViewController.h
//  CustomCell
//
//  Created by 이성재 on 2017. 6. 9..
//  Copyright © 2017년 이성재. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) NSDictionary *detailData;

@property (strong, nonatomic) IBOutlet UIImageView *imgView;
@property (strong, nonatomic) IBOutlet UILabel *nameLabel;
@property (strong, nonatomic) IBOutlet UILabel *amountLabel;
@property (strong, nonatomic) IBOutlet UILabel *valueLabel;

@end
