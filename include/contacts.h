#ifndef _CONTACTS_H_
#define _CONTACTS_H_

#include <string>

#define Max 1000

//设计联系人结构体
struct Person {
	//姓名
	std::string m_Name;
	//性别
	int m_Sex;
	//年龄
	int m_Age;
	//电话
	std::string m_Phone;
	//住址
	std::string m_Addr;
};

//设计通讯录结构体
struct Addressbooks {
	//通讯录中保存的联系人的数组
	struct Person personArray[Max];
	//通讯录中当前记录联系人个数
	int m_Size;
};

//添加联系人
void addPerson(struct Addressbooks *p); //利用地址传递 可以修饰实参

#endif // !_CONTACTS_H_
