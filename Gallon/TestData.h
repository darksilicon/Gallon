//
//  TestData.h
//  Gallon
//
//  Created by Darek Bridges on 6/21/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface TestData : NSManagedObject

@property (nonatomic, retain) NSDecimalNumber * pH;
@property (nonatomic, retain) NSDecimalNumber * nitrates;
@property (nonatomic, retain) NSDecimalNumber * nitrites;
@property (nonatomic, retain) NSDecimalNumber * ammonia;
@property (nonatomic, retain) NSDecimalNumber * generalHardness;
@property (nonatomic, retain) NSDecimalNumber * copper;
@property (nonatomic, retain) NSDecimalNumber * phosphate;
@property (nonatomic, retain) NSDecimalNumber * carbonateHardness;
@property (nonatomic, retain) NSDate * timeStamp;

@end
