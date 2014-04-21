//
//  Checklist.m
//  Checklists
//
//  Created by Reed Sweeney on 4/20/14.
//  Copyright (c) 2014 Reed Sweeney. All rights reserved.
//

#import "Checklist.h"

@implementation Checklist

-(id)init
{
    if ((self = [super init])) {
        self.items = [[NSMutableArray alloc] initWithCapacity:20];
    }
    return self;
}

@end
