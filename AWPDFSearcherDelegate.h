/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AirWatch-Structs.h"
#import "NSObject.h"


@protocol AWPDFSearcherDelegate <NSObject>
-(void)scanner:(id)scanner didFailToScanPage:(CGPDFPageRef)scanPage;
-(void)scanner:(id)scanner didFinishScanningPage:(CGPDFPageRef)page;
-(void)scanner:(id)scanner didFindTextOnPage:(CGPDFPageRef)page;
@end
