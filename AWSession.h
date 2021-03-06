/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSXMLParserDelegate.h"
#import "NSURLConnectionDelegate.h"
#import "NSURLConnectionDataDelegate.h"
#import <Foundation/NSObject.h>
#import "AWURLConnectionDelegate.h"

@class NSXMLParser, AWURLConnection, NSData, NSString, NSMutableData, NSMutableString, AWEnrollmentAccount;
@protocol AWSessionDelegate;

@interface AWSession : NSObject <AWURLConnectionDelegate, NSURLConnectionDelegate, NSURLConnectionDataDelegate, NSXMLParserDelegate> {
	AWURLConnection* tokenConnection;
	AWURLConnection* invalidateConnection;
	NSMutableData* dataBuffer;
	int connectionStatus;
	NSString* status;
	NSXMLParser* responseParser;
	NSMutableString* currentStatus;
	NSMutableString* currentDescription;
	NSMutableString* currentTokenBuffer;
	NSString* currentElement;
	BOOL _isInvalidatingToken;
	BOOL _isRequestingToken;
	NSString* _token;
	id<AWSessionDelegate> _delegate;
	AWEnrollmentAccount* _account;
	int _authenticationType;
	NSString* _authenticationGroup;
	NSString* _authorizationCode;
	NSString* _requestForApp;
	NSString* _requestSigningGroup;
	NSData* _requestSigningKey;
}
@property(retain, nonatomic) NSData* requestSigningKey;
@property(retain, nonatomic) NSString* requestSigningGroup;
@property(retain, nonatomic) NSString* requestForApp;
@property(retain, nonatomic) NSString* authorizationCode;
@property(retain, nonatomic) NSString* authenticationGroup;
@property(assign, nonatomic) int authenticationType;
@property(retain, nonatomic) AWEnrollmentAccount* account;
@property(assign, nonatomic) BOOL isInvalidatingToken;
@property(assign, nonatomic) BOOL isRequestingToken;
@property(assign, nonatomic) id<AWSessionDelegate> delegate;
@property(copy, nonatomic) NSString* token;
-(void)parser:(id)parser parseErrorOccurred:(id)occurred;
-(void)parserDidEndDocument:(id)parser;
-(void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;
-(void)parser:(id)parser foundCharacters:(id)characters;
-(void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;
-(void)parserDidStartDocument:(id)parser;
-(void)URLConnection:(id)connection didFailWithError:(id)error;
-(void)URLConnectionDidFinishLoading:(id)urlconnection;
-(void)URLConnection:(id)connection didReceiveResponse:(id)response;
-(void)URLConnection:(id)connection didReceiveData:(id)data;
-(id)bodyData;
-(void)dealloc;
-(BOOL)tokenIsValid;
-(BOOL)invalidateToken;
-(BOOL)requestToken;
-(id)initWithAccount:(id)account;
-(id)init;
@end

