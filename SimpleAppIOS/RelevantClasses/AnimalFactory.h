//
//  AnimalFactory.h
//  SimpleFramework
//
//  Created by Bill Gestrich on 6/20/23.
//

//This fails to compile "module 'TestPackage' not found"
//It occurs once you add AnimalFactory.h to the bridging header.
//@import TestPackage;

@class Zebra;

#import <Foundation/Foundation.h>

@interface AnimalFactory : NSObject

//Available to Objective-C and Swift Clients
-(void)printHeader;

//Only available to other Objective-C Clients
-(Zebra *)getZebra;

@end
