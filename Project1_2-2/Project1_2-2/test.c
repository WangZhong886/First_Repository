#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//���������Ͷ���
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




//����һ���޷�������������˳���ӡ����ÿһλ
//ʹ�õݹ�
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
//	scanf("%u", &num);       //%u���޷���ʮ���������ĸ�ʽ
//	print(num);
//	return 0;
//}



//ʹ�õݹ飬�ڲ�ʹ����ʱ���������������ַ����ĳ���
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





//�������������Լ��
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
//	printf("���Լ��Ϊ��%d\n", b);
//	return 0;
//}



//ͳ��һ��1-100֮������˶��ٸ�9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//��λ��Ϊ9
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		//ʮλ��Ϊ9
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}




//����1/1-1/2+1/3-1/4+...+1/99-1/100�Ľ��
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



































































