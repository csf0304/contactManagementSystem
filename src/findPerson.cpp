#include <iostream>
#include <string>
#include "../include/findPerson.h"
#include "../include/isExist.h"

void findPerson(struct Addressbooks *abs) {
	std::cout << "请输入需要查找的联系人: ";
	std::string name;
	std::cin >> name;
	//判断指定的联系人是否存在通讯录中
	int ret = isExist(abs, name);
	if (ret != -1) { //找到联系人
		std::cout << "姓名: " << abs->personArray[ret].m_Name << "|";
		std::cout << "性别: " << (abs->personArray[ret].m_Sex == 1 ? "男" : "女") << "|";
		std::cout << "年龄: " << abs->personArray[ret].m_Age << "|";
		std::cout << "电话: " << abs->personArray[ret].m_Phone << "|";
		std::cout << "住址: " << abs->personArray[ret].m_Addr << "|";
		std::cout << std::endl;
	}
	else if (ret == -1) std::cout << "查无此人" << std::endl; //未找到联系人
	//清屏
	std::cin.ignore();
	std::cout << "按ENTER清屏...";
	std::cin.get();
	system("clear");
	return;
}
