//
//  MXAssetCell.h
//  MXImagePicker
//
//  Created by Meniny on 2015/04/03.
//  Copyright (c) 2015 Meniny. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MXVideoIndicatorView;

@interface MXAssetCell : UICollectionViewCell

@property (weak, nonatomic) IBOutlet UIImageView *imageView;
@property (weak, nonatomic) IBOutlet MXVideoIndicatorView *videoIndicatorView;

@property (nonatomic, assign) BOOL showsOverlayViewWhenSelected;

@end
