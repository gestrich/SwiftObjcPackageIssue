//
//  SimpleObjectiveCClass.h
//  SimpleFramework
//
//  Created by Bill Gestrich on 6/20/23.
//

@class Zebra;

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AnimalFactory : NSObject

//Available to Objective-C and Swift Clients
-(void)printHeader;

//Only available to other Objective-C Clients
-(Zebra *)getZebra;

@end

NS_ASSUME_NONNULL_END
