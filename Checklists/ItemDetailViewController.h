//
//  ItemDetailViewController.h
//  Checklists
//
//  Created by Reed Sweeney on 4/17/14.
//  Copyright (c) 2014 Reed Sweeney. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ItemDetailViewController;
@class ChecklistItem;

@protocol ItemDetailViewControllerDelegate <NSObject>

- (void)itemDetailViewControllerDidCancel:(ItemDetailViewController *)controller;
- (void)itemDetailViewController:(ItemDetailViewController *)controller didFinishAddingItem:(ChecklistItem *)item;
- (void)itemDetailViewController:(ItemDetailViewController *)controller didFinishEditingItem:(ChecklistItem *)item;

@end

@interface ItemDetailViewController : UITableViewController <UITextFieldDelegate>

@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *doneBarButton;
@property (nonatomic, strong) ChecklistItem *itemToEdit;
@property (nonatomic, weak) id <ItemDetailViewControllerDelegate> delegate;


- (IBAction)cancel;
- (IBAction)done;

@end
