#include "Contact.h"
void menu()
{
	printf("*********************************\n");
	printf("**** 1.add          2.delete ****\n");
	printf("**** 2.search       4,modify ****\n");
	printf("**** 5.display      6.sort   ****\n");
	printf("**** 0.exit                  ****\n");
	printf("*********************************\n");
	printf("*********************************\n");
}


int main(void)
{
	Contact con;
	//初始化通讯录
	InitContact(&con);
	int input = 0;
	do
	{
		menu();
		printf("请输入->\n");
		scanf("%d", &input);
		switch (input)
		{
		case1:
			AddContact(&con);
			break;
		case2:
			break;
		case3:
			break;
		case4:
			break;
		case5:
			break;
		case6:
			break;
		case0:
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}

	} while (input);
	
}