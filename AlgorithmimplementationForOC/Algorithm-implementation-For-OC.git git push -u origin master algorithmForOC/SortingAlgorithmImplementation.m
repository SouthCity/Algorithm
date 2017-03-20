//
//  SortingAlgorithmImplementation.m
//  Algorithm-implementation-For-OC.git git push -u origin master algorithmForOC
//
//  Created by chni on 2017/3/20.
//  Copyright © 2017年 孟家豪. All rights reserved.
//

#import "SortingAlgorithmImplementation.h"

@implementation SortingAlgorithmImplementation


+ (void)BubbleSort:(NSMutableArray *)array {
    for (NSInteger i=0; i<array.count-1; i++) {
        for (NSInteger j=0; j<array.count-1-i; j++) {
            if ([array objectAtIndex:j] > [array objectAtIndex:j+1]) {
                [array exchangeObjectAtIndex:j withObjectAtIndex:j+1];
            }
        }
    }
}

+ (void)SelectionSort:(NSMutableArray *)array {
    for (int i=0; i<array.count-1; i++) {
        NSInteger temp = [[array objectAtIndex:i] integerValue];
        NSInteger tempIndex = i;
        for (int j=i+1; j<array.count-1; j++) {
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

+ (void)InsertionSort:(NSMutableArray *)array {
    for (int i=0; i<array.count; i++) {
        NSInteger temp = [[array objectAtIndex:i] integerValue];
        for (int j=i; j>=0; j--) {
            if (temp > [[array objectAtIndex:j] integerValue]) {
                [array exchangeObjectAtIndex:i withObjectAtIndex:j];
            }
        }
    }
}


@end
