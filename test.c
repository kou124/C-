#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//打印小飞机
//int main()
//{
//	char arr1[4] = "**";
//	char arr2[13] = "************";
//	char arr3[5] = "*  *";
//	printf("     %s\n",arr1 );
//	printf("     %s\n",arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr2);
//	printf("    %s\n", arr3);
//	printf("    %s\n", arr3);
//	return 0;
//}
//判断M是否能被5整除
//int main()
//{
//	int M = 0;
//	scanf("%d", &M);
//		if (M % 5 ==0)
//		{
//			printf("YES");
//}
//		else {
//			printf("NO");
//		}
//	return 0;
//}
//输出1到100的奇数
//int main()
//{
//	int num = 1;
//	while (num <=100)
//	{
//		/*printf("输入一个数并判断这个数是否为奇数(YES/NO)\n");
//		scanf("%d", &num);*/
//		if (num % 2 == 1)
//			printf("%d\n", num);
//			/*printf("YES\n");*/
//		/*else
//			printf("NO\n");*/
//		num++;
//	}
//	return 0;
//}
//switch分支语句
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	switch (a)//a必须为整形
//	{
//	 case 1:
//		 printf("星期一");
//		 break;
//	 case 2:
//		 printf("星期二");
//		 break;
//	 case 3:
//		 printf("星期三");
//		 break;
//	 case 4:
//		 printf("星期四");
//		 break;
//	 case 5:
//		 printf("星期五");
//		 break;
//	 case 6:
//		 printf("星期六");
//		 break;
//	 case 7:
//		 printf("星期七");
//		 break;
//	 default:
//		 printf("输入错误");
//	}
//	return 0;
//}
//循环语句
//while循环语句①
//int main()
//{
	//int i = 1;
	//while (i <= 10)
	//{
	//	if (i == 5)
	//		continue;//跳入到判断语句，下面的程序不再执行。
	//	//if (i == 5)
	//	//	break;//跳出循环，直接结束
	//	printf("%d", i);
	//	i++;
	//}
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//getchar()从键盘中读取字符，EOF表示错误，键盘与getcahr
//								 //之间有缓冲区，按下A回车，会先缓冲再给予打印（包括回车）
//		//printf("%c", ch);
//		putchar(ch);//CTRL+Z可以使while调试面板结束
//	return 0;
//}
//while循环语句②
//从键盘输入一个密码并确认是否正确
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入一个密码：>");
//	scanf("%s", password);
//	printf("请确认您的密码（Y/N）:>");
//	//getchar();//处理"\n"只能处理一个
//	int a = 0;
//	while ((a = getchar())!='\n')//当没有提取\n时一直执行
//	{
//		;
//	}
//	int ch = getchar();
//	if (ch == 'Y')
//		printf("确认成功\n");
//	else
//		printf("确认失败\n");
//	return 0;
//}
//只打印在键盘上输入的0~9
int main()
{
	int ch =  0 ;
	while ((ch = getchar()) != EOF)
	{
		if(ch < '0' || ch>'9')
			continue;
		putchar(ch);
	}
	return 0;
}
