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
//初始化通讯录
void InitContact(Contact* pc);
//增加联系人
void AddContact(Contact* pc);
//打印通讯录
void DisplayContact(Contact* pc);
