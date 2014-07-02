//
//  Person.h
//  Intro_Core_Data
//
//  Created by liuxin on 14-7-2.
//  Copyright (c) 2014年 liu xin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Person : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSNumber * age;
@property (nonatomic, retain) NSString * hair;

@end
