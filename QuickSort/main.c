//
//  main.c
//  QuickSort
//
//  Created by yucquan on 2017/4/12.
//  Copyright © 2017年 applemusic.cc. All rights reserved.
//


/*
 快速排序（Quicksort）是对冒泡排序的一种改进。
 快速排序由C. A. R. Hoare在1962年提出。它的基本思想是：通过一趟排序将要排序的数据分割成独立的两部分，其中一部分的所有数据都比另外一部分的所有数据都要小，然后再按此方法对这两部分数据分别进行快速排序，整个排序过程可以递归进行，以此达到整个数据变成有序序列。
 
 
 */
#include <stdio.h>

void quick_sort(int a[], int left, int right)
{
    if (left >= right)/*如果左边索引大于或者等于右边的索引就代表已经整理完成一个组了*/
    {
        return;
    }
    int i = left;
    int j = right;
    int key = a[left];
    
    while (i < j)/*控制在当组内寻找一遍*/
    {
        /*而寻找结束的条件就是，1，找到一个小于或者大于key的数（大于或小于取决于你想升
         序还是降序）2，没有符合条件1的，并且i与j的大小没有反转*/
        while (i < j && key <= a[j])
        {
            j --;/*向前寻找*/
        }
        a[i] = a[j];
        /*找到一个这样的数后就把它赋给前面的被拿走的i的值（如果第一次循环且key是
         a[left]，那么就是给key）*/
        while (i < j && key >= a[i])
        {
            i ++;
        }
        a[j] = a[i];
    }
    
    a[i] = key;
    quick_sort(a, left, i-1);
    quick_sort(a, i + 1, right);
    
}


int main(int argc, const char * argv[]) {
    // insert code here...
    //printf("Hello, World!\n");
    
    int numbers[8] = {100,12,522,98,45,65,78,466};
    quick_sort(numbers, 0,7);
    for (int i = 0; i < 8; i ++) {
        printf("%d  ",numbers[i]);
    }
    printf("\n");
    
    return 0;
}
