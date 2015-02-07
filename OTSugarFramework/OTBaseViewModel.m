//
//  OTBaseViewModel.m
//  OTSugarFramework
//
//  Created by ocean on 15/2/6.
//  Copyright (c) 2015年 ocean. All rights reserved.
//

#import "OTBaseViewModel.h"
#import <BlocksKit.h>

@interface OTBaseViewModel ()

@property (strong, nonatomic) OTBaseModel *model;

@end

@implementation OTBaseViewModel

- (instancetype)initWithModel:(OTBaseModel *)model
{
    if (self = [super init]) {
        self.model = model;
    }
    
    NSArray *test = [NSArray array];
    [test bk_map:^id(id obj) {
        return obj;
    }];
    return self;
}

@end
