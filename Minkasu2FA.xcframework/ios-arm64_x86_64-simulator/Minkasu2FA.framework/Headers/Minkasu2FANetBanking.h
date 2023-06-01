//
//  NetBanking.h
//  Minkasu2FA
//
//  Created by Praveena Khanna on 8/7/18.
//  Copyright © 2018 minkasu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BankType.h"

@interface Minkasu2FANetBanking : NSObject

@property  MK2FABankType bankType;
@property (nonatomic, strong) NSString *accountAlias;
@property (nonatomic, strong) NSString *netBankingAccountId;
@property (nonatomic, strong) NSString *accountPrefix;
@property (nonatomic, strong) NSString *accountRef;

- (instancetype)initWithDictionary:(NSDictionary *) netBankingDict;
- (NSDictionary *)dictionary;
@end
