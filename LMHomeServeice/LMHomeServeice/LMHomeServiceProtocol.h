//
//  LMHomeServiceProtocol.h
//  LMHomeServeice
//
//  Created by KADFWJ on 2018/1/25.
//  Copyright © 2018年 Lemon Fan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <BeeHive/BHServiceProtocol.h>
@protocol LMHomeServiceProtocol <NSObject,BHServiceProtocol>

-(void)registerViewController:(UIViewController *)vc title:(NSString *)title iconName:(NSString *)iconName;


@end
