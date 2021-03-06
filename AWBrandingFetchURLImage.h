/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "AWNetworkConnectionDelegate.h"

@class NSString, AWNetworkConnection;
@protocol AWBrandingImageFetchDelegate;

@interface AWBrandingFetchURLImage : NSObject <AWNetworkConnectionDelegate> {
	AWNetworkConnection* _networkConnection;
	NSString* imageKey;
	id<AWBrandingImageFetchDelegate> delegate;
	NSString* imageUrl;
}
@property(assign, nonatomic) id<AWBrandingImageFetchDelegate> delegate;
@property(retain, nonatomic) NSString* imageUrl;
@property(retain, nonatomic) NSString* imageKey;
-(void)networkConnection:(id)connection receivedResponseData:(id)data;
-(void)networkConnection:(id)connection failedWithError:(id)error;
-(void)fetchImage:(id)image;
-(void)dealloc;
@end

