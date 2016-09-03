# MXImagePicker-in-Objective-C

`MXImagePicker` is an image picker for iOS platform.

## Installation with CocoaPods

```
pod 'MXImagePicker'
```

## Usage

```objective-c
#import "MXImagePicker.h"
```

```objective-c
<MXImagePickerControllerDelegate>
```

```objective-c
MXImagePickerController *imagePickerController = [MXImagePickerController new];
imagePickerController.mediaType = MXImagePickerMediaTypeImage;
//imagePickerController.mediaType = MXImagePickerMediaTypeVideo;
imagePickerController.allowsMultipleSelection = YES;
imagePickerController.showsNumberOfSelectedAssets = YES;
imagePickerController.minimumNumberOfSelection = 1;
imagePickerController.maximumNumberOfSelection = 10;
imagePickerController.delegate = self;
[self presentViewController:imagePickerController animated:YES completion:NULL];
```

```objective-c
- (void)mx_imagePickerControllerDidCancel:(MXImagePickerController *)imagePickerController {

}

- (void)mx_imagePickerController:(MXImagePickerController *)imagePickerController didFinishPickingAssets:(NSArray <PHAsset *>*)assets {

}
```
