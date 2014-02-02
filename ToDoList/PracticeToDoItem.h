//
//  PracticeToDoItem.h
//  ToDoList
//
//  Created by Carlos Paez on 1/26/14.
//  Copyright (c) 2014 Carlos Paez. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PracticeToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
