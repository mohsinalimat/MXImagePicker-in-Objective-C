//
//  ViewController.m
//  MXImagePicker-OC-Demo
//
//  Created by Meniny on 16/9/3.
//  Copyright © 2016年 Meniny. All rights reserved.
//

#import "ViewController.h"
#import "MXImagePicker.h"

@interface ViewController () <MXImagePickerControllerDelegate>

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    MXImagePickerController *imagePickerController = [MXImagePickerController new];
    imagePickerController.mediaType = MXImagePickerMediaTypeImage;
//    imagePickerController.mediaType = MXImagePickerMediaTypeVideo;
    imagePickerController.allowsMultipleSelection = YES;
    imagePickerController.showsNumberOfSelectedAssets = YES;
    imagePickerController.minimumNumberOfSelection = 1;
    imagePickerController.maximumNumberOfSelection = 10;
    imagePickerController.delegate = self;
    [self presentViewController:imagePickerController animated:YES completion:NULL];
}

- (void)mx_imagePickerControllerDidCancel:(MXImagePickerController *)imagePickerController {
    [self dismissViewControllerAnimated:YES completion:NULL];
}

- (void)mx_imagePickerController:(MXImagePickerController *)imagePickerController didFinishPickingAssets:(NSArray <PHAsset *>*)assets {
    NSLog(@"%@", assets);
    [self dismissViewControllerAnimated:YES completion:NULL];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
