//
//  Student.h
//  Test
//
//  Created by tanxch on 2022/7/20.
//

#ifndef Student_h
#define Student_h
@interface Student : NSObject

@property NSString *name;
@property NSString *major;
@property NSUInteger age;

- (void)study:(float)time;

@end
#endif /* Student_h */
