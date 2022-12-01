//
//  Minkasu2FAPartnerInfo.h
//  Minkasu2FA
//
//  Created by Habibur Kgisl on 22/07/22.
//  Copyright © 2022 minkasu. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Minkasu2FAPartnerInfo : NSObject

@property NSString *merchantId;
@property NSString *merchantName;
@property NSString *transactionId;

-(NSMutableDictionary *)dictionary;

@end

NS_ASSUME_NONNULL_END
