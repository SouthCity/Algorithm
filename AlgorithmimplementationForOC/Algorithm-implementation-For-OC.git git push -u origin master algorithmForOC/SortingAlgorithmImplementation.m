//
//  SortingAlgorithmImplementation.m
//  Algorithm-implementation-For-OC.git git push -u origin master algorithmForOC
//
//  Created by chni on 2017/3/20.
//  Copyright © 2017年 孟家豪. All rights reserved.
//

#import "SortingAlgorithmImplementation.h"

@implementation SortingAlgorithmImplementation

#pragma mark 冒泡排序
+ (void)BubbleSort:(NSMutableArray *)array {
    for (NSInteger i=0; i<array.count-1; i++) {
        for (NSInteger j=0; j<array.count-1-i; j++) {
            if ([array objectAtIndex:j] > [array objectAtIndex:j+1]) {
                [array exchangeObjectAtIndex:j withObjectAtIndex:j+1];
            }
        }
    }
}

#pragma mark 选择排序
+ (void)SelectionSort:(NSMutableArray *)array {
    for (int i=0; i<array.count-1; i++) {
        NSInteger temp = [[array objectAtIndex:i] integerValue];
        NSInteger tempIndex = i;
        for (NSInteger j=i+1; j<array.count-1; j++) {
            NSInteger compareNum = [[array objectAtIndex:j] integerValue];
            if (temp > compareNum) {
                temp = compareNum;
                tempIndex = j;
            }
        }
        if (tempIndex != i) {
            [array exchangeObjectAtIndex:i withObjectAtIndex:tempIndex];
        }
    }
}

#pragma mark 插入排序
+ (void)InsertionSort:(NSMutableArray *)array {
    for (NSInteger i=0; i<array.count; i++) {
        NSInteger temp = [[array objectAtIndex:i] integerValue];
        for (NSInteger j=i; j>=0; j--) {
            if (temp > [[array objectAtIndex:j] integerValue]) {
                [array exchangeObjectAtIndex:i withObjectAtIndex:j];
            }
        }
    }
}

#pragma mark 归并排序
+ (void)MergeSort:(NSMutableArray *)array
        tempArray:(NSMutableArray *)tempArr
       startIndex:(NSInteger)start
         endIndex:(NSInteger)end {
    NSInteger mindIndex;
    if (start<end) {
        mindIndex = (start+end)/2;
        [self MergeSort:array tempArray:tempArr startIndex:start endIndex:mindIndex];
        [self MergeSort:array tempArray:tempArr startIndex:mindIndex+1 endIndex:end];
        [self merge:array tempArray:tempArr startIndex:start midIndex:mindIndex endIndex:end];
    }
}

+ (void)merge:(NSMutableArray *)array
    tempArray:(NSMutableArray *)tempArr
   startIndex:(NSInteger)start
     midIndex:(NSInteger)mid
     endIndex:(NSInteger)end {
    NSInteger startTemp = start;
    NSInteger midTemp = mid+1;
    NSInteger index = 0;
    while (start<=mid && midTemp<=end) {
        if (array[start] <= array[midTemp]) {
            tempArr[index++] = array[start++];
        }else{
            tempArr[index++] = array[midTemp++];
        }
    }
    while (start <= mid) {
        tempArr[index++] = array[start++];
    }
    while (midTemp <= end) {
        tempArr[index++] = array[midTemp++];
    }
    for (NSInteger i = 0; i<index; i++) {
        array[startTemp+i] = tempArr[i];
    }
}


@end
