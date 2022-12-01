//
//  Minkasu2FAConfig.h
//  Minkasu2FA
//
//  Created by Praveena Khanna on 6/28/18.
//  Copyright © 2018 minkasu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Minkasu2FACustomerInfo.h"
#import "Minkasu2FAOrderInfo.h"
#import "Minkasu2FACustomTheme.h"
#import "Minkasu2FASDKMode.h"
#import "Minkasu2FAPartnerInfo.h"
#import "Minkasu2FACallbackDelegate.h"

@interface Minkasu2FAConfig : NSObject

@property NSString *_id;
@property NSString *merchantCustomerId;
@property Minkasu2FACustomerInfo *customerInfo;
@property Minkasu2FAOrderInfo *orderInfo;
@property NSString *token;
@property Minkasu2FASDKMode sdkMode;
@property Minkasu2FACustomTheme *customTheme;
@property (nonatomic, strong) UIViewController *merchantViewController;
@property Minkasu2FAPartnerInfo *partnerInfo;
@property (nonatomic, weak) id <Minkasu2FACallbackDelegate> delegate;

@end
