/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AirWatch-Structs.h"
#import "UITableViewDataSource.h"
#import <UIKit/UIViewController.h>
#import "UITableViewDelegate.h"
#import "MKMapViewDelegate.h"

@class NSMutableArray, UIView, MKMapView, UITableView, CLLocation, UIBarButtonItem, MKPolyline, MKPolylineView, UIToolbar;

__attribute__((visibility("hidden")))
@interface LocationViewController : UIViewController <MKMapViewDelegate, UITableViewDelegate, UITableViewDataSource> {
	MKMapView* _mapView;
	UITableView* _tableView;
	BOOL _didUpdateRegion;
	CLLocation* _location;
	UIView* _activeView;
	int _segmentType;
	int _currentViewType;
	UIBarButtonItem* _mapItem;
	UIBarButtonItem* _listItem;
	NSMutableArray* _locationList;
	MKPolyline* _routeLine;
	MKPolylineView* _routeLineView;
	BOOL _historyZoomed;
	UIToolbar* _toolbar;
	BOOL _isConfigured;
}
-(void)setupBranding;
-(void)removeAnnotations;
-(id)mapView:(id)view viewForOverlay:(id)overlay;
-(void)showPolyLines;
-(void)locationUpdateReceived:(id)received;
-(void)showAnnotations;
-(id)mapView:(id)view viewForAnnotation:(id)annotation;
-(void)rightBarItemTapped:(id)tapped;
-(id)configureCell:(id)cell atIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)mapView:(id)view didUpdateUserLocation:(id)location;
-(void)segmentControlValueChanged:(id)changed;
-(void)dealloc;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
@end
