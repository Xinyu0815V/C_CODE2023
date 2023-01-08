#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//函数讲解,什么是函数？把频繁大量使用的功能定义到库中，作为库函数
//  I/O函数：printf，scanf
//  字符操作函数，内存操作函数，时间，日期函数，数学函数
 

//int main() {
//	char arr1[] = { 0 };
//	char arr2[] = "hello,cf";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);//  %s---以字符串形式打印
//	return 0;
//}

//最重要的是学习自定义函数
//get_MAX(int x, int y)
//{
//	int z = 0;
//	if (x > y) {
//		z = x;
//	}
//	else {
//		z = y;
//	}
//	return z;
//}
//int main() {
//	int a = 10;
//	int b = 20;
//	//函数的调用
//	int max = get_MAX(a,b);
//	printf("%d\n", max);
//	return 0;
//}



//编程出错！
//void Swap(int x, int y)//函数返回类型为void表示函数不需要返回任何值
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//int main() {
//	int a = 10;
//	int b = 20;
//	printf("交换前:a = %d, b = %d\n",a , b);
//	Swap(a, b);
//	printf("交换后:a = %d, b = %d\n", a, b);
//	return 0;
//}



//void Swap1(int x, int y)//函数返回类型为void表示函数不需要返回任何值
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//void Swap2(int* x, int* y)//函数返回类型为void表示函数不需要返回任何值
////简单应用指针
//{
//	int z = 0;
//	z = *x;
//	*x = *y;
//	*y = z;
//}
//int main() {
//	int a = 10;
//	int b = 20;
//	printf("交换前:a = %d, b = %d\n", a, b);
//	Swap2(&a, &b);
//	printf("交换后:a = %d, b = %d\n", a, b);
//	return 0;
//}


is_leap_year(n)
{
	if ((n % 4 == 0) && ( n % 100 != 0)|| n % 400 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main() {
	int y = 0;
	for (y = 1000; y <= 2000; y++) {
		if (is_leap_year(y) == 1)
		{
			printf("%d\n", y);
		}
	}
	return 0;
}
