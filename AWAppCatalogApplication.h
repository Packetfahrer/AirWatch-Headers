/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSNumber, UIImage, NSData, NSString, NSDate, NSMutableArray;

@interface AWAppCatalogApplication : NSObject {
	NSNumber* _rating;
	BOOL _managed;
	BOOL _hasEula;
	BOOL _installed;
	NSData* _iconData;
	NSString* _largeIconUrl;
	NSString* _mediumIconUrl;
	NSString* _smallIconUrl;
	NSString* _name;
	NSString* _version;
	UIImage* _iconImage;
	NSString* _url;
	NSString* _sku;
	int _rank;
	NSString* _rootLg;
	NSString* _company;
	NSString* _comments;
	NSString* _verMajor;
	NSString* _verMinor;
	NSString* _verBuild;
	NSDate* _postDate;
	NSString* _license;
	NSString* _bundleId;
	NSMutableArray* _categories;
	NSString* _importance;
	NSString* _department;
	NSString* _supportUrl;
	NSString* _supportPhone;
	NSString* _supportEmail;
	int _reimbursement;
	NSString* _manifestUrl;
	NSString* _feedbackEmail;
	NSString* _locationGroup;
	NSMutableArray* _locationGroups;
	NSNumber* _applicationId;
	NSMutableArray* _screenshotUrls;
	NSString* _applicationDescription;
}
@property(assign, nonatomic) BOOL managed;
@property(assign, nonatomic) int rank;
@property(copy, nonatomic) NSString* comments;
@property(assign, nonatomic) int reimbursement;
@property(copy, nonatomic) NSString* company;
@property(copy, nonatomic) NSString* url;
@property(copy, nonatomic) NSMutableArray* locationGroups;
@property(copy, nonatomic) NSString* locationGroup;
@property(copy, nonatomic) NSString* rootLg;
@property(assign, nonatomic) BOOL installed;
@property(copy, nonatomic) NSString* importance;
@property(copy, nonatomic) NSDate* postDate;
@property(copy, nonatomic) NSNumber* applicationId;
@property(copy, nonatomic) NSString* verBuild;
@property(copy, nonatomic) NSString* verMinor;
@property(copy, nonatomic) NSString* verMajor;
@property(assign, nonatomic) BOOL hasEula;
@property(copy, nonatomic) NSString* sku;
@property(copy, nonatomic) NSMutableArray* categories;
@property(copy, nonatomic) NSString* feedbackEmail;
@property(copy, nonatomic) NSString* supportUrl;
@property(copy, nonatomic) NSString* supportEmail;
@property(copy, nonatomic) NSString* supportPhone;
@property(copy, nonatomic) NSString* department;
@property(copy, nonatomic) NSString* manifestUrl;
@property(copy, nonatomic) NSString* license;
@property(copy, nonatomic) NSString* applicationDescription;
@property(retain, nonatomic) NSMutableArray* screenshotUrls;
@property(copy, nonatomic) NSString* bundleId;
@property(copy, nonatomic) NSString* version;
@property(copy, nonatomic) NSString* name;
@property(copy, nonatomic) NSString* smallIconUrl;
@property(copy, nonatomic) NSString* mediumIconUrl;
@property(copy, nonatomic) NSString* largeIconUrl;
@property(copy, nonatomic) NSData* iconData;
@property(retain, nonatomic) UIImage* iconImage;
-(void)dealloc;
-(void)setValue:(id)value forUndefinedKey:(id)undefinedKey;
-(id)valueForUndefinedKey:(id)undefinedKey;
-(void)setValue:(id)value forKey:(id)key;
-(id)valueForKey:(id)key;
-(id)init;
@end

