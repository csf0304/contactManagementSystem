#include <iostream>
#include "../include/showPerson.h"

void showPerson(struct Addressbooks *abs) {
	//判断通讯录中人数是否为0 若为0 则提示记录为空 若不为0 则显示记录的联系人信息
	if (abs->m_Size == 0) {
		std::cout << "当前记录为空" << " ";
		std::cout << std::endl;
	}
	else {
		for (int i = 0;i < abs->m_Size;i++) {
			std::cout << "姓名: " << abs->personArray[i].m_Name << "|";
			std::cout << "性别: " << (abs->personArray[i].m_Sex == 1 ? "男" : "女") << "|";
			std::cout << "年龄: " << abs->personArray[i].m_Age << "|";
			std::cout << "电话: " << abs->personArray[i].m_Phone << "|";
			std::cout << "住址: " << abs->personArray[i].m_Addr << "|";
			std::cout << std::endl;
		}
	}
	//清屏
	std::cin.ignore();
	std::cout << "按ENTER清屏...";
	std::cin.get();
	system("clear");
	return;
}
