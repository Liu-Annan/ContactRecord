#include "Contact.h"
void menu()
{
	printf("*********************************\n");
	printf("**** 1.add          2.delete ****\n");
	printf("**** 3.search       4.modify ****\n");
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
		printf("������->");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			AddContact(&con);
			break;
		case 2:
			DeleContact(&con);
			break;
		case 3:
			SearchContact(&con);
			break;
		case 4:
			ModifyContact(&con);
			break;
		case 5:
			DisplayContact(&con);
			break;
		case 6:
			SortContact(&con);
			break;
		case 0:
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}

	} while (input);
	
}