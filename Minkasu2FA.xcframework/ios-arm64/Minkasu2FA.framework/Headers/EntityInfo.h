//
//  EntityInfo.h
//  Minkasu2FA
//
//  Created by Habibur Kgisl on 03/10/22.
//  Copyright © 2022 minkasu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Minkasu2FA/Minkasu2FAEntityType.h"

NS_ASSUME_NONNULL_BEGIN

@interface EntityInfo : NSObject

@property (nonatomic, strong) NSString *entityId;
@property Minkasu2FAEntityType entityType;
@property (nonatomic, strong) NSString *entityToken;

-(NSMutableDictionary *)dictionary;
-(NSMutableDictionary *)dictionaryWithoutToken;

@end

NS_ASSUME_NONNULL_END
