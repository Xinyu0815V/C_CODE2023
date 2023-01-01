#define _CRT_SECURE_NO_WARNINGS 1
//选择语句if...else...
#include<stdio.h>
//int main() {
//	int a = 0;
//	printf("输入1/2：\n");
//	scanf("%d",&a);//赋值语句后不要加'\n',否则打印时会需要重复输入才能起效。
//	if (a == 1) {  //注意：‘=’是赋值,'=='才是判断是否相等。
//		printf("年入百万");
//	}
//	else {
//		printf("回家种田");
//	}
	//int main()//单分支
	//{
	//	int age = 10;
	//	if (age >= 18) {
	//		printf("成年\n");
	//	}
	//	else {
	//		printf("未成年\n");
	//		printf("不可以谈恋爱\n");
	//	}

	//	return 0;
	//}

//int main() {
//	int age = 60;
//	if (age < 18) {
//		printf("未成年\n");
//	}
//	else if(age>=18 && age<=45){
//		printf("青壮年\n");
//	}
//	else {
//		printf("中老年\n");
//	}
//	return 0;
//}

//int test()
//{
//	if (1)
//		return 0;
//	printf("hehe");
//	return 1;
//}
//int main() {
//	test();
//	return 0;
//}


//int main() {
//	int num = 3;
//	//if (num = 5) {
//		//错用赋值符号，不会报错，而且很难发现问题。
//	if(5 == num){
//		//在两个常量数值比较的时候，将常数放在左边，可以有效避免错误。
//		printf("错误示范");
//	}
//	return 0;
//}

//int main() {//输出100以内的奇数。
//	int num = 0;
//	while (num <= 100) {
//		if (num % 2 == 1) {
//			printf("%d是奇数\n",num);
//		}
//		else {
//			printf("%d是偶数\n",num);
//		}
//		num++;
//	}
//	
//	return 0;
//}






//switch语句,适用于多分支的场景。
//int main() {
//	int day = 0;
//	printf("请输入整数1-7：");
//	scanf("%d", &day);
//	switch (day)//必须是整型表达式（字符型也可）
//	{
//	case 1://入口，且case后必须是常量表达式
//		printf("Monday\n");
//		break;//出口
//	case 2:
//		printf("Tuesday\n");
//		break;
//	case 3:
//		printf("Wednesday\n");
//		break;
//	case 4:
//		printf("Thursday\n");
//		break;
//	case 5:
//		printf("Friday\n");
//		break;
//	case 6:
//		printf("Saturday\n");
//		break;
//	case 7:
//		printf("Sunday\n");
//		break;
//	default:
//		printf("请输入整数1-7\n");
//	}
//	return 0;
//}

//switch语句的另一种使用方法。
//switch允许嵌套使用。
int main() {
	int day = 0;
	printf("请输入整数1-7：");
	scanf("%d", &day);
	switch (day)//必须是整型表达式（字符型也可）
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日");
		break;
	case 6:
	case 7:
		printf("休息日");
		break;
	default:
		printf("请输入整数1-7\n");
	}
	return 0;
}