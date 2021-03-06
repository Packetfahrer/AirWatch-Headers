/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class UIImage, NSString;

@interface ApplicationInfo : NSObject {
	BOOL _allowDeletion;
	BOOL _updateAvailable;
	BOOL _didFetchIconImage;
	NSString* _appName;
	NSString* _bundleId;
	NSString* _scheme;
	UIImage* _appIconImage;
	NSString* _largeIconUrl;
	NSString* _mediumIconUrl;
	NSString* _smallIconUrl;
	int _notificationNumber;
	NSString* _appVersion;
	NSString* _buildVerison;
	NSString* _appInstalledVersion;
	NSString* _appInstaledBuildVersion;
	unsigned _appState;
	int _appType;
	int _appPushMode;
	NSString* _webClipUrl;
	NSString* _publicAppUrl;
	NSString* _uniqueIdentifier;
}
@property(retain, nonatomic) NSString* uniqueIdentifier;
@property(retain, nonatomic) NSString* publicAppUrl;
@property(retain, nonatomic) NSString* webClipUrl;
@property(assign, nonatomic) BOOL didFetchIconImage;
@property(assign, nonatomic) int appPushMode;
@property(assign, nonatomic) int appType;
@property(assign, nonatomic) unsigned appState;
@property(assign, nonatomic) BOOL updateAvailable;
@property(assign, nonatomic) BOOL allowDeletion;
@property(retain, nonatomic) NSString* appInstaledBuildVersion;
@property(retain, nonatomic) NSString* appInstalledVersion;
@property(retain, nonatomic) NSString* buildVerison;
@property(retain, nonatomic) NSString* appVersion;
@property(assign, nonatomic) int notificationNumber;
@property(retain, nonatomic) NSString* smallIconUrl;
@property(retain, nonatomic) NSString* mediumIconUrl;
@property(retain, nonatomic) NSString* largeIconUrl;
@property(retain, nonatomic) UIImage* appIconImage;
@property(retain, nonatomic) NSString* scheme;
@property(retain, nonatomic) NSString* bundleId;
@property(retain, nonatomic) NSString* appName;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(void)dealloc;
-(id)initWithDictionary:(id)dictionary;
@end

