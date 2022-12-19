#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
//1、初识常见关键字  extern signed auto typedef static  register寄存器关键字
//void test()
//{
//	static int a = 1;//局部变量跳出工作区自动消除，static
//	//修饰局部变量，局部变量内存属性发生改变从栈区变为静态区，不再自动消除
//	//static修饰全局变量和函数时，全局变量和函数的外部链接属性改为内部链接属性，只在
//	//原有工作区可以调用，不能从另一源文件声明（extern）调用。
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	//auto int num = 3;//auto修饰int，自动产生，自动消除，一般省略
//	//printf("%d\n", num);
//	/*typedef unsigned int u_int;//typedef重新命名关键字，unsigned无符号的
//		u_int num = 100;
//	printf("%d", num);*/
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
// 2、常量和宏。
//define是一个预处理指令，定义常量和宏
//#define max 1000
//int main()
//{
//	int num = max;
//	printf("%d", num);
//	return 0;
//}
//#define Add(x,y) ((x)+(y))//定义宏，宏-就是替换的意思
//int main()
//{
//	printf("%d", Add(2, 3));
//	return 0;
//}
//初识指针
//int main()
//{
//	int a= 4;//a在内存中分配四个字节的空间
//	printf("%p\n", &a);//%p用来打印地址
//	int* pa = &a;//pa为指针变量，用来存放地址
//	//*说明pa是一个指针变量
//	//int说明pa指向的内容是整形变量 
//	*pa = 20;//*解引用操作，*pa就是通过找到pa的地址找到a
//	printf("%d", a);
//	return 0;
//}
//初识结构体
struct stu
{
	char name[20];
	double score;
	int age;
};
int main()
{
	struct stu s = { "寇晨曦",89,22 };
	printf("%s %lf %d\n", s.name, s.score, s.age);
	struct stu* ps = &s;
	printf("%s %lf %d\n", (*ps).name, (*ps).score, (*ps).age);
	printf("%s %lf %d\n", ps->name, ps->score, ps->age);
	return 0;
}
