//
//  HeroGiftModel.h
//  BaseProject
//
//  Created by tarena on 15/11/2.
//  Copyright © 2015年 Tarena. All rights reserved.
//

#import "BaseModel.h"

@class HeroGiftAModel,HeroGiftDModel,HeroGiftGModel;
@interface HeroGiftModel : BaseModel

@property (nonatomic, strong) NSArray<HeroGiftAModel *> *a;

@property (nonatomic, strong) NSArray<HeroGiftDModel *> *d;

@property (nonatomic, strong) NSArray<HeroGiftGModel *> *g;

@end
@interface HeroGiftAModel : NSObject

@property (nonatomic, copy) NSString *ID;

@property (nonatomic, copy) NSString *name;

@property (nonatomic, strong) NSArray<NSString *> *level;

@end

@interface HeroGiftDModel : NSObject

@property (nonatomic, copy) NSString *ID;

@property (nonatomic, copy) NSString *name;

@property (nonatomic, strong) NSArray<NSString *> *level;

@end

@interface HeroGiftGModel : NSObject

@property (nonatomic, copy) NSString *ID;

@property (nonatomic, copy) NSString *name;

@property (nonatomic, strong) NSArray<NSString *> *level;

@end

