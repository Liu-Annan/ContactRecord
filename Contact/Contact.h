#pragma once
#include <stdio.h>
#include <string.h>
#include <assert.h>

#define max 100
struct PeoInfo
{
	char name[20];
	int age;
	char gender[10];
	char tele[15];
	char address[30];
};
typedef struct Contact
{
	struct PeoInfo data[max];
	int count;
}Contact;
//��ʼ��ͨѶ¼
void InitContact(Contact* pc);
//������ϵ��
void AddContact(Contact* pc);
//��ӡͨѶ¼
void DisplayContact(Contact* pc);
