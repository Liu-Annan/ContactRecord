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
	//��ʼ��ͨѶ¼
	InitContact(&con);
	int input = 0;
	do
	{
		menu();
		printf("������->\n");
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
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}

	} while (input);
	
}