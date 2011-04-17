//
//  RootViewController.h
//  Notebook
//
//  Created by Martin on 11.4.11.
//  Copyright 2011 Martin Hladil. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <RestKit/RestKit.h>

@interface RootViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource, RKObjectLoaderDelegate> {
  
  NSArray *_notes;
  UITableView *_notesView;
  UIBarButtonItem *_newNoteButtonItem;
}

@property (nonatomic, retain) IBOutlet UITableView *notesView;
@property (nonatomic, retain) NSArray *notes;

@end
