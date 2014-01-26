//
//  BTCrystalBall.m
//  CrystalBall
//
//  Created by Barbara Tassa on 1/1/14.
//  Copyright (c) 2014 Joyworks. All rights reserved.
//

#import "BTCrystalBall.h"

@implementation BTCrystalBall

- (NSArray*) predictions {
    if (_predictions == nil){
        _predictions = [[NSArray alloc] initWithObjects:@"It is certain", @"2014 will be the year", @"Wheee", @"Absolutely", @"You Betcha!", @"It couldn't be otherwise", nil];
    }
    return _predictions;
}

- (NSString*) randomPrediction; {
    int random = arc4random_uniform(self.predictions.count);
    return [self.predictions objectAtIndex:random];
}

@end
