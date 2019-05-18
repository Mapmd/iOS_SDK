## Create map 
[super viewDidLoad];

MapView *map = [[MapView alloc] init];
map.translatesAutoresizingMaskIntoConstraints = NO;
[self.view insertSubview:map atIndex:0];

## Add observers for events

    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(didDropPin:) name:@"userDidDropPin" object:nil];
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(tapOnFeature:) name:@"tapOnFeature" object:nil];
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(tapOnMap:) name:@"tapOnMap" object:nil];
## Add marker (Annotation/object/place) at map     

    MapMarker *m = [[MapMarker alloc] init];
    m.coordinate = [coord MKCoordinateValue];
    m.title = @"tap here";
    m.selectable = YES;
    m.canShowCallout = YES;
    
    [[self.map markerManager] addMarker:m];
