#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//switch���
//�����ڶ��֧���

/*switch (���ͱ��ʽ)
{
	�����;
}*/

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//day�������,��breakһֱ����ִ�� day����Ϊ����
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	}
//	return 0;
//}

////1-5 ������
////6-7 ��Ϣ��
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//day�������,��breakһֱ����ִ�� day����Ϊ����
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");									
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	//���һ��breakҲ����
//	}
//	return 0;
//}


//ʾ��
int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:
		m++;
	case 2:
		n++;
	case 3:
		switch (n)
		{//swtich����Ƕ��ʹ��
		case 1:
			n++;
		case 2:
			m++;
			n++;
			break;
		//break ������Ӧ��switch���
		}
	case 4:
		m++;
		break;
	default:
		break;
	}
	printf("m = %d, n = %d", m, n);
	return 0;
}




