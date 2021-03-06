/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSTimer, NSMutableData;

@interface AWDataSamplerModule : NSObject {
	double moduleTimeInterval;
	NSTimer* moduleTimer;
	NSMutableData* allSampleData;
}
+(id)getFilePathWithFileName:(id)fileName;
-(id)trimData:(id)data;
-(int)getSampleCount:(id)count;
-(void)clearBinary:(id)binary;
-(void)storeBinary:(id)binary toFileName:(id)fileName;
-(id)getBinary:(id)binary;
-(id)getData;
-(void)sample;
-(void)tick;
-(void)stopSampling;
-(void)startSampling;
-(id)initWithTimeInterval:(double)timeInterval;
@end

