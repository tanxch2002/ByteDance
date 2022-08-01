//
//  Passenger.m
//  College Demo
//
//  Created by mashujun on 2022/7/18.
//

#import "Passenger.h"


@implementation Orders

@end

@implementation Passenger

- (void)bookTicket:(NSString *)date
{
    [self.available_orders addObject:date];
}

- (void)checkTicket:(NSString *)date
{
    [self.available_orders removeObject:date];
    [self.history_orders addObject:date];
}
@end
