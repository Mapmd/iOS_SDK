//
//  SMapHelper.h
//  map_new_engine
//
//  Created by grey on 3/13/17.
//  Copyright © 2017 grey. All rights reserved.
//

#import <Foundation/Foundation.h>
@import CoreLocation;

@import MapKit;

typedef enum MapLogoPosition {
    MapLogoPositionTopLeft,
    MapLogoPositionTopRight,
    MapLogoPositionBottomLeft,
    MapLogoPositionBottomRight
} MapLogoPosition;


@interface SMapHelper : NSObject

+ (float)randomFloatBetween:(float)smallNumber and:(float)bigNumber;
+ (float)calculateUserDirection:(CLLocationCoordinate2D)loc1 second:(CLLocationCoordinate2D)loc2;

/* return angle in degrees */
+ (double)directionBetweenPoints:(MKMapPoint )sourcePoint dest:(MKMapPoint)destinationPoint;
+ (double)distanceBetween:(CLLocationCoordinate2D)loc1 point:(CLLocationCoordinate2D)loc2;
+ (double)DegreeToRadian:(double)angle;


+ (double)RadianToDegree:(double)angle;

/**
 Convert speed in m/s to Localized Attributed string
 @param sp Type used to represent the speed in meters per second.
 
 */
+ (NSAttributedString*)localizedSpeed:(double)sp;

/**
 Convert time to Localized Attributed string
 @param secs Type used to represent the time in seconds.

 Return format  "hour:min:sec"
 
 */
+ (NSAttributedString*)localizedTime:(int)secs;

@end
