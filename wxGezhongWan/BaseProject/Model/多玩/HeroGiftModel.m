//
//  HeroGiftModel.m
//  BaseProject
//
//  Created by tarena on 15/11/2.
//  Copyright © 2015年 Tarena. All rights reserved.
//

#import "HeroGiftModel.h"

@implementation HeroGiftModel


+ (NSDictionary *)objectClassInArray{
    return @{@"a" : [HeroGiftAModel class], @"d" : [HeroGiftDModel class], @"g" : [HeroGiftGModel class]};
}
@end
@implementation HeroGiftAModel
+ (NSDictionary *)replacedKeyFromPropertyName
{
    return @{@"ID":@"id"};
}
@end


@implementation HeroGiftDModel
+ (NSDictionary *)replacedKeyFromPropertyName
{
    return @{@"ID":@"id"};
}
@end


@implementation HeroGiftGModel
+ (NSDictionary *)replacedKeyFromPropertyName
{
    return @{@"ID":@"id"};
}
@end


