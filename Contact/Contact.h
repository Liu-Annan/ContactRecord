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
//静态版本
//typedef struct Contact
//{
//	struct PeoInfo data[max];
//	int count;
//}Contact;

// 动态版本
typedef struct Contact
{
	struct PeoInfo* data;
	int count;
	//通讯录的容量
	int capacity;
}Contact;
//初始化通讯录
void InitContact(Contact* pc);
//销毁通讯录
void DestroyContact(Contact* pc);
//增加联系人
void AddContact(Contact* pc);
//打印通讯录
void DisplayContact(const Contact* pc);
//删除联系人
void DeleContact(Contact* pc);
//查找联系人
void SearchContact(Contact* pc);
//修改联系人信息
void ModifyContact(Contact* pc);
//对通讯录排序
void SortContact(Contact* pc);