//
//  SimpleClassRoom.h
//  BigAndSmall
//
//  Created by llz on 14-8-29.
//  Copyright (c) 2014年 llz. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Student.h"
#import "Furniture.h"
#import "Tools.h"
//复合就指的是一个类的属性更小类的对象
@interface SimpleClassRoom : NSObject
@property(nonatomic)Student *stu;
@property(nonatomic)Furniture *fur;
@property(nonatomic)Tools *tools;
@end










