//
//  MapPolygon.h
//  map_new_engine
//
//  Created by grey on 1/25/17.
//  Copyright © 2017 grey. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Mapbox/MapBox.h>
#import <Mapbox/MGLOverlay.h>

@interface MapPolygon : NSObject <MGLOverlay>

@property (nonatomic, retain) NSString *ObjectId;

@end
