//
//  ChecklistItem.h
//  Checklists
//
//  Created by Reed Sweeney on 4/17/14.
//  Copyright (c) 2014 Reed Sweeney. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ChecklistItem : NSObject <NSCoding>

@property (nonatomic, copy) NSString *text;
@property (nonatomic, assign) BOOL checked;

-(void)toggleChecked;

@end
