#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//void Add(int* p) 
//{
//	(*p)++;
//}
//int main() {
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);//1
//
//	Add(&num);
//	printf("%d\n", num);//2
//
//	Add(&num);
//	printf("%d\n", num);//3
//	return 0;
//}

//函数的嵌套应用和链式访问。
//void test3() {
//	printf("你好，嵌套调用");
//}
//
//int test2()
//{
//	test3();
//}
//
//int main() {
//	test2();
//	return 0;
//}

//int main() {
//	int len = strlen("abc");
//	printf("%d\n", len);
//
//	printf("%d\n", strlen("abc"));//一个函数的返回值作为另外一个函数的参数---链式访问。
//	char arr1[20] = { 0 };
//	char arr2[] = "约定上岸";
//	//strcpy(arr1, arr2);
//	printf("%s\n", strcpy(arr1, arr2));//链式访问。
//
//	printf("%d",printf("%d",printf("%d",99)));
//	return 0;
//}


//int main() {
//	int a = 10;
//	int b = 20;
//	//函数声明--告知
//	//函数定义在主函数之后时，一定要先声明。如果定义在主函数之前。则可以不用声明。
//	//告诉编译器有一个函数叫什么，数据类型是什么...要满足先声明，后使用
//	//函数声明一般写在头文件中。
//	int Add(int, int);
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
////函数的定义
//int Add(int x, int y)
//{
//	return x + y;
//}

//#include "Add.h"//引用其它程序员写的头文件
//#include "Sub.h"
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = Add(a, b);
//	int d = Sub(a, b);
//	printf("相加：%d\n", c);
//	printf("相减：%d\n", d);
//	return 0;
//}



//函数递归，少量代码解决问题，减少程序代码量。
//int main()
//{
//	printf("你好！");
//	main();
//	return 0;
//}


//递归举例。
//递归存在限制条件，当满足条件时，递归便不再继续。
//每次递归调用之后越来越接近这个限制条件。
//写递归的时候，不能死递归（栈溢出），要有跳出条件，每次递归逼近跳出条件。
//递归层次不能太深
void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	unsigned int num = 0;
	scanf("%u", &num);
	print(num);//print函数可以打印参数部分数字的每一位
	return 0;
}