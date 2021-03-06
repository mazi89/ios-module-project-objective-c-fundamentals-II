//
//  HLOTimedTask.h
//  TimeTracker
//
//  Created by Karen Rodriguez on 5/11/20.
//  Copyright © 2020 Lambda School. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HLOTimedTask : NSObject

@property (nonatomic) NSString *client;
@property (nonatomic) NSString *summary;
@property (nonatomic) double hourlyWage;
@property (nonatomic) double hoursWorked;
@property (nonatomic, readonly) double total;

- (instancetype)initWithClient:(NSString *)client summary:(NSString *)summary hourlyWage:(double)hourlyWage hoursWorked:(double)hoursWorked;

@end

NS_ASSUME_NONNULL_END
