#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//递归
//my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "abolish";
//	printf("字符串长度为：%d\n", my_strlen(arr));
//	return 0;
//}


//递归与迭代
//int main()
//{
//	//求n的阶乘。
//	int n = 0;
//	printf("求n的阶乘，输入n：");
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}


//迭代
//Fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Fac(n - 1);
//	}
//}
//int main() {
//	int n = 0;
//	printf("求n的阶乘，输入n：");
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d的阶乘为：%d\n",n, ret);
//	return 0;
//}


//使用迭代求斐波那契数列的第n项
//此写法效率很低，需要重复大量的计算。
//Fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//使用循环来计算
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	printf("求斐波那契数列的第n项，输入n:");
	scanf("%d", &n);
	int ret = Fib(n);
	printf("斐波那契数列的第%d项为:%d\n",n, ret);
	return 0;
}
//代码要灵活应用，要寻找合适的方法去实现代码功能。

