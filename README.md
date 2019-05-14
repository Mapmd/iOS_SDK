# iOS_SDK
Library based on MapBox SDK [- github](https://github.com/mapbox/mapbox-gl-native/tree/ios-v4.9.0/platform/ios)
## Requirements
- Mapbox.framework (is in this repo)
- CocoaLumberjack.framework (is in this repo)
- SVGKit.framework  (is in this repo)
- MapKit
- Api key from map.md
- iOS development target 9.0 or higher

## Setup

Set your access token and permissions
- Add a MapmdApiKey key to the Info.plist file with the value of your map.md access token
- Add a NSLocationWhenInUseUsageDescription key to the Info.plist file with the description

In your app target’s General settings tab, in the Linked Frameworks and Libraries section, drag and drop: **Mapbox.framework 
CocoaLumberjack.framework , SVGKit.framework, mapmd.framework**
