//
//  Checklist.h
//  Checklists
//
//  Created by Reed Sweeney on 4/20/14.
//  Copyright (c) 2014 Reed Sweeney. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Checklist : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, strong) NSMutableArray *items;

@end
