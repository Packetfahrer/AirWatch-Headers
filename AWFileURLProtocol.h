/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSURLProtocol.h>

@class AWCryptData;

@interface AWFileURLProtocol : NSURLProtocol {
	AWCryptData* _cryptData;
}
@property(retain, nonatomic) AWCryptData* cryptData;
+(BOOL)canInitWithRequest:(id)request;
+(id)fileURLForPath:(id)path;
+(id)canonicalRequestForRequest:(id)request;
-(void)stopLoading;
-(void)startLoading;
-(void)dealloc;
@end
