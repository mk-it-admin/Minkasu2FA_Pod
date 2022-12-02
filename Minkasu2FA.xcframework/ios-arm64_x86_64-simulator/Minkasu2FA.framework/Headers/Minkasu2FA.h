//
//  Minkasu2FA.h
//  Minkasu2FA
//
//  Created by Sachin Selvaraj on 6/19/18.
//  Copyright © 2018 minkasu. All rights reserved.
//

#import <WebKit/WebKit.h>
#import "Minkasu2FAJSBridge.h"
#import "Minkasu2FAConfig.h"
#import "Minkasu2FAOperationType.h"

NS_ASSUME_NONNULL_BEGIN

@interface Minkasu2FA : NSObject

+ (BOOL) initWithWKWebView: (WKWebView *)webView andConfiguration:(Minkasu2FAConfig *) config error:(NSError**)error;
+ (BOOL) initWithWKWebView: (WKWebView *)webView andConfiguration:(Minkasu2FAConfig *) config inViewController:(nullable UIViewController *)viewController error:(NSError**)error;
+ (BOOL) initReactSDKWithWKWebView: (WKWebView *)webView andConfiguration:(Minkasu2FAConfig *) config reactSDKVersion:(NSString *)reactSDKVersion inViewController:(nullable UIViewController *)viewController error:(NSError**)error;

+ (NSString *) getMinkasu2FAUserAgent;
+ (NSMutableArray *)getAvailableMinkasu2FAOperations;
+ (void)performMinkasu2FAOperation:(Minkasu2FAOperationType)operation merchantCustomerId:(NSString *)merchantCustomerId customTheme:(Minkasu2FACustomTheme * _Nullable)customTheme;

@end

NS_ASSUME_NONNULL_END
