/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "AWPasscodeProtocol.h"
#import "AWProxyDelegate.h"
#import "AWProxySetupDelegate.h"
#import "AWCommandManagerDelegate.h"
#import "AWEncryptionKeyProtocol.h"
#import "AWSSOStoreProtocol.h"
#import "AWHMACStoreProtocol.h"
#import "AWAccountStoreProtocol.h"
#import "AWCommunicationDelegate.h"
#import "AWHandlerDelegate.h"

@class AWHandler, AWMasterKeyStore, AWReachability, NSMutableArray, AWStoreManager, NSInvocationOperation, AWApplicationCommunication, AWCommunication, AWSettingsHandler, NSString;
@protocol AWSDKDelegate;

@interface AWController : NSObject <AWCommunicationDelegate, AWHandlerDelegate, AWPasscodeProtocol, AWCommandManagerDelegate, AWSSOStoreProtocol, AWHMACStoreProtocol, AWAccountStoreProtocol, AWEncryptionKeyProtocol, AWProxyDelegate, AWProxySetupDelegate> {
	NSString* _masterKeyContext;
	AWCommunication* _communication;
	AWApplicationCommunication* _appCommunication;
	AWCommunication* _activeCommunication;
	AWHandler* _handler;
	AWSettingsHandler* _settingsHandler;
	NSMutableArray* _settingsArray;
	NSInvocationOperation* _appRequestOperation;
	BOOL _isUnmanaged;
	BOOL _isStarted;
	BOOL _isLoadingCommand;
	BOOL _shouldCheckPasscode;
	BOOL _isLocked;
	BOOL _profileFetchCallDone;
	BOOL _checking;
	BOOL _shouldCheckCommand;
	BOOL _shouldNotifySettings;
	BOOL _settingsFetchLaunchTime;
	BOOL _localRegistrationCheckDone;
	BOOL _fetchedSettings;
	BOOL _proxyCheckDone;
	BOOL _stoppedNetworkActivity;
	BOOL _updateReceived;
	BOOL _authenticationPayloadNeedsUpdate;
	BOOL _ignoreAuthenticationPolicy;
	BOOL _ignoreOfflinePolicy;
	BOOL _shouldSendBeacon;
	BOOL _applicationWillHandleServerURL;
	BOOL _shouldSetupProxy;
	BOOL _shouldCheckNetworkAccessPayload;
	BOOL _shouldCheckDataLossPayload;
	id<AWSDKDelegate> _delegate;
	int _ssoStatus;
	NSString* _callbackScheme;
	NSString* _defaultAnchor;
	AWMasterKeyStore* _masterKeyStore;
	AWStoreManager* _storeManager;
	int _type;
	id _registrationCompletionHandler;
	id _sessionCompletionHandler;
	id _settingsCompletionHandler;
	id _proxySetupCompletion;
	id _authenticationPayloadSet;
	AWReachability* _reachability;
}
@property(retain, nonatomic) AWReachability* reachability;
@property(copy, nonatomic) id authenticationPayloadSet;
@property(copy, nonatomic) id proxySetupCompletion;
@property(copy, nonatomic) id settingsCompletionHandler;
@property(copy, nonatomic) id sessionCompletionHandler;
@property(copy, nonatomic) id registrationCompletionHandler;
@property(assign, nonatomic) int type;
@property(retain, nonatomic) AWStoreManager* storeManager;
@property(retain, nonatomic) AWMasterKeyStore* masterKeyStore;
@property(assign, nonatomic) BOOL shouldCheckDataLossPayload;
@property(assign, nonatomic) BOOL shouldCheckNetworkAccessPayload;
@property(assign, nonatomic) BOOL shouldSetupProxy;
@property(assign, nonatomic) BOOL applicationWillHandleServerURL;
@property(assign, nonatomic) BOOL shouldSendBeacon;
@property(assign, nonatomic) BOOL ignoreOfflinePolicy;
@property(assign, nonatomic) BOOL ignoreAuthenticationPolicy;
@property(retain, nonatomic) NSString* defaultAnchor;
@property(retain, nonatomic) NSString* callbackScheme;
@property(assign, nonatomic) int ssoStatus;
@property(assign, nonatomic) id<AWSDKDelegate> delegate;
+(id)errorWithErrorCode:(int)errorCode andUnderlyingError:(id)error;
+(id)anchorInstance;
+(id)clientInstance;
-(void)shouldLock;
-(void)communicationNotification:(id)notification;
-(BOOL)logout;
-(BOOL)proxyShouldHandleRequest:(id)proxy;
-(id)certificatePassword;
-(id)certificateData;
-(void)resumeNetworkActivity;
-(void)stopNetworkActivity;
-(void)proxyConnectionFailed:(int)failed;
-(void)checkDataLoss;
-(void)evaluateNetworkAccessPayload;
-(void)setAPNSToken:(id)token;
-(void)checkAndSendBeacon;
-(void)authenticationPolicyViolation;
-(void)receivedProfiles:(id)profiles;
-(void)registerSettings:(id)settings;
-(void)initialCheckDoneWithError:(id)error;
-(void)stop;
-(void)start;
-(void)unlock;
-(void)lock;
-(void)wipe;
-(void)checkAndSetUniqueIndentifier;
-(BOOL)settingReturnNoSDKProfile;
-(BOOL)shouldCheckSession;
-(BOOL)canUseAnchor;
-(void)authenticateWithCompletion:(id)completion;
-(BOOL)entryExistsForAccount:(id)account;
-(BOOL)setCertificateForAccount:(id)account account:(id)account2;
-(id)certificateForAccount:(id)account;
-(void)clear;
-(id)encryptionPin;
-(id)storeEncryptionKey;
-(id)hmac;
-(id)account;
-(id)sessionInfo;
-(void)saveSessionInfo:(id)info;
-(BOOL)saveAccount:(id)account;
-(id)nonSharedHMAC;
-(BOOL)saveNonSharedHMAC:(id)hmac;
-(BOOL)saveHMAC:(id)hmac;
-(void)commandManagerFinishedReceivingCommands:(id)commands;
-(id)responseForCommand:(id)command;
-(BOOL)canHandleCommandType:(int)type;
-(void)commandManager:(id)manager failedWithError:(id)error;
-(void)dispatchOperations;
-(BOOL)canHandleURL:(id)url;
-(BOOL)handleOpenURL:(id)url fromApplication:(id)application;
-(void)changeToPin:(id)pin fromPin:(id)pin2 handler:(id)handler;
-(void)setUpWithPin:(id)pin handler:(id)handler;
-(BOOL)unlockWithPin:(id)pin;
-(id)storedPin;
-(BOOL)verifyPin:(id)pin;
-(id)anchorScheme;
-(void)setAnchorScheme:(id)scheme;
-(void)setAppIsRegistered:(BOOL)registered;
-(BOOL)appIsRegistered;
-(id)appCommunicationInstance;
-(id)communicationInstance;
-(void)onActiveNotification:(id)notification;
-(void)offlineStatusChange:(id)change;
-(void)setUnManaged;
-(void)setManaged;
-(void)setUpContext;
-(void)syncResponse:(id)response withCompletion:(id)completion;
-(BOOL)checkAndSetupProxy;
-(void)syncWithProfile:(id)profile;
-(void)startProcess;
-(void)setUpCallback;
-(id)profiles;
-(void)sync;
-(id)initWithType:(int)type;
@end

