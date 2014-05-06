/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSScanner.h>

@class NSString, NSCharacterSet;

@interface AWScanner : NSScanner {
	NSString* _string;
	unsigned _scanLocation;
	NSCharacterSet* _charactersToSkip;
}
@property(retain, nonatomic) NSCharacterSet* charactersToSkip;
@property(assign, nonatomic) unsigned scanLocation;
@property(readonly, assign, nonatomic) NSString* string;
-(unsigned short)scanUnicode;
-(BOOL)scanCharacter:(unsigned short*)character;
-(unsigned short)previousCharacter;
-(unsigned short)currentCharacter;
-(void)dealloc;
-(id)initWithString:(id)string;
@end
