/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AirWatch-Structs.h"
#import "AWInitialView.h"
#import "UITextFieldDelegate.h"

@class UITextField;
@protocol ServerGroupIdDelegate;

__attribute__((visibility("hidden")))
@interface ServerGroupIdView : AWInitialView <UITextFieldDelegate> {
	BOOL _showAdditionalDetails;
	BOOL _showAutodiscoveredServerUrl;
	BOOL _showSafariRedirectedGroup;
	UITextField* _serverUrlField;
	UITextField* _groupIdField;
	id<ServerGroupIdDelegate> _delegate;
}
@property(assign, nonatomic) BOOL showSafariRedirectedGroup;
@property(assign, nonatomic) BOOL showAutodiscoveredServerUrl;
@property(assign, nonatomic) id<ServerGroupIdDelegate> delegate;
@property(assign, nonatomic) BOOL showAdditionalDetails;
@property(readonly, assign, nonatomic) UITextField* groupIdField;
@property(readonly, assign, nonatomic) UITextField* serverUrlField;
-(void)buttonPressed;
-(BOOL)textFieldShouldReturn:(id)textField;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

