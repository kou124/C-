#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
//1����ʶ�����ؼ���  extern signed auto typedef static  register�Ĵ����ؼ���
//void test()
//{
//	static int a = 1;//�ֲ����������������Զ�������static
//	//���ξֲ��������ֲ������ڴ����Է����ı��ջ����Ϊ��̬���������Զ�����
//	//static����ȫ�ֱ����ͺ���ʱ��ȫ�ֱ����ͺ������ⲿ�������Ը�Ϊ�ڲ��������ԣ�ֻ��
//	//ԭ�й��������Ե��ã����ܴ���һԴ�ļ�������extern�����á�
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	//auto int num = 3;//auto����int���Զ��������Զ�������һ��ʡ��
//	//printf("%d\n", num);
//	/*typedef unsigned int u_int;//typedef���������ؼ��֣�unsigned�޷��ŵ�
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
// 2�������ͺꡣ
//define��һ��Ԥ����ָ����峣���ͺ�
//#define max 1000
//int main()
//{
//	int num = max;
//	printf("%d", num);
//	return 0;
//}
//#define Add(x,y) ((x)+(y))//����꣬��-�����滻����˼
//int main()
//{
//	printf("%d", Add(2, 3));
//	return 0;
//}
//��ʶָ��
//int main()
//{
//	int a= 4;//a���ڴ��з����ĸ��ֽڵĿռ�
//	printf("%p\n", &a);//%p������ӡ��ַ
//	int* pa = &a;//paΪָ�������������ŵ�ַ
//	//*˵��pa��һ��ָ�����
//	//int˵��paָ������������α��� 
//	*pa = 20;//*�����ò�����*pa����ͨ���ҵ�pa�ĵ�ַ�ҵ�a
//	printf("%d", a);
//	return 0;
//}
//��ʶ�ṹ��
struct stu
{
	char name[20];
	double score;
	int age;
};
int main()
{
	struct stu s = { "�ܳ���",89,22 };
	printf("%s %lf %d\n", s.name, s.score, s.age);
	struct stu* ps = &s;
	printf("%s %lf %d\n", (*ps).name, (*ps).score, (*ps).age);
	printf("%s %lf %d\n", ps->name, ps->score, ps->age);
	return 0;
}
