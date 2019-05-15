//
//  ViewController.h
//  TestProject
//
//  Created by user on 5/15/19.
//  Copyright © 2019 simpals. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <mapmd/MapView.h>

@import Mapbox;

@interface ViewController : UIViewController

@property (nonatomic, unsafe_unretained) IBOutlet MapView *map;
@end

