//
//  Person.h
//  MRC
//
//  Created by zhangcheng on 2017/6/8.
//  Copyright © 2017年 com.zccoder. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Person : NSObject
{
    @public
    NSString *_name;
}

+ (instancetype)person;

- (void)work;

@end
