#include "Contact.h"
//初始化通讯录
void InitContact(Contact* pc)
{
	pc->count = 0;
	memset(pc->data, 0, sizeof(pc->data));
}
//增加联系人
void AddContact(Contact* pc)
{

}