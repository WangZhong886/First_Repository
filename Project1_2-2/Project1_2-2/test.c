#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//函数声明和定义
//#include <stdio.h>
//#include "add.h"
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = add(a, b);
//	printf("%d\n", c);
//	return 0;
//}




//接收一个无符号整数，按照顺序打印它的每一位
//使用递归
//void print(unsigned int num)
//{
//	if (num > 9)
//	{
//		print(num / 10);
//	}
//	printf("%d ", num % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);       //%u是无符号十进制整数的格式
//	print(num);
//	return 0;
//}



//使用递归，在不使用临时变量的情况下求出字符串的长度
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str+1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}





//求两个数的最大公约数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	while (a % b)
//	{
//		int c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("最大公约数为：%d\n", b);
//	return 0;
//}



//统计一下1-100之间出现了多少个9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//个位数为9
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		//十位数为9
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}




//计算1/1-1/2+1/3-1/4+...+1/99-1/100的结果
int main()
{
	int i = 0;
	double sum = 0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum += flag * (1.0 / i);
		flag = -flag;
	}
	printf("%lf\n", sum);
	return 0;
}



































































