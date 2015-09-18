//
//  ViewController.h
//  QRImplementation
//
//  Created by Galileo Guzman on 18/09/15.
//  Copyright (c) 2015 Galileo Guzman. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface Home : UIViewController
@property (weak, nonatomic) IBOutlet UIView *viewPreview;
@property (weak, nonatomic) IBOutlet UILabel *lblStatus;

- (IBAction)btnStartQRPressed:(id)sender;
@property (weak, nonatomic) IBOutlet UIButton *btnStartStop;

@end

