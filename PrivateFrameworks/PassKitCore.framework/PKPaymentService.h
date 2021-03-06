/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class <PKPaymentServiceDelegate>, NSLock, NSString, NSXPCConnection, PKPaymentServiceExportedProxy, PKPaymentWebServiceContext;

@interface PKPaymentService : NSObject <PKPaymentServiceExportedInterface> {
    NSXPCConnection *_connection;
    NSLock *_connectionLock;
    <PKPaymentServiceDelegate> *_delegate;
    PKPaymentServiceExportedProxy *_exportedProxy;
    unsigned long long _paymentInterfacePreventionCounter;
}

@property(retain) NSString * defaultPaymentPassUniqueIdentifier;
@property <PKPaymentServiceDelegate> * delegate;
@property(readonly) bool paymentDeviceIsAvailable;
@property(readonly) bool paymentDeviceIsInField;
@property(readonly) bool paymentDeviceIsInRestrictedMode;
@property(readonly) NSString * secureElementIdentifier;
@property(retain) PKPaymentWebServiceContext * sharedPaymentWebServiceContext;

+ (bool)paymentServiceIsAvailable;

- (void)_activationStateForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(id)arg2;
- (id)_connection;
- (id)_connectionWithTeardownExisting:(bool)arg1 createNewIfNecessary:(bool)arg2;
- (void)_defaultPaymentPassUniqueIdentifier:(id)arg1;
- (void)_deleteMessageWithIdentifier:(id)arg1 fromPassWithUniqueIdentifier:(id)arg2 completion:(id)arg3;
- (id)_errorHandlerWithCompletion:(id)arg1;
- (void)_establishPaymentServiceConnection;
- (void)_paymentDeviceIsAvailableWithCompletion:(id)arg1;
- (void)_paymentDeviceIsInFieldWithCompletion:(id)arg1;
- (void)_paymentDeviceIsInRestrictedModeWithCompletion:(id)arg1;
- (void)_registerForApplicationLifeCycleNotifications;
- (void)_registerForPaymentServiceNotifications;
- (void)_secureElementIdentifierWithCompletion:(id)arg1;
- (void)_sendResumed;
- (void)_sendSuspended;
- (void)_sharedPaymentWebServiceContextWithCompletion:(id)arg1;
- (void)_tearDownPaymentServiceConnection;
- (void)_unregisterForApplicationLifeCycleNotifications;
- (void)_unregisterForPaymentServiceNotifications;
- (void)activatePaymentPassWithUniqueIdentifier:(id)arg1 completion:(id)arg2;
- (long long)activationStateForPaymentPassWithUniqueIdentifier:(id)arg1;
- (void)authorizeInAppPaymentRequest:(id)arg1 completion:(id)arg2;
- (void)authorizePaymentPassWithUniqueIdentifier:(id)arg1 authenticationCredential:(id)arg2 completion:(id)arg3;
- (void)beginPreventingPaymentInterfacePresentation;
- (void)consistencyCheck;
- (void)dealloc;
- (void)deauthorizePaymentPassWithUniqueIdentifier:(id)arg1 completion:(id)arg2;
- (id)defaultPaymentPassUniqueIdentifier;
- (id)delegate;
- (void)deleteMessageWithIdentifier:(id)arg1 fromPassWithUniqueIdentifier:(id)arg2;
- (void)didUpdateDefaultPaymentPassWithUniqueIdentifier:(id)arg1;
- (void)downloadAllPaymentPasses;
- (void)endPreventingPaymentInterfacePresentation;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)insertOrUpdatePaymentTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3 completion:(id)arg4;
- (void)markAllPaymentApplicationsForDelete;
- (void)messagesForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(id)arg2;
- (void)paymentDeviceDidBecomeAvailable;
- (void)paymentDeviceDidBecomeUnavailable;
- (void)paymentDeviceDidEnterField;
- (void)paymentDeviceDidEnterRestrictedMode;
- (void)paymentDeviceDidLeaveField;
- (void)paymentDeviceDidLeaveRestrictedMode;
- (bool)paymentDeviceIsAvailable;
- (bool)paymentDeviceIsInField;
- (bool)paymentDeviceIsInRestrictedMode;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveMessage:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)paymentPassWithUniqueIdentifierDidActivate:(id)arg1;
- (void)paymentPassWithUniqueIdentifierDidAuthorize:(id)arg1;
- (void)paymentPassWithUniqueIdentifierDidBeginTransaction:(id)arg1;
- (void)paymentPassWithUniqueIdentifierDidCompleteTransaction:(id)arg1;
- (void)paymentPassWithUniqueIdentifierDidDeauthorize:(id)arg1;
- (void)paymentPassWithUniqueIdentifierDidFailTransaction:(id)arg1;
- (void)presentPaymentInterfaceWithCompletion:(id)arg1;
- (id)secureElementIdentifier;
- (void)setDefaultPaymentPassUniqueIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNewAuthRandom;
- (void)setNewAuthRandomIfNecessaryWithRetryCount:(unsigned long long)arg1 completion:(id)arg2;
- (void)setSharedPaymentWebServiceContext:(id)arg1;
- (id)sharedPaymentWebServiceContext;
- (void)simulatePaymentPush;
- (void)submitVerificationCode:(id)arg1 verificationData:(id)arg2 forDPANIdentifier:(id)arg3 completion:(id)arg4;
- (void)submitVerificationCode:(id)arg1 verificationData:(id)arg2 forDPANIdentifier:(id)arg3;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(id)arg2;

@end
