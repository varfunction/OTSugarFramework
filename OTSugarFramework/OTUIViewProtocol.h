//
//  OTUIViewProtocol.h
//  OTSugarFramework
//
//  Created by ocean on 15/2/6.
//  Copyright (c) 2015年 ocean. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OTBaseViewModel.h"

typedef void(^OTActionOnView)(OTBaseViewModel *viewModel, NSUInteger actionType);

@protocol OTUIViewProtocol <NSObject>

@required
@property (strong, nonatomic) OTBaseViewModel *viewModel;
@property (assign, nonatomic) OTActionOnView actionBlock;

@end
