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
	printf("请输入姓名->");
	scanf("%s", pc->data[pc->count].name);
	printf("请输入年龄->");
	scanf("%d", &(pc->data[pc->count].age));
	printf("请输入性别->");
	scanf("%s", pc->data[pc->count].gender);
	printf("请输入电话->");
	scanf("%s", pc->data[pc->count].tele);
	printf("请输入地址->");
	scanf("%s", pc->data[pc->count].address);

	pc->count++;
	printf("联系人添加成功\n");
}
//打印通讯录
void DisplayContact(Contact* pc)
{
	assert(pc);
	int i = 0;
	printf("%-10s\t%-3s\t%-10s\t%-15s\t%-15s\n", "姓名", "年龄", "性别", "电话", "地址");
	for (i = 0; i < pc->count; i++)
	{
		printf("%-10s\t%-3d\t%-10s\t%-15s\t%-15s\n", pc->data[i].name, pc->data[i].age, pc->data[i].gender,
			                                 pc->data[i].tele, pc->data[i].address);
	}
}
//查找联系人
static int find_by_name(Contact* pc, char name[])
{
	assert(pc);
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}
//删除联系人
void DeleContact(Contact* pc)
{
	assert(pc);
	if (pc->count == 0)
	{
		printf("通讯录为空，操作错误\n");
	}
	char name[10] = { 0 };
	printf("请输入要删除的联系人的姓名->\n");
	scanf("%s", name);
	int ret = find_by_name(pc, name);
	if (ret == -1)
	{
		printf("不存在此联系人\n");
		return;
	}
}
