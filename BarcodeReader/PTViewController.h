//
//  PTViewController.h
//  BarcodeReader
//
//  Created by Jason Underhill on 04/10/2012.
//  Copyright (c) 2012 Jason Underhill. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PTViewController : UIViewController
< ZBarReaderDelegate >
{
    UIImageView *resultImage;
    UITextView *resultText;
}

@property (nonatomic, retain) IBOutlet UIImageView *resultImage;
@property (nonatomic, retain) IBOutlet UITextView *resultText;
- (IBAction) scanButtonTapped;
@end
