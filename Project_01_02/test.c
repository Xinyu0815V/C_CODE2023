#define _CRT_SECURE_NO_WARNINGS 1
//while循环，break,continue.
#include<stdio.h>
//int main() {
//	int i = 1;
//	while (i <= 10) {
//		if (i == 5) {
//			//break;//可以永久的终止循环
//			continue; //跳过本次循环，继续后边的代码,直接跳转到判断部分，看是否进行下一次循环。
//		}
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}


//EOF--文件结束标志
//int main() {
//	int ch = getchar();
//	printf("%c\n",ch);//输出字符
//	printf("%d\n",ch);//输出对应的ASCII码值
//	putchar(ch);
//	return 0;
//}

//int main() {
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	//键入ctrl+z,可以结束代码。
//	return 0;
//}


//int main() {
//	//循环语句for
//	//不可以在循环体中修改循环变量，防止循环失去控制
//	for (int i = 1; i <= 20; i++){
//		//if (i == 10)
//			//break;
//		if (i == 10)
//			continue;//跳过10，继续执行for循环。
//		printf("%d\n", i);
//	}
//	return 0;
//}


//int main() {
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++) {//尽量采用左闭右开的方式
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//int main() {
//	for (;;) {//判断部分恒为真，会导致死循环
//		printf("哈哈\n");
//	}
//	return 0;
//}

//int main() {
//	int i = 0;
//	int j = 0;
//	//for (i = 0; i < 3; i++) {
//	//	for (j = 0; j < 3; j++) {
//	//		printf("放鸽子\n");  //会打印9次
//	//	}
//	//}
//	for (; i < 3; i++) {
//		for (; j < 3; j++) {
//			printf("放鸽子\n");//打印三次,在有把握控制循环变量之前，尽量不要随意省略，否则可能达到不可预期的效果。
//		}
//	}
//	return 0;
//}

//int main() {//do while循环
//	int i = 1;
//	do 
//	{
//		if (i == 5) 
//			//break;//止于4
//			continue;//止于4
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}



//求n的阶乘
//int main() {
//	int n = 0;
//	int i = 0;
//	int sum = 1;
//	printf("求N的阶乘,输入N：");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++) {
//		sum = sum * i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//求1！+2！+3！+...+n!
//int main() {
//	int n = 0;
//	int i = 0;
//	int k = 0;
//	int jc = 1;
//	int sum = 0;
//	scanf("%d", &k);
//	//for(n = 1;n<=k;n++){
//	//	int jc = 1;//每次循环之前，需要将jc初始为1.
//	//	for (i = 1; i <= n; i++) {
//	//		jc = jc * i;
//	//	}
//	//	sum = sum + jc;
//	//}
//	for (n = 1; n <= 3; n++) {//更加高效
//		jc *= n;
//		sum += jc;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//在一个有序数组中查找具体的某个数字n
//二分查找/折半查找
int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
	int k = 19;
	//在arr中查找k的值
	int sz = sizeof(arr) / sizeof(arr[0]);//数组的元素个数
	int left = 0;//左下标
	int right = sz-1;//右下标
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k) {
			left = mid + 1;
		}
		else if (arr[mid] > k) {
			right = mid - 1;
		}
		else {
			printf("找到了,下标为：%d\n", mid);
			break;//找到就结束
		}
	}
	if (left > right) {
		printf("找不到\n");
	}
	return 0;
}
