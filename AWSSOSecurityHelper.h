/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class AWSecurityWrapper, NSString;

@interface AWSSOSecurityHelper : NSObject {
	NSString* _identifier;
	AWSecurityWrapper* keyWrapper;
}
+(id)summaryFromCertificate:(id)certificate error:(id*)error;
+(id)publicCertificateFromCertificate:(id)certificate password:(id)password error:(id*)error;
+(id)splitQuery:(id)query;
-(id)decrypt:(id)decrypt error:(id*)error;
-(id)encrypt:(id)encrypt withKey:(id)key;
-(id)publicKey;
-(id)initWithIdentifier:(id)identifier error:(id*)error;
@end

