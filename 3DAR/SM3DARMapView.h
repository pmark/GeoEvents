//
//  SM3DARMapView.h
//
//  Created by P. Mark Anderson on 3/8/11.
//  Copyright 2011 Spot Metrix, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import "SM3DAR.h"

@interface SM3DARMapView : MKMapView <SM3DAR_Delegate, MKMapViewDelegate>
{
    SM3DAR_Controller *sm3dar;
    CGFloat mapZoomPadding;

    IBOutlet UIView *hudView;
    IBOutlet UIView *compassView;
    IBOutlet UIView *overlayView;
    UIView *containerView;    
}

@property (nonatomic, retain) UIView *containerView;

- (void) init3DAR;
//- (void) add3darContainer;
- (void) add3darContainer:(SM3DAR_Controller *)sm3dar;
- (void) zoomMapToFit;
- (void) zoomMapToFitPointsIncludingUserLocation:(BOOL)includeUser;
- (void) startCamera;
- (void) stopCamera;
- (void) moveToLocation:(CLLocation *)newLocation;
- (void) addBackground;

@end


@protocol SM3DARMapViewDelegate
@end

