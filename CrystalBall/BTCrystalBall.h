//
//  BTCrystalBall.h
//  CrystalBall
//
//  Created by Barbara Tassa on 1/1/14.
//  Copyright (c) 2014 Joyworks. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BTCrystalBall : NSObject{
    NSArray *_predictions;
}

@property (strong, nonatomic, readonly) NSArray *predictions; //the readonly attribute helps

- (NSString*) randomPrediction;


@end
