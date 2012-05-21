//
//  WeightControlHorizontalAxisView.h
//  SelfHub
//
//  Created by Eugine Korobovsky on 17.05.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WeightControlHorizontalAxisView : UIView{
    NSTimeInterval startTimeInterval;
    float verticalGridLinesInterval;
    NSTimeInterval step;
};

@property (nonatomic) BOOL isZooming;
@property (nonatomic) float zoomScale;
@property (nonatomic) NSTimeInterval startTimeInterval;
@property (nonatomic) float verticalGridLinesInterval;
@property (nonatomic) NSTimeInterval step;


@end
