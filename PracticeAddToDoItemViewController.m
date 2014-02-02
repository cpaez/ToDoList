//
//  PracticeAddToDoItemViewController.m
//  ToDoList
//
//  Created by Carlos Paez on 1/26/14.
//  Copyright (c) 2014 Carlos Paez. All rights reserved.
//

#import "PracticeAddToDoItemViewController.h"

@interface PracticeAddToDoItemViewController ()
@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *doneButton;

@end

@implementation PracticeAddToDoItemViewController

//@synthesize managedObjectContext;

- (NSManagedObjectContext *)managedObjectContext {
    NSManagedObjectContext *context = nil;
    id delegate = [[UIApplication sharedApplication] delegate];
    if ([delegate performSelector:@selector(managedObjectContext)]) {
        context = [delegate managedObjectContext];
    }
    return context;
}

- (void) prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender
{
    if (sender != self.doneButton) return;
    
    [[segue destinationViewController] setManagedObjectContext:self.managedObjectContext];
    
    if (self.textField.text.length > 0) {
        NSEntityDescription *entity = [NSEntityDescription entityForName:@"TodoItem" inManagedObjectContext:self.managedObjectContext];
        
        self.todoItem = [[TodoItem alloc]initWithEntity:entity insertIntoManagedObjectContext:self.managedObjectContext];
        self.todoItem.itemName = self.textField.text;
        self.todoItem.completed = NO;
    }
}

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
