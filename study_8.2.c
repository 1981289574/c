#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*
利用冒泡排序法
实现一个对整形数组的冒泡排序
*/
/*
思路：
遍历数组，对数组中相邻的两个元素进行比较，如果需要升序，前一个数据大于后一个数据时，交换两个位置上的数据，直到所有的数据比较完，此时，最大的数据已经放在数组的末尾。
除最大数据已经排好序外，其余数据还是无需，对剩余数据采用与上述类似的方式进行处理即可
*/
//冒泡排序（Bubble Sort）
void bubble_sort(int arr[], int len) 
{
    int i, j, temp;
    for (i = 0; i < len - 1; i++)//比较n-1次
        for (j = 0; j < len - 1 - i; j++)
            if (arr[j] > arr[j + 1]) 
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}
int main() 
{
    int arr[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
    int len = (int)sizeof(arr) / sizeof(*arr);
    bubble_sort(arr, len);
    int i;
    for (i = 0; i < len; i++)
        printf("%d ", arr[i]);
    return 0;
}
