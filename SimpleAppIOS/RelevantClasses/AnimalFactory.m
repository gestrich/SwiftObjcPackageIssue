//
//  SimpleObjectiveCClass.m
//  SimpleFramework
//
//  Created by Bill Gestrich on 6/20/23.
//

#import "AnimalFactory.h"

@import TestPackage;


@implementation AnimalFactory

-(void)printHeader {
    NSLog(@"This app will show a list of animals");
}

-(Zebra *)getZebra {
    return [[Zebra alloc] init];
}

@end
