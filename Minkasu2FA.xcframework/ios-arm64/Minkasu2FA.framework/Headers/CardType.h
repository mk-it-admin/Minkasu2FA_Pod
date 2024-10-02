//
//  CardType.h
//  Minkasu2FA
//
//  Created by Praveena Khanna on 7/13/18.
//  Copyright © 2018 minkasu. All rights reserved.
//

#ifndef MK2FACardType_h
#define MK2FACardType_h
#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, MK2FACardType){
    VISA = 1,
    MASTERCARD = 2,
    AMERICANEXPRESS=3,
    RUPAY=4,
    DINERSCLUB=5
   
};

#endif /* MK2FACardType_h */
