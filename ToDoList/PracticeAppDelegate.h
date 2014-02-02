//
//  PracticeAppDelegate.h
//  ToDoList
//
//  Created by Carlos Paez on 1/22/14.
//  Copyright (c) 2014 Carlos Paez. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PracticeAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
