#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//练习上次课程
//int main()
//{
	/*char arr1[] = "abc";
	char arr2[] = { 'a','b','c','\0'};
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%u\n", strlen(arr1));
	printf("%u\n", strlen(arr2));*/
   /* int num = 3;
	printf("%d\n", num);*/
//#define max 1000
//	int year = max;
//	printf("%d\n", year);
	/*enum sex
	{
		male,
		flmale,
		secret
};
	enum sex s = male;
	printf("%d\n", male);
	printf("%d\n", flmale);
	printf("%d\n", secret);
	return 0;
}*/
//int main()
//{
//	extern int age;
//	printf("%d\n", age);
//	return 0;
//}
//本节课程：1、初识条件语句
//	int input = 0;
//	printf("hello寇晨曦,");
//	printf("你有好好学习吗（1/0）?");
//	scanf("%d",&input);
//	if (input == 1)
//	{printf("那你回家种地吧\n");
//	}
//	else 
//	{printf("未来可期！\n");
//	}
//	return 0;
//}
//初识循环语句;
//int main()
//{
//	int line = 0;
//	while (line < 40000)
//	{
//		printf("继续学习:%d\n", line);
//		line++;
//	}
//	if (line == 40000)
//	{
//		printf("好offer！");
//	}
//	return 0;
//}
//3、初识函数
//int Add (int x,int y)
//{int z = x + y;
//return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	int sum = Add(num1, num2);
//	printf("%d", sum);
//	return 0;
//}
//4、初识数组-用下表进行访问
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	char ch[5] = { 'a','b','c' };//不完全初始化,内部隐藏两个0.
//	return 0;
//}
//5、初识操作符①
//int main()
//{
//	//int a = 5;
//	//a = a<<1;//向左移动一位（二进制式移位）
//	//printf("%d\n", a);
//	int arr[10] = { 0 };
//	printf("%u\n", sizeof(arr));//计算数组总大小4*10,单位字节。
//	printf("%u\n", sizeof(arr[0]));
//	int a = sizeof(arr) / sizeof(arr[1]);//计算数组元素个数
//	printf("%d", a);
//		return 0;
//}
//6、初识操作符② ~ 按位取反操作符, 下标引用操作符[] 下标引用操作符()函数调用操作符 
           //++ --前置后置 && ||逻辑操作符 （）(强制类型转换) exp1?exp2:exp3条件操作符
//int main()
//{
//	int a = 2;
//	printf("%d", ~a);//内存中存储的是二进制的补码（将原码看做补码），~为按位取反，a的二
//	                 //进制补码形式按位取反，（包括符号位），然后将补码转换成原码打印出
//					 // 来，原码变反码（符号位不变，按位取反)，反码变补码，加1.（反推）
////例如:2的原码00000000000000000000000000000010 取反：11111111111111111111111111111101
////        反码01111111111111111111111111111101
////        补码01111111111111111111111111111110
	/*int arr[5] = { 1,2,3,4,5 };
	printf("%d", arr[2]);*/
	//int a = 3;
	//int b = a--;//b3a2后置--
	//printf("%d", a);
	//printf("%d", b);
	/*int a = 3;
	int b = 0;
	int c = a|| b;
	printf("%d", c);*/
	/*float a = (int)3.14;
	printf("%f", a);*/
	/*int a = 3;
	int b = 4;*/
	/*int max = 0;*/
	/*if (a > b)
	{
		max = a;
			printf("%d", max);
	}
	else {
		max = b;
		printf("%d", max);
	}*/
	/*max = a > b?a:b;
	printf("%d", max);*/
	/*int c = 5;
	int d = (a = c - 2, b = a - 3, c = b - 4);
	printf("%d", d);
	return 0;
}*/

