# Usage info
MapView - is view contained [MGLMapView](https://docs.mapbox.com/ios/api/maps/4.2.0/Classes/MGLMapView.html)
You can use this object to display map and all other things like marker (pin), route (polyline), etc.
Also you can get  MGLMapView object , be shure that you configured it propertly.
## Useriteraction 
**You will receive this notifications :**
* didUpdateUserLocation
* tapOnMap - Notification object is NSDictionary with location
* tapOnFeature
* didSelectAnnotation
* didChangeUserTrackingMode
* didDeselectAnnotation
* didSelectAnnotation

To enable touch recognizers , call method "[map enableLongPress];"
