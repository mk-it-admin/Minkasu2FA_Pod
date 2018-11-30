//
//  Minkasu2FAOperationType.h
//  Minkasu2FA
//
//  Created by Praveena Khanna on 7/13/18.
//  Copyright © 2018 minkasu. All rights reserved.
//

#ifndef Minkasu2FAOperationType_h
#define Minkasu2FAOperationType_h
#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, Minkasu2FAOperationType){
    MINKASU2FA_CHANGE_PAYPIN = 1,
    MINKASU2FA_ENABLE_BIOMETRY ,
    MINKASU2FA_DISABLE_BIOMETRY ,
};

#endif /* Minkasu2FAOperationType_h */
