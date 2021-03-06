/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "AWCommandProcessorDelegate.h"
#import "AWCommandManagerDelegate.h"

@class AWCommandProcessor, NSString, NSOperationQueue, NSMutableArray;

@interface AWCommandManager : NSObject <AWCommandProcessorDelegate, AWCommandManagerDelegate> {
	id<AWCommandManagerDelegate> _delegate;
	NSMutableArray* _registrationArray;
	NSString* _requestIdentifier;
	AWCommandProcessor* _commandProcessor;
	NSOperationQueue* _operationQueue;
}
@property(retain, nonatomic) NSOperationQueue* operationQueue;
@property(retain, nonatomic) AWCommandProcessor* commandProcessor;
@property(retain, nonatomic) NSString* requestIdentifier;
@property(retain, nonatomic) NSMutableArray* registrationArray;
@property(assign, nonatomic) id<AWCommandManagerDelegate> delegate;
+(id)sharedManager;
-(void)commandManager:(id)manager failedWithError:(id)error;
-(id)responseForCommand:(id)command;
-(BOOL)canHandleCommandType:(int)type;
-(id)commandProcessor:(id)processor responseForCommand:(id)command;
-(void)commandProcessorStartedReceivingCommands:(id)commands;
-(void)commandProcessorFinishedReceivingCommands:(id)commands;
-(void)commandProccessor:(id)proccessor failedWithError:(id)error;
-(id)profilesWithPayloadType:(id)payloadType;
-(id)allProfiles;
-(id)appProfile;
-(id)sdkProfile;
-(void)requestRepublishingOfConfigurationCommandsWithCompletion:(id)completion;
-(void)loadCommands;
-(void)unregisterForCommands:(id)commands;
-(void)registerForCommands:(id)commands;
-(id)init;
-(void)dealloc;
-(BOOL)removeApplicationProfiles;
@end

