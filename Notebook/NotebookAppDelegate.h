//
//  NotebookAppDelegate.h
//  Notebook
//
//  Created by Martin on 11.4.11.
//  Copyright 2011 Martin Hladil. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <RestKit/RestKit.h>

@interface NotebookAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet UINavigationController *navigationController;

@end
