//
//  MXVideoIndicatorView.h
//  MXImagePicker
//
//  Created by Meniny on 2015/04/04.
//  Copyright (c) 2015 Meniny. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "MXVideoIconView.h"
#import "MXSlomoIconView.h"

@interface MXVideoIndicatorView : UIView

@property (nonatomic, weak) IBOutlet UILabel *timeLabel;
@property (nonatomic, weak) IBOutlet MXVideoIconView *videoIcon;
@property (nonatomic, weak) IBOutlet MXSlomoIconView *slomoIcon;


@end
