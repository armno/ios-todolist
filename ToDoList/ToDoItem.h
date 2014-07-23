//
//  ToDoItem.h
//  ToDoList
//
//  Created by ArmNo on 7/23/14.
//  Copyright (c) 2014 ArmNo. All rights reserved.
//

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
