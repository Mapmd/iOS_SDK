//
//  ApiProvider.h
//  mapmd
//
//  Created by user on 4/13/19.
//  Copyright © 2019 simpals. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

static NSString *MSearchOperationFinish = @"MSearchOperationFinish";
static NSString *MGeocodeDidFinish = @"MGeocodeDidFinish";
#define apiDomain @"https://map.md/api/"

@interface ApiProvider : NSObject

+ (instancetype)shared;

- (void)search:(NSString *)query;
/**
Geocoding place
Return nearest city, street, building and company by geo_point
@param location - is NSValue from CLLocationCoordinate2D
 
on result You will receive NSNotification named "MGeocodeDidFinish"
 */
- (void)geocode:(NSValue *)location;

/**
Get all categories
 */
- (void)getCategories:( void(^)(NSDictionary *))result;
- (void)getObjects:(NSString *)category_id  response:( void(^)(NSDictionary *))result;



/**
 You can get session to make your requests to API
 return: URLSession */

- (NSURLSession *)getSession;

@end

NS_ASSUME_NONNULL_END
