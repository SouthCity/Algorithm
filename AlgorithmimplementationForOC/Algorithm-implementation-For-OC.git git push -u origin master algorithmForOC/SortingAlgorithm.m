//
//  SortingAlgorithm.m
//  Algorithm-implementation-For-OC.git git push -u origin master algorithmForOC
//
//  Created by chni on 2017/3/20.
//  Copyright © 2017年 孟家豪. All rights reserved.
//

#import "SortingAlgorithm.h"
#import "SortingAlgorithmImplementation.h"
@interface SortingAlgorithm ()

@property (strong, nonatomic) NSArray *titleArray;

@end

@implementation SortingAlgorithm

- (void)viewDidLoad {
    [super viewDidLoad];
    NSMutableArray *array = [NSMutableArray arrayWithArray:@[@54,@35,@48,@36,@27,@12,@44,@44,@8,@14,@26,@17,@28]];
    NSMutableArray *tempArray = [NSMutableArray array];
    [SortingAlgorithmImplementation BubbleSort:array];
    [SortingAlgorithmImplementation SelectionSort:array];
    [SortingAlgorithmImplementation InsertionSort:array];
    [SortingAlgorithmImplementation MergeSort:array tempArray:tempArray startIndex:0 endIndex:array.count-1];
    [SortingAlgorithmImplementation QuickSort:array startIndex:0 endIndex:array.count-1];
    [SortingAlgorithmImplementation HeapStort:array];
    NSLog(@"%@",array);
    
    
    // self.clearsSelectionOnViewWillAppear = NO;
    
    // Uncomment the following line to display an Edit button in the navigation bar for this view controller.
    // self.navigationItem.rightBarButtonItem = self.editButtonItem;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - Table view data source

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return self.titleArray.count;
}


- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"SortingAlgorithmCellId" forIndexPath:indexPath];
    cell.textLabel.text = [self.titleArray objectAtIndex:indexPath.row];
    return cell;
}

- (NSArray *)titleArray {
    if (!_titleArray) {
        _titleArray = @[@"冒泡排序",@"选择排序",@"插入排序",@"归并排序",@"快速排序",@"堆排序",@"希尔排序"];
    }
    return _titleArray;
}


 
@end
