//
//  main.c
//  BubbleSort
//
//  Created by yucquan on 2017/4/12.
//  Copyright © 2017年 applemusic.cc. All rights reserved.
//

/*
 冒泡排序（Bubble Sort），是一种计算机科学领域的较简单的排序算法。
 它重复地走访过要排序的数列，一次比较两个元素，如果他们的顺序错误就把他们交换过来。走访数列的工作是重复地进行直到没有再需要交换，也就是说该数列已经排序完成。
 冒泡排序算法的运作如下：（从后往前）
 比较相邻的元素。如果第一个比第二个大，就交换他们两个。
 对每一对相邻元素作同样的工作，从开始第一对到结尾的最后一对。在这一点，最后的元素应该会是最大的数。
 针对所有的元素重复以上的步骤，除了最后一个。
 持续每次对越来越少的元素重复上面的步骤，直到没有任何一对数字需要比较。
 
 */
#include <stdio.h>

void bubble_sort(int a[],int n)
{
    int i , j , temp;
    for (j = 0; j < n - 1; j ++)  // 外循环 循环n-1次
    {
        for (i = n - 1; i > 0; i --)
        {
            if (a[i]<a[i-1])
            {
                temp = a[i];
                a[i] = a[i-1];
                a[i-1] = temp;
            }
        }
        
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
   // printf("Hello, World!\n");
    
    int numbers[8] = {100,12,522,98,45,65,78,466};
    bubble_sort(numbers, 8);
    for (int i = 0; i < 8; i ++) {
        printf("%d  ",numbers[i]);
    }
    printf("\n");
    
    return 0;
}
