#include<stdio.h>
#include"sort.h"
#define N 20

int main(int argc,char *argv[])
{
	int a[N];
	printf("原排序结果如下：\n");
	shuchu(a,N);
	printf("冒泡排序结果如下：\n");
        Bubble(a, N);shuchu(a,N);
        printf("插入排序结果如下：\n");
	Insert(a, N);shuchu(a,N);
	printf("选择排序结果如下：\n");
	Select(a, N);shuchu(a,N);
	printf("快速排序结果如下：\n");
	Quicksort(a, N);                                                                     
        return 0;
}
