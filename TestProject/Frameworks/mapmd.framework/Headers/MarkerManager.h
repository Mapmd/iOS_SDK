//
//  MarkerManager.h
//  map_new_engine
//
//  Created by grey on 7/6/16.
//  Copyright © 2016 grey. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Mapbox/Mapbox.h>
#import "MapPolygon.h"
#import "MapMarker.h"





@interface MarkerManager : NSObject

@property (nonatomic, readonly) NSMutableArray *markers;

@property (nonatomic, weak) MGLMapView *mapView;


- (instancetype)initWithMap:(MGLMapView*)map;
- (void)addPolygon:(MapPolygon*)polygon;
- (void)addMarker:(MapMarker *)marker;
- (void)addClusters:(NSURL *)geojson;
- (MapMarker*)addMarker:(NSDictionary*)dict withType:(MarkerType)type;
- (void)addMakerAtCoordinates:(CLLocationCoordinate2D)loc;
- (void)removeMarkers;
- (void)removeMarker:(MapMarker *)marker;
- (void)displayClusters:(NSURL*)source;
- (void)removeMarkerWhithId:(NSString *)markerId;
- (BOOL)haveMarkers;

- (MapMarker*)getDropedPin;
/* against selected */
- (void)hideAllMarkerLabels;

@end
