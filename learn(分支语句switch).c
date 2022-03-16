#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//switch语句
//适用于多分支情况

/*switch (整型表达式)
{
	语句项;
}*/

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//day决定入口,无break一直往后执行 day必须为整型
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	}
//	return 0;
//}

////1-5 工作日
////6-7 休息日
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//day决定入口,无break一直往后执行 day必须为整型
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");									
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	//最后一个break也加上
//	}
//	return 0;
//}


//示例
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
		{//swtich允许嵌套使用
		case 1:
			n++;
		case 2:
			m++;
			n++;
			break;
		//break 跳出对应的switch语句
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




