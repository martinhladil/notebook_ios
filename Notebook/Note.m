//
//  Note.m
//  Notebook
//
//  Created by Martin on 13.4.11.
//  Copyright 2011 Martin Hladil. All rights reserved.
//

#import "Note.h"

@implementation Note

@synthesize content = _content;

+ (NSDictionary*)elementToPropertyMappings {
  return [NSDictionary dictionaryWithKeysAndObjects:
          @"content", @"content",
          nil];
} 

@end
