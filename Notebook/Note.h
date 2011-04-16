//
//  Note.h
//  Notebook
//
//  Created by Martin on 13.4.11.
//  Copyright 2011 Martin Hladil. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <RestKit/RestKit.h>

@interface Note : RKObject {
  NSString *_content;
}

@property (nonatomic, retain) NSString *content;

@end
