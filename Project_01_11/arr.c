#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//数组：一组相同类型元素的集合
//int main()
//{
//	//一维数组的创建和初始化
//	int arr1[6] = { 1,2,3,4,5,6 };//完全初始化
//	int arr2[6] = { 1,2,3,4,5, };//不完全初始化
//	//[]内只能放入常量表达式
//	char ch1[5] = {"abc"};
//	char ch2[] = {'a','b','c'};
//	int i = 0;
//	//for (i = 0; i < 6; i++) {
//	//	printf("%d\n", arr2[i]);
//	//}
//	//printf("%s\n", ch1);
//	//printf("%s\n", ch2);
//	printf("%d\n", strlen(ch1));//3
//	printf("%d\n", strlen(ch2));//随机值
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };//初始化第一个元素为0，其余元素都默认为0；
//	arr[4] = 5;
//	//printf("%d", arr[4]);
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr[0]));
//	printf("===================\t");
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	//二维数组的初始化
//	//int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};//完全初始化
//	//int arr[3][4] = {1,2,3,4,5,6};//不完全初始化--后边补0
//	int arr[3][4] = { {1,2},{3,4},{5,6} };
//	//二维数组初始化时，行可以省略，但每行有多少元素不可以省略。
//	//char ch[3][10];
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			//printf("%d ",arr[i][j]);
//			printf("&arr[%d][%d] = %p\n", i,j,&arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//数组作为函数参数

//void bubble_sort(int arr[],int sz)
//{
//	//确定求多少遍
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序的过程
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//交换
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = {9,8,7,6,5,4,3,2,1,0};
//	//排序为升序---冒泡排序
//	//计算数组元素个数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}



//数组名是数组首元素的地址
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", &arr[0]);
//	printf("%p\n", arr);
//	int sz = sizeof(arr);
//	//sizeof(数组名);---数组名表示整个数组--计算的是整个数组的大小--单位是字节
//	//&数组名--数组名表示整个数组--取出的是整个数组的地址
//	printf("%d\n", sz);
//	return 0;
//}