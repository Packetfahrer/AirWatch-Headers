/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWCommunication.h"
#import "AWInterApplicationCommunicationProtocol.h"

@class NSString;

@interface AWApplicationCommunication : AWCommunication <AWInterApplicationCommunicationProtocol> {
	NSString* _targetScheme;
	NSString* _callbackScheme;
}
@property(retain, nonatomic) NSString* callbackScheme;
@property(retain, nonatomic) NSString* targetScheme;
-(void)sendErrorResponseForURL:(id)url;
-(void)sendResponse:(id)response forRequest:(id)request;
-(id)requestFromURL:(id)url;
-(BOOL)handleURL:(id)url;
-(BOOL)canHandleURL:(id)url;
-(id)requestForType:(int)type;
-(void)sendURL:(id)url;
-(BOOL)sendLockRequestWithTime:(id)time withCompletion:(id)completion;
-(BOOL)sendClearPasscodeRequestWithTime:(id)time withCompletion:(id)completion;
-(BOOL)sendRequest:(int)request withCompletion:(id)completion;
-(id)processResponse:(id)response;
-(BOOL)supportsType:(int)type;
-(id)init;
@end
