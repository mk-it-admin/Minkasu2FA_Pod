//
//  ConfigInfo.h
//  Minkasu2FA
//
//  Created by Praveena Khanna on 6/28/18.
//  Copyright © 2018 minkasu. All rights reserved.
//

#import <Foundation/Foundation.h>
//#import "Minkasu2FAJSBridge.h"
#import "Minkasu2FACustomerInfo.h"
#import "Minkasu2FAOrderInfo.h"
#import "Action.h"
#import "BankType.h"
#import "CardType.h"
#import "PaymentType.h"
#import "NetBanking.h"
#import "PhoneHashAlg.h"
#import "Minkasu2FACustomTheme.h"
#import "Minkasu2FASDKMode.h"
#import "CurrencyCode.h"
#import "BankInfo.h"
#import "Minkasu2FACallbackDelegate.h"
#import "Minkasu2FAPartnerInfo.h"
#import "Minkasu2FAEntityType.h"
#import "EntityInfo.h"

@interface ConfigInfo : NSObject

@property (nonatomic, strong) NSString *merchantName;
@property EntityInfo *entityInfo;
@property (nonatomic, strong) NSString *merchantId;
@property (nonatomic, strong) NSString *merchantCustomerId;
@property (nonatomic, strong) NSString *merchantCustomerPhoneNo;
@property (nonatomic, strong) NSString *merchantAppId;
@property (nonatomic, strong) NSString *cancelCallBack;
@property Minkasu2FACustomerInfo *customerInfo;
@property Minkasu2FAOrderInfo *orderInfo;
@property NetBanking *netBankingInfo;
@property (nonatomic, strong) NSString *cardId;
@property (nonatomic, strong) NSString *cardAlias;
@property (nonatomic, strong) NSString *bankTxnId;

@property Minkasu2FAPartnerInfo *partnerInfo;

@property (nonatomic, strong) NSString *bankPhoneNumHash;
@property PhoneHashAlg bankPhoneNumHashAlg;
@property (nonatomic, strong) NSString *bankPhoneNumSalt;

@property (nonatomic, strong) NSString *reactNativeSDKVersion;

@property  Action action;
@property  BOOL noAadhaar;
@property  MK2FACardType cardType;
@property  MK2FABankType bankType;
@property  PaymentType paymentType;
@property  (nonatomic, assign) NSInteger totalAmountInLowestDenomination;
@property  (nonatomic, assign) NSInteger currencyExponent;
@property  MK2FACurrencyCode currencyCode;
@property  (nonatomic, assign) NSInteger txnTimeoutInMilliSecs;

@property (nonatomic, strong) NSString *firstName;
@property (nonatomic, strong) NSString *lastName;
@property (nonatomic, strong) NSString *customerEmailId;
@property (nonatomic, strong) NSString *customJsonObj;
@property (nonatomic, strong) NSString *bankTimestamp;
@property (nonatomic, strong) NSString *bankDeclaration;

@property (nonatomic, strong) NSString *bankSignature;
@property (nonatomic, strong) NSString *bankCertFingerprint;
@property (nonatomic, strong) NSString *bankCertFingerprintAlg;
@property (nonatomic, strong) NSString *bankDeclarationLocal;
@property Minkasu2FASDKMode sdkMode;
@property (nonatomic, strong) NSString *entryPoint;
@property (nonatomic, strong) NSString *disabledMerchantStr;
@property BOOL fromIframe;
@property (nonatomic, assign) NSInteger iframePosition;

@property Minkasu2FACustomTheme *customTheme;
@property (nonatomic, strong) NSString *globalSessionId;
//@property Minkasu2FAJSBridge *jsInterface;
@property (nonatomic, weak) UIViewController *merchantViewController;
@property (nonatomic, strong) NSTimer *timeoutTimer;
@property BankInfo *bankInfo;
@property (nonatomic, weak) id <Minkasu2FACallbackDelegate> delegate;

@end
