/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol AWProxyHTTPConnectionDelegate <NSObject>
-(void)HTTPConnection:(id)connection didFailWithError:(id)error;
-(void)HTTPConnectionDidFinishLoading:(id)httpconnection;
-(void)HTTPConnection:(id)connection didReceiveData:(id)data;
-(void)HTTPConnection:(id)connection didReceiveResponse:(id)response;
-(void)HTTPConnection:(id)connection didCancelAuthenticationChallenge:(id)challenge;
-(void)HTTPConnection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;
@end
