/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSString;
@protocol AWPingerDelegate;

@interface AWPinger : NSObject {
	id<AWPingerDelegate> _delegate;
	NSString* _currentHost;
	int _scheme;
}
@property(assign, nonatomic) int scheme;
@property(copy, nonatomic) NSString* currentHost;
@property(assign, nonatomic) id<AWPingerDelegate> delegate;
+(id)protocolForScheme:(int)scheme;
-(void)dealloc;
-(id)connection:(id)connection willSendRequest:(id)request redirectResponse:(id)response;
-(void)connection:(id)connection didReceiveResponse:(id)response;
-(void)connection:(id)connection didFailWithError:(id)error;
-(void)pingHost:(id)host withScheme:(int)scheme;
@end

