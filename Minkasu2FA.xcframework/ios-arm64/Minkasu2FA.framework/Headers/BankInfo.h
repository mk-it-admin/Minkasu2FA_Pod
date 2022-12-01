//
//  BankInfo.h
//  Minkasu2FA
//
//  Created by Sachin Selvaraj on 5/4/22.
//  Copyright © 2022 minkasu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BankType.h"
#import "PaymentType.h"

NS_ASSUME_NONNULL_BEGIN

@interface BankInfo : NSObject

@property (nonatomic, assign) int authApiVersion;
@property (nonatomic, assign) int consentStringVersion;
@property (nonatomic, assign) NSString *name;

- (instancetype)initWithDictionary:(NSDictionary *)bankDict bankType:(MK2FABankType)bankType paymentType:(PaymentType)paymentType;

@end

NS_ASSUME_NONNULL_END
