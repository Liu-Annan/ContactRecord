#pragma once
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#define max 100
struct PeoInfo
{
	char name[10];
	int age;
	char gender[10];
	char tele[15];
	char address[15];
};
//��̬�汾
//typedef struct Contact
//{
//	struct PeoInfo data[max];
//	int count;
//}Contact;

// ��̬�汾
typedef struct Contact
{
	struct PeoInfo* data;
	int count;
	//ͨѶ¼������
	int capacity;
}Contact;
//��ʼ��ͨѶ¼
void InitContact(Contact* pc);
//������ϵ��
void AddContact(Contact* pc);
//��ӡͨѶ¼
void DisplayContact(const Contact* pc);
//ɾ����ϵ��
void DeleContact(Contact* pc);
//������ϵ��
void SearchContact(Contact* pc);
//�޸���ϵ����Ϣ
void ModifyContact(Contact* pc);
//��ͨѶ¼����
void SortContact(Contact* pc);