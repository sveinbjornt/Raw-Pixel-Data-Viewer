//
//  AppDelegate.h
//  PixelViewer
//
//  Created by Sveinbjorn Thordarson on 19/06/15.
//  Copyright (c) 2015 Sveinbjorn Thordarson. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "GLPixelView.h"
#import "PixelBuffer.h"

#define PIXEL_FORMATS [NSArray arrayWithObjects: @"RGBPixelFormat", nil]

@interface AppDelegate : NSObject <NSApplicationDelegate, NSTextFieldDelegate>
{
    IBOutlet id mainWindow;
    
    IBOutlet id fileIconImageView;
    IBOutlet id filePathTextField;
    IBOutlet id fileMD5TextField;
    
    IBOutlet id presetPopupButton;
    IBOutlet id formatPopupButton;
    IBOutlet id widthTextField;
    IBOutlet id heightTextField;
    IBOutlet id offsetTextField;
    IBOutlet id scaleTextField;
    IBOutlet id bufferInfoTextField;
    
    IBOutlet id scaleSlider;
    IBOutlet id widthSlider;
    IBOutlet id heightSlider;
    IBOutlet id offsetSlider;
    
    IBOutlet id pixelScrollView;
    
    GLPixelView *glView;
    PixelBuffer *pixelBuffer;
    
    NSArray *resolutions;
}

@end

