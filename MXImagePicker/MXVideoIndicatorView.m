//
//  MXVideoIndicatorView.m
//  MXImagePicker
//
//  Created by Meniny on 2015/04/04.
//  Copyright (c) 2015 Meniny. All rights reserved.
//

#import "MXVideoIndicatorView.h"

@implementation MXVideoIndicatorView

- (void)awakeFromNib
{
    [super awakeFromNib];
    
    // Add gradient layer
    CAGradientLayer *gradientLayer = [CAGradientLayer layer];
    gradientLayer.frame = self.bounds;
    gradientLayer.colors = @[
                             (__bridge id)[[UIColor clearColor] CGColor],
                             (__bridge id)[[UIColor blackColor] CGColor]
                             ];
    
    [self.layer insertSublayer:gradientLayer atIndex:0];
}

@end
