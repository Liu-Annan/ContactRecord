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
	printf("����������\n");
	scanf("%s", pc->data[pc->count].name);
	printf("����������\n");
	scanf("%d", &(pc->data[pc->count].age));
	printf("�������Ա�\n");
	scanf("%s", pc->data[pc->count].gender);
	printf("������绰\n");
	scanf("%s", pc->data[pc->count].tele);
	printf("�������ַ\n");
	scanf("%s", pc->data[pc->count].address);

	pc->count++;
	printf("��ϵ����ӳɹ�\n");
}
//��ӡͨѶ¼
void DisplayContact(Contact* pc)
{
	int i = 0;
	for (i = 0; i < pc->count; i++)
	{
		printf("%20s\t%d\t%10s\t%15s\t%30s", pc->data[i].name, pc->data[i].age, pc->data[i].gender,
			                                 pc->data[i].tele, pc->data[i].address);

	}
}
