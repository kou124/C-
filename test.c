#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//��ӡС�ɻ�
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
//�ж�M�Ƿ��ܱ�5����
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
//���1��100������
//int main()
//{
//	int num = 1;
//	while (num <=100)
//	{
//		/*printf("����һ�������ж�������Ƿ�Ϊ����(YES/NO)\n");
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
//switch��֧���
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	switch (a)//a����Ϊ����
//	{
//	 case 1:
//		 printf("����һ");
//		 break;
//	 case 2:
//		 printf("���ڶ�");
//		 break;
//	 case 3:
//		 printf("������");
//		 break;
//	 case 4:
//		 printf("������");
//		 break;
//	 case 5:
//		 printf("������");
//		 break;
//	 case 6:
//		 printf("������");
//		 break;
//	 case 7:
//		 printf("������");
//		 break;
//	 default:
//		 printf("�������");
//	}
//	return 0;
//}
//ѭ�����
//whileѭ������
//int main()
//{
	//int i = 1;
	//while (i <= 10)
	//{
	//	if (i == 5)
	//		continue;//���뵽�ж���䣬����ĳ�����ִ�С�
	//	//if (i == 5)
	//	//	break;//����ѭ����ֱ�ӽ���
	//	printf("%d", i);
	//	i++;
	//}
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//getchar()�Ӽ����ж�ȡ�ַ���EOF��ʾ���󣬼�����getcahr
//								 //֮���л�����������A�س������Ȼ����ٸ����ӡ�������س���
//		//printf("%c", ch);
//		putchar(ch);//CTRL+Z����ʹwhile����������
//	return 0;
//}
//whileѭ������
//�Ӽ�������һ�����벢ȷ���Ƿ���ȷ
//int main()
//{
//	char password[20] = { 0 };
//	printf("������һ�����룺>");
//	scanf("%s", password);
//	printf("��ȷ���������루Y/N��:>");
//	//getchar();//����"\n"ֻ�ܴ���һ��
//	int a = 0;
//	while ((a = getchar())!='\n')//��û����ȡ\nʱһֱִ��
//	{
//		;
//	}
//	int ch = getchar();
//	if (ch == 'Y')
//		printf("ȷ�ϳɹ�\n");
//	else
//		printf("ȷ��ʧ��\n");
//	return 0;
//}
//ֻ��ӡ�ڼ����������0~9
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
