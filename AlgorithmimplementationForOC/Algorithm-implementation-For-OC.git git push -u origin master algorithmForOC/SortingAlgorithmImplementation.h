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

//归并排序
+ (void)MergeSort:(NSMutableArray *)array
        tempArray:(NSMutableArray *)tempArr
       startIndex:(NSInteger)start
         endIndex:(NSInteger)end;

//快速排序
+ (void)QuickSort:(NSMutableArray *)array
       startIndex:(NSInteger)start
         endIndex:(NSInteger)end;
@end
