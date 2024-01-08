#include "Contact.h"
//��ʼ��ͨѶ¼
void InitContact(Contact* pc)
{
	assert(pc);
	pc->count = 0;
	memset(pc->data, 0, sizeof(pc->data));
}
//������ϵ��
void AddContact(Contact* pc)
{
	assert(pc);
	if (pc->count == max)
	{
		printf("ͨѶ¼�������޷�����\n");
	}
	printf("����������->");
	scanf("%s", pc->data[pc->count].name);
	printf("����������->");
	scanf("%d", &(pc->data[pc->count].age));
	printf("�������Ա�->");
	scanf("%s", pc->data[pc->count].gender);
	printf("������绰->");
	scanf("%s", pc->data[pc->count].tele);
	printf("�������ַ->");
	scanf("%s", pc->data[pc->count].address);

	pc->count++;
	printf("��ϵ����ӳɹ�\n");
}
//��ӡͨѶ¼
void DisplayContact(Contact* pc)
{
	assert(pc);
	int i = 0;
	printf("%-10s\t%-3s\t%-10s\t%-15s\t%-15s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	for (i = 0; i < pc->count; i++)
	{
		printf("%-10s\t%-3d\t%-10s\t%-15s\t%-15s\n", pc->data[i].name, pc->data[i].age, pc->data[i].gender,
			                                         pc->data[i].tele, pc->data[i].address);
	}
}
//������ϵ��
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
//ɾ����ϵ��
void DeleContact(Contact* pc)
{
	assert(pc);
	int i = 0;
	if (pc->count == 0)
	{
		printf("ͨѶ¼Ϊ�գ���������\n");
	}
	char name[10] = { 0 };
	printf("������Ҫɾ������ϵ�˵�����->");
	scanf("%s", name);
	int ret = find_by_name(pc, name);
	if (ret == -1)
	{
		printf("�����ڴ���ϵ��\n");
		return;
	}
	for (i = ret; i < pc->count - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->count--;
	printf("ɾ���ɹ�\n");
}
//������ϵ��
void SearchContact(Contact* pc)
{
	assert(pc);
	char name[10] = { 0 };
	printf("������Ҫ���ҵ���ϵ�˵�����->");
	scanf("%s", name);
	int ret = find_by_name(pc, name);
	if (ret == -1)
	{
		printf("�����ڴ���ϵ��\n");
		return;
	}
	printf("%-10s\t%-3s\t%-10s\t%-15s\t%-15s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	printf("%-10s\t%-3d\t%-10s\t%-15s\t%-15s\n", pc->data[ret].name, pc->data[ret].age, pc->data[ret].gender,
			                                     pc->data[ret].tele, pc->data[ret].address);
}
//�޸���ϵ����Ϣ
void ModifyContact(Contact* pc)
{
	assert(pc);
	char name[10] = { 0 };
	printf("������Ҫ�޸ĵ���ϵ�˵�����->");
	scanf("%s", name);
	int ret = find_by_name(pc, name);
	if (ret == -1)
	{
		printf("�����ڴ���ϵ��\n");
		return;
	}
	printf("����������->");
	scanf("%s", pc->data[ret].name);
	printf("����������->");
	scanf("%d", &(pc->data[ret].age));
	printf("�������Ա�->");
	scanf("%s", pc->data[ret].gender);
	printf("������绰->");
	scanf("%s", pc->data[ret].tele);
	printf("�������ַ->");
	scanf("%s", pc->data[ret].address);
	printf("�޸ĳɹ�\n");
	printf("%-10s\t%-3s\t%-10s\t%-15s\t%-15s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	printf("%-10s\t%-3d\t%-10s\t%-15s\t%-15s\n", pc->data[ret].name, pc->data[ret].age, pc->data[ret].gender,
		pc->data[ret].tele, pc->data[ret].address);
}
//��ͨѶ¼����
//������������
int com_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct PeoInfo*)e1)->name, ((struct PeoInfo*)e2)->name);
}
void SortContact(Contact* pc)
{
	assert(pc);
	qsort(pc->data, pc->count, sizeof(struct PeoInfo), com_by_name);
	printf("����ɹ�\n");
}