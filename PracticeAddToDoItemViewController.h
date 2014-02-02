//
//  PracticeAddToDoItemViewController.h
//  ToDoList
//
//  Created by Carlos Paez on 1/26/14.
//  Copyright (c) 2014 Carlos Paez. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TodoItem.h"

@interface PracticeAddToDoItemViewController : UIViewController

@property TodoItem *todoItem;
@property (nonatomic,strong) NSManagedObjectContext *managedObjectContext;

@end
