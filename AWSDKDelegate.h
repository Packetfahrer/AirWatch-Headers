/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol AWSDKDelegate <NSObject>
-(void)resumeNetworkActivity;
-(void)stopNetworkActivity;
-(void)unlock;
-(void)lock;
-(void)wipe;
-(void)receivedProfiles:(id)profiles;
-(void)initialCheckDoneWithError:(id)error;
@end

