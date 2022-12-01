//
//  Minkasu2FACallbackDelegate.h
//  Minkasu2FA
//
//  Created by Habibur Kgisl on 22/07/22.
//  Copyright © 2022 minkasu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Minkasu2FACallbackInfo.h"

NS_ASSUME_NONNULL_BEGIN

@protocol Minkasu2FACallbackDelegate <NSObject>

@optional

- (void) minkasu2FACallback: (Minkasu2FACallbackInfo *_Nonnull) minkasu2FACallbackInfo;

@end

NS_ASSUME_NONNULL_END
