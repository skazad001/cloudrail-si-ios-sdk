//
//  CloudRailSI.h
//  CloudRailSI
//
//  Created by Felipe Cesar on 20/04/16.
//  Copyright © 2016 CloudRail. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for CloudRailSI.
FOUNDATION_EXPORT double CloudRailSIVersionNumber;

//! Project version string for CloudRailSI.
FOUNDATION_EXPORT const unsigned char CloudRailSIString[];

// To use the framework just do #import <CloudRailSI/CloudRailSI.h>

#pragma mark - CloudStorage
#import <CloudRailSI/CRDropbox.h>
#import <CloudRailSI/CRBox.h>
#import <CloudRailSI/CRGoogleDrive.h>
#import <CloudRailSI/CROneDrive.h>


#pragma mark - ProfileInterface
#import <CloudRailSI/CRFacebook.h>
#import <CloudRailSI/CRGitHub.h>
#import <CloudRailSI/CRGooglePlus.h>
#import <CloudRailSI/CRLinkedIn.h>
#import <CloudRailSI/CRMicrosoftLive.h>
#import <CloudRailSI/CRSlack.h>
#import <CloudRailSI/CRTwitter.h>
#import <CloudRailSI/CRYahoo.h>
#import <CloudRailSI/CRInstagram.h>


#pragma mark - PointsOfInterestInterface

#import <CloudRailSI/CRFoursquare.h>
#import <CloudRailSI/CRGooglePlaces.h>
#import <CloudRailSI/CRYelp.h>


#pragma mark - PaymentInterface

#import <CloudRailSI/CRPayPal.h>
#import <CloudRailSI/CRStripe.h>

#pragma mark - SMSInterface

#import <CloudRailSI/CRNexmo.h>
#import <CloudRailSI/CRTwilio.h>


#pragma mark - Email
#import <CloudRailSI/CRSendGrid.h>
#import <CloudRailSI/CRMailJet.h>





#pragma mark - Protocols
#import <CloudRailSI/CRCloudStorageProtocol.h>
#import <CloudRailSI/CRProfileProtocol.h>
#import <CloudRailSI/CRAuthenticatingProtocol.h>
#import <CloudRailSI/CRPersistableProtocol.h>
#import <CloudRailSI/CRPointsOfInterestProtocol.h>
#import <CloudRailSI/CRSMSProtocol.h>
#import <CloudRailSI/CREmailProtocol.h>
#import <CloudRailSI/CRPaymentProtocol.h>
#import <CloudRailSI/CRSocialProtocol.h>


#pragma mark - ClourRail types

#import <CloudRailSI/CRAddress.h>
#import <CloudRailSI/CRCloudMetaData.h>
#import <CloudRailSI/CRDateOfBirth.h>
#import <CloudRailSI/CRLocation.h>
#import <CloudRailSI/CRSandboxObject.h>
#import <CloudRailSI/CRCharge.h>
#import <CloudRailSI/CRCreditCard.h>
#import <CloudRailSI/CRSubscription.h>
#import <CloudRailSI/CRSubscriptionPlan.h>
#import <CloudRailSI/CRRefund.h>
#import <CloudRailSI/CRSpaceAllocation.h>

#import <CloudRailSI/CRCloudrail.h>


#import <CloudRailSI/CRError.h>
#import <CloudRailSI/CRExceptionHandler.h>
