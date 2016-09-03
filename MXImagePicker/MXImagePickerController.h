//
//  MXImagePickerController.h
//  MXImagePicker
//
//  Created by Meniny on 2015/04/03.
//  Copyright (c) 2015 Meniny. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Photos/Photos.h>

@class MXImagePickerController;

@protocol MXImagePickerControllerDelegate <NSObject>

@optional
- (void)mx_imagePickerController:(MXImagePickerController *)imagePickerController didFinishPickingAssets:(NSArray <PHAsset *>*)assets;
- (void)mx_imagePickerControllerDidCancel:(MXImagePickerController *)imagePickerController;

- (BOOL)mx_imagePickerController:(MXImagePickerController *)imagePickerController shouldSelectAsset:(PHAsset *)asset;
- (void)mx_imagePickerController:(MXImagePickerController *)imagePickerController didSelectAsset:(PHAsset *)asset;
- (void)mx_imagePickerController:(MXImagePickerController *)imagePickerController didDeselectAsset:(PHAsset *)asset;

@end

typedef NS_ENUM(NSUInteger, MXImagePickerMediaType) {
    MXImagePickerMediaTypeAny = 0,
    MXImagePickerMediaTypeImage,
    MXImagePickerMediaTypeVideo
};

@interface MXImagePickerController : UIViewController

@property (nonatomic, weak) id<MXImagePickerControllerDelegate> delegate;

@property (nonatomic, strong, readonly) NSMutableOrderedSet *selectedAssets;

@property (nonatomic, copy) NSArray *assetCollectionSubtypes;
@property (nonatomic, assign) MXImagePickerMediaType mediaType;

@property (nonatomic, assign) BOOL allowsMultipleSelection;
@property (nonatomic, assign) NSUInteger minimumNumberOfSelection;
@property (nonatomic, assign) NSUInteger maximumNumberOfSelection;

@property (nonatomic, copy) NSString *prompt;
@property (nonatomic, assign) BOOL showsNumberOfSelectedAssets;

@property (nonatomic, assign) NSUInteger numberOfColumnsInPortrait;
@property (nonatomic, assign) NSUInteger numberOfColumnsInLandscape;

@end
