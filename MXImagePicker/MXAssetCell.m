//
//  MXAssetCell.m
//  MXImagePicker
//
//  Created by Meniny on 2015/04/03.
//  Copyright (c) 2015 Meniny. All rights reserved.
//

#import "MXAssetCell.h"

@interface MXAssetCell ()

@property (weak, nonatomic) IBOutlet UIView *overlayView;

@end

@implementation MXAssetCell

- (void)setSelected:(BOOL)selected
{
    [super setSelected:selected];
    
    // Show/hide overlay view
    self.overlayView.hidden = !(selected && self.showsOverlayViewWhenSelected);
}

@end
