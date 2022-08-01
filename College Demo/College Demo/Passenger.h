//
//  Passenger.h
//  College Demo
//
//  Created by mashujun on 2022/7/18.
//

#import "Person.h"

NS_ASSUME_NONNULL_BEGIN

@interface Orders : NSObject


@end

@interface Passenger : Person
// @property 属性
// 是否年满 18 岁
@property (nonatomic, assign) BOOL if_adult;
// 历史订单 （数组）
@property (nonatomic, assign) NSMutableArray *history_orders;
// 未出行订单 （数组）
@property (nonatomic, assign) NSMutableArray *available_orders;

// Function 方法
// 去订票
- (void)bookTicket:(NSString *)date;
// 去检票
- (void)checkTicket:(NSString *)date;
@end

NS_ASSUME_NONNULL_END
