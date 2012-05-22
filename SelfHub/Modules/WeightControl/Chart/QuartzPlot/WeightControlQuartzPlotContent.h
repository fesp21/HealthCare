//
//  WeightControlQuartzPlot.h
//  SelfHub
//
//  Created by Eugine Korobovsky on 10.05.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WeightControl.h"
#import "WeightControlVerticalAxisView.h"
#import "WeightControlHorizontalAxisView.h"

#import <QuartzCore/QuartzCore.h>

@class WeightControl;
@class WeightControlVerticalAxisView;
@class WeightControlHorizontalAxisView;

@interface WeightControlQuartzPlotContent : UIView <UIScrollViewDelegate> {
    float drawingOffset;
    float verticalGridLinesWidth;
    float verticalGridLinesInterval;
    NSTimeInterval timeDimension;   // msec/px
    NSTimeInterval timeStep;        // time interval betveen vertical grid lines
    
    float horizontalGridLinesWidth;
    float horizontalGridLinesInterval;
    
    NSUInteger plotXOffset;     // start drawing plot from vertical grid line with this number
    float plotYExpandFactor;    // expand y axis by this factor
    float weightLineWidth;
    float weightPointRadius;
    
    float previousScale;
    
    
    float yAxisFrom, yAxisTo;
}

@property (nonatomic, assign) WeightControl *delegateWeight;
@property (nonatomic, assign) WeightControlVerticalAxisView *weightGraphYAxisView;
@property (nonatomic, assign) WeightControlHorizontalAxisView *weightGraphXAxisView;

- (void)initializeGraph;
- (NSArray *)calcYRangeFromDates:(NSDate *)fromDate toDate:(NSDate *)toDate;
- (float)convertWeightToY:(float)weight;
- (NSUInteger)daysFromDate:(NSDate *)fromDate toDate:(NSDate *)toDate;

- (void)performUpdatePlot;

//- (void)setTransformWithoutScaling:(CGAffineTransform)newTransform;

@end
