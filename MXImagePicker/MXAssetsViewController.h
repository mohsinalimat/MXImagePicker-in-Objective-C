//
//  MXAssetsViewController.h
//  MXImagePicker
//
//  Created by Meniny on 2015/04/03.
//  Copyright (c) 2015 Meniny. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MXImagePickerController;
@class PHAssetCollection;

@interface MXAssetsViewController : UICollectionViewController

@property (nonatomic, weak) MXImagePickerController *imagePickerController;
@property (nonatomic, strong) PHAssetCollection *assetCollection;

@end
