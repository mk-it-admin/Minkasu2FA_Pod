//
//  VerifyOTPViewController.h
//  Minkasu2FA
//
//  Created by Praveena Khanna on 7/2/18.
//  Copyright © 2018 minkasu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BaseViewController.h"
#import "VerifyOTPViewModel.h"
#import "CompletionHandlerType.h"

@interface VerifyOTPViewController : BaseViewController<BaseViewControllerDelegate, UITextFieldDelegate>

- (void)setVerifyOTPViewModel:(VerifyOTPViewModel *)viewModel;
@property (nonatomic, strong) NSString *resendOTPOperation;

@property (strong, nonatomic) IBOutlet UINavigationItem *verifyOtpNavigationBar;
@property (strong, nonatomic) IBOutlet UINavigationBar *verifyOtpNavBar;

@property (strong, nonatomic) IBOutlet UILabel *lblHeading;
@property (strong, nonatomic) IBOutlet UILabel *lblEnterSetupCode;
@property (strong, nonatomic) IBOutlet UILabel *lblPartnershipText;
@property (strong, nonatomic) IBOutlet UIButton *btnVerifyOtp;
@property (strong, nonatomic) IBOutlet UIImageView *cardImageView;
@property (weak, nonatomic) IBOutlet UIScrollView *contentScrollView;

@property (strong, nonatomic) IBOutlet UIButton *btnResendCode;

@property (strong, nonatomic) IBOutlet UITextField *txtOtp;

@property (nonatomic, strong) UIView *progressView;
@property (weak, nonatomic) IBOutlet UIImageView *footerView;
@property (weak, nonatomic) IBOutlet UIButton *btnLock;

- (IBAction)onClickResendCode:(id)sender;
- (IBAction)onClickVerifyOtp:(id)sender;

//------Header
@property (strong, nonatomic) IBOutlet UIImageView *imgBank;
@property (strong, nonatomic) IBOutlet UILabel *lblAccountNumber;
@property (strong, nonatomic) IBOutlet UILabel *lblBankAccountBalance;
@property (strong, nonatomic) IBOutlet UILabel *lblAmount;
@property (strong, nonatomic) IBOutlet UIButton *btnClose;
@property (strong, nonatomic) IBOutlet UIView *headerHorizontalDivider;
- (IBAction)onClickClose:(id)sender;

//-------End Header
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *verticalDividerLeadingSpace;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *bankImgWidthConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *txtOtpWidthConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *cardImageViewWidth;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *cardImageViewTrailingSpace;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *contentViewHeight;

-(void) viewModelDidUpdate: (CompletionHandlerType)type data:(NSDictionary *)data;
-(void) viewModelDidError:(NSError *)error type:(CompletionHandlerType )type;

@end
