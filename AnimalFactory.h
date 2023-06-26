//
//  AnimalFactory.h
//  SimpleFramework
//
//  Created by Bill Gestrich on 6/20/23.
//

@class Zebra;

//@import TestPackage;
//#import <TestPackage/TestPackage-Swift.h>
//#import "TestPackage-Swift.h"
//#import <TestPackage/Sources/TestPackage/>
//#import "/Users/bill/Library/Developer/Xcode/DerivedData/SimpleApp-axfzvryccojhvubnatlnnuopoyyf/Build/Intermediates.noindex/TestPackage.build/Debug/TestPackage.build/Objects-normal/arm64/TestPackage-Swift.h"

//This works after adding the following to user search paths: ${OBJROOT}/GeneratedModuleMaps$(EFFECTIVE_PLATFORM_NAME)
#import "TestPackage-Swift.h"

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AnimalFactory : NSObject

//Available to Objective-C and Swift Clients
-(void)printHeader;

//Only available to other Objective-C Clients
-(Zebra *)getZebra;

@end

NS_ASSUME_NONNULL_END
