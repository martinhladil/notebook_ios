//
//  DetailViewController.h
//  Notebook
//
//  Created by Martin on 17.4.11.
//  Copyright 2011 Martin Hladil. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController {
  
  NSString *_note;
  IBOutlet UILabel *_noteLabel;
  
}

@property (nonatomic, retain) NSString *note;
@property (nonatomic, retain) IBOutlet UILabel *noteLabel;

@end
