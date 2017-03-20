//
//  SortingAlgorithmImplementation.h
//  Algorithm-implementation-For-OC.git git push -u origin master algorithmForOC
//
//  Created by chni on 2017/3/20.
//  Copyright © 2017年 孟家豪. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SortingAlgorithmImplementation : NSObject

//冒泡排序
+ (void)BubbleSort:(NSMutableArray *)array;

//选择排序
+ (void)SelectionSort:(NSMutableArray *)array;

//插入排序
+ (void)InsertionSort:(NSMutableArray *)array;

@end
