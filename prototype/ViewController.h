//
//  ViewController.h
//  prototype
//
//  Created by STmb2 on 7/9/18.
//  Copyright © 2018 UpLift. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>
@interface ViewController : UIViewController <WKScriptMessageHandler>
@property (strong, nonatomic) IBOutlet WKWebView *webview;

@end
