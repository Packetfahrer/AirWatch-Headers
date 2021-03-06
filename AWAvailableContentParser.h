/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWXMLParser.h"

@class NSDateFormatter, AWContentEntity, NSMutableSet, NSMutableArray, NSMutableDictionary;

@interface AWAvailableContentParser : AWXMLParser {
	NSMutableDictionary* _parsedResult;
	NSMutableArray* _contentListBuffer;
	NSMutableArray* _folderListBuffer;
	AWContentEntity* _currentDocument;
	NSDateFormatter* _dateFormatter;
	NSMutableSet* _contentCategories;
	BOOL isValid;
}
+(int)downloadPriorityFromText:(id)text;
+(int)importancePriorityFromText:(id)text;
-(void)parserDidEndDocument:(id)parser;
-(void)parser:(id)parser parseErrorOccurred:(id)occurred;
-(void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;
-(void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;
-(void)parserDidStartDocument:(id)parser;
-(id)init;
-(void)dealloc;
@end

