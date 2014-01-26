//
//  BTViewController.h
//  CrystalBall
//
//  Created by Barbara Tassa on 10/19/13.
//  Copyright (c) 2013 Joyworks. All rights reserved.
//

#import <UIKit/UIKit.h>
@class BTCrystalBall; //this is a forward declaration

@interface BTViewController : UIViewController
@property (strong, nonatomic) IBOutlet UILabel *predictionLabel;
@property (strong, nonatomic) BTCrystalBall *crystalBall; 
@property (weak, nonatomic) IBOutlet UIImageView *backgroundImageView;

- (void) makePrediciton;

@end
