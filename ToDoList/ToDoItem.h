//
//  ToDoItem.h
//  ToDoList
//
//  Created by Mo Li on 6/2/15.
//  Copyright (c) 2015 Mo Li. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
