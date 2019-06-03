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


typedef NS_ENUM(NSUInteger, MapViewMode) {
    MapViewModeDefault,
    MapViewModeCompass,
    MapViewModeFollow,
    MapViewModeDrive
};

@interface MapView : UIView

/**
 When user long press at mapview, Call this method to enable this feature
 */
- (void)enableLongPress;
- (void)disableLongPress;

- (void)startUpdatingLocation;
- (void)moveToUserLocation;
- (void)moveTo:(CLLocationCoordinate2D )location;

- (void)setCenterCoordinate:(CLLocationCoordinate2D)centerCoordinate zoomLevel:(double)zoomLevel animated:(BOOL)animated;
- (void)setCenterCoordinate:(CLLocationCoordinate2D)coordinate animated:(BOOL)animated;

- (void)setMapViewMode:(MapViewMode)mode;

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

/**
 A `CGPoint` indicating the position offset of the compass.
 */
- (void)setCompassOffset:(CGPoint)offset;

- (MarkerManager *)markerManager;
- (void)deselectAll;
- (void)selectMarker:(MapMarker *)m;
- (void)selectMarker:(MapMarker *)m animated:(BOOL)a;
- (void)deselectMarker:(MapMarker *)m;
- (void)deselectMarker:(MapMarker *)m animated:(BOOL)a;

- (void)showSatellite:(BOOL)show;
- (void)removeAllRoutes;

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
 @param padding - The inset of map bounds
 */
- (void)zoomToRoute:(NSString *)rid edgePadding:(UIEdgeInsets)padding;

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

/**
 Clears all on map, keep selected marker
 MarkerTypeTemporary and MarkerTypeRouteCenterPin are ignored (removed)
 */
- (void)clearMap:(BOOL)keepSelected;

/**
Clears all on map, keep  markers in array
@param annotations is array of markers to keep on map
 */
- (void)clearMapKeepAnnotations:(NSArray *)annotations;

@end


