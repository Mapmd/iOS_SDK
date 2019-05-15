//
//  MapView.h
//  map
//
//  Created by user on 4/10/19.
//  Copyright © 2019 simpals. All rights reserved.
//

#import <CoreLocation/CoreLocation.h>
#import "SMapHelper.h"


@class MGLMapView;
@class MarkerManager;
@class MapMarker;

@interface MapView : UIView
- (void)enableLongPress;
- (void)disableLongPress;

- (void)startUpdatingLocation;
- (void)moveToUserLocation;
- (void)moveTo:(CLLocationCoordinate2D )location;

- (void)setCenterCoordinate:(CLLocationCoordinate2D)centerCoordinate zoomLevel:(double)zoomLevel animated:(BOOL)animated;
- (void)setCenterCoordinate:(CLLocationCoordinate2D)coordinate animated:(BOOL)animated;


- (void)setZoomLevel:(double)level;

- (CLLocationCoordinate2D)centerCoordinate;
- (BOOL)isUserLocationVisible;
- (BOOL)isUserLocationInCenter;
- (CLLocation *)userLocation;
- (BOOL)isShowingClusters;

/**
 returns based MGLMapView Object
 */
- (MGLMapView *)getMapView;
- (void)setLogoPosition:(MapLogoPosition)position;

- (MarkerManager *)markerManager;
- (void)deselectAll;
- (void)selectMarker:(MapMarker *)m;
- (void)deselectMarker:(MapMarker *)m;
- (void)showSatellite:(BOOL)show;

/**
Display route path like public transport
@param routeInfo
 {
    "points": [ [lng,lat], [lng,lat].. ]
    "id": "route -identifier"
    "color": UIColor
 }
*/
- (void)addRoute:(NSDictionary *)routeInfo;

/**
 Makes visible viewport to fit all route coordinates 
 @param rid - is routeid
 */
- (void)zoomToRoute:(NSString *)rid;

/**
 Add more that one route at map and select one
 @param routes - array of routes
 
 the route {
 "points": [ [lng,lat], [lng,lat].. ]
 "id": "route -identifier"
 "color": UIColor
 }
 
 */
- (void)addNavigationRoutes:(NSArray *)routes;

/**
  set selected route displayed by 'addNavigationRoutes:'
  it find route by id passed in parametr rid
 */
- (void)selectRoute:(NSString *)rid;

/**
 Clears all on map
 */
- (void)clearMap;

@end


