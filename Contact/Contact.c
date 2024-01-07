#include "Contact.h"
//初始化通讯录
void InitContact(Contact* pc)
{
	assert(pc);
	pc->count = 0;
	memset(pc->data, 0, sizeof(pc->data));
}
//增加联系人
void AddContact(Contact* pc)
{
	assert(pc);
	if (pc->count == max)
	{
		printf("通讯录已满，无法增加\n");
	}
	printf("请输入姓名\n");
	scanf("%s", pc->data[pc->count].name);
	printf("请输入年龄\n");
	scanf("%d", &(pc->data[pc->count].age));
	printf("请输入性别\n");
	scanf("%s", pc->data[pc->count].gender);
	printf("请输入电话\n");
	scanf("%s", pc->data[pc->count].tele);
	printf("请输入地址\n");
	scanf("%s", pc->data[pc->count].address);

	pc->count++;
	printf("联系人添加成功\n");
}
//打印通讯录
void DisplayContact(Contact* pc)
{
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		printf("%20s\t%d\t%10s\t%15s\t%30s", pc->data[i].name, pc->data[i].age, pc->data[i].gender,
			                                 pc->data[i].tele, pc->data[i].address);

	}
}
