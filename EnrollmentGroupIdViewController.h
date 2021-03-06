/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITextFieldDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "AirWatch-Structs.h"
#import <UIKit/UITableViewController.h>
#import "AWBottomViewDelegate.h"
#import "UITextViewDelegate.h"

@class UIButton, UITapGestureRecognizer, UITextField, AWBottomView;
@protocol EnrollmentGroupidentificationDelegate;

__attribute__((visibility("hidden")))
@interface EnrollmentGroupIdViewController : UITableViewController <UITextFieldDelegate, AWBottomViewDelegate, UIGestureRecognizerDelegate, UITextViewDelegate> {
	BOOL _showGroupIdRequiredMessage;
	BOOL _showGroupIdInvalidMessage;
	BOOL _showInvalidSessionMessage;
	UITapGestureRecognizer* tapRecognizer;
	UIButton* clearButton;
	BOOL groupIdViewAppeared;
	UITextField* _groupId;
	AWBottomView* _buttonView;
	id<EnrollmentGroupidentificationDelegate> _delegate;
}
@property(assign, nonatomic) id<EnrollmentGroupidentificationDelegate> delegate;
@property(retain, nonatomic) AWBottomView* buttonView;
@property(retain, nonatomic) UITextField* groupId;
-(void)dealloc;
-(unsigned)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(BOOL)disablesAutomaticKeyboardDismissal;
-(void)clearPressed:(id)pressed;
-(void)tappedOutside:(id)outside;
-(void)keyboardWillShow:(id)keyboard;
-(void)keyboardWillHide:(id)keyboard;
-(void)textFieldDidBeginEditing:(id)textField;
-(void)textViewDidEndEditing:(id)textView;
-(void)cancelPressed;
-(void)sendRequest;
-(void)textEntered:(id)entered;
-(BOOL)textFieldShouldReturn:(id)textField;
-(void)reload;
-(void)bottomView:(id)view didSelectBotton:(int)botton;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view viewForFooterInSection:(int)section;
-(float)tableView:(id)view heightForFooterInSection:(int)section;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)didReceiveMemoryWarning;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(id)initWithStyle:(int)style;
@end

