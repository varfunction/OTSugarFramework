//
//  OTBaseManager.h
//  OTSugarFramework
//
//  Created by ocean on 15/2/6.
//  Copyright (c) 2015年 ocean. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum : NSUInteger {
    OTBaseManagerStatus_Unknown,
    OTBaseManagerStatus_Loading,
    OTBaseManagerStatus_Error,
    OTBaseManagerStatus_Ready
} OTBaseManagerStatus;

@interface OTBaseManager : NSObject

@property (assign, nonatomic) OTBaseManagerStatus status;

@end
