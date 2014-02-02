//
//  TodoItem.h
//  ToDoList
//
//  Created by Carlos Paez on 2/2/14.
//  Copyright (c) 2014 Carlos Paez. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface TodoItem : NSManagedObject

@property (nonatomic, retain) NSString *itemName;
@property (nonatomic) BOOL completed;
@property (nonatomic, retain) NSDate *creationDate;

@end
