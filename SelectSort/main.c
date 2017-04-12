//
//  main.c
//  SelectSort
//
//  Created by yucquan on 2017/4/12.
//  Copyright © 2017年 applemusic.cc. All rights reserved.
//

/*
 选择排序的基本思想是：每一趟在n-i+1（i=1，2，…n-1）个记录中选取关键字最小的记录作为有序序列中第i个记录。基于此思想的算法主要有简单选择排序、树型选择排序和堆排序。
 简单选择排序的基本思想：第1趟，在待排序记录r[1]~r[n]中选出最小的记录，将它与r[1]交换；第2趟，在待排序记录r[2]~r[n]中选出最小的记录，将它与r[2]交换；以此类推，第i趟在待排序记录r[i]~r[n]中选出最小的记录，将它与r[i]交换，使有序序列不断增长直到全部排序完毕。
 */

#include <stdio.h>

void select_sort(int a[] , int n)
{
    int i,j,pos,temp;
    for (i = 0; i < n-1; i++)
    {
        pos = i;
        for (j = i+1 ; j < n; j ++)
        {
            if (a[j] < a[pos])
                pos = j;
        }
        temp = a[i];
        a[i] = a[pos];
        a[pos] = temp;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
   // printf("Hello, World!\n");
    
    int numbers[8] = {100,12,522,98,45,65,78,466};
    select_sort(numbers, 8);
    for (int i = 0; i < 8; i ++) {
        printf("%d  ",numbers[i]);
    }
    printf("\n");

    return 0;
}
