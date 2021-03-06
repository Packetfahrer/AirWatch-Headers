/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWProfilePayload.h"

@class NSArray;

@interface AWNetworkAccessPayload : AWProfilePayload {
	BOOL _enableNetworkAccess;
	int _allowCellularConnection;
	int _allowWifiConnection;
	NSArray* _allowedSSIDs;
}
@property(readonly, assign, nonatomic) NSArray* allowedSSIDs;
@property(readonly, assign, nonatomic) int allowWifiConnection;
@property(readonly, assign, nonatomic) int allowCellularConnection;
@property(readonly, assign, nonatomic) BOOL enableNetworkAccess;
+(id)payloadTypeV2;
-(id)initWithDictionary:(id)dictionary;
@end

