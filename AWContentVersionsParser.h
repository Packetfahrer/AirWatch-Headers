/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWXMLParser.h"

@class AWContentVersion, NSMutableArray;

@interface AWContentVersionsParser : AWXMLParser {
	NSMutableArray* parsedResult;
	AWContentVersion* contentVersion;
	BOOL isValid;
}
-(void)parserDidEndDocument:(id)parser;
-(void)parser:(id)parser parseErrorOccurred:(id)occurred;
-(void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;
-(void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;
-(id)init;
-(void)dealloc;
@end

