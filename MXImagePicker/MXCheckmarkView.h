//
//  MXCheckmarkView.h
//  MXImagePicker
//
//  Created by Meniny on 2015/04/03.
//  Copyright (c) 2015 Meniny. All rights reserved.
//

#import <UIKit/UIKit.h>

IB_DESIGNABLE
@interface MXCheckmarkView : UIView

@property (nonatomic, assign) IBInspectable CGFloat borderWidth;
@property (nonatomic, assign) IBInspectable CGFloat checkmarkLineWidth;

@property (nonatomic, strong) IBInspectable UIColor *borderColor;
@property (nonatomic, strong) IBInspectable UIColor *bodyColor;
@property (nonatomic, strong) IBInspectable UIColor *checkmarkColor;

@end
