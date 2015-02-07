//
//  OTUITableViewCellProtocol.h
//  OTSugarFramework
//
//  Created by ocean on 15/2/6.
//  Copyright (c) 2015年 ocean. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol OTUITableViewCellProtocol : OTUIViewProtocol <NSObject>

@required
+ (NSString *)identifier;
+ (CGFloat)heightForViewModel:(id)viewModel;

@end
