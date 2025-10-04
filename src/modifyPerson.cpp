#include <iostream>
#include <string>
#include "../include/modifyPerson.h"
#include "../include/isExist.h"

void modifyPerson(struct Addressbooks *abs) {
	std::cout << "请输入需要修改的联系人: ";
	std::string name;
	std::cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1) { //找到指定的联系人
		//姓名
		std::string name;
		std::cout << "请输入姓名: ";
		std::cin >> name;
		abs->personArray[ret].m_Name = name;
		//性别
		int sex;
		while (true) {
			std::cout << "请输入性别(1.男 2.女): ";
			std::cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[ret].m_Sex = sex;
				break; //输入正确 退出循环
			} else std::cout << "输入有误 请重新输入!" << std::endl;
		}
		//年龄
		int age;
		std::cout << "请输入年龄: ";
		std::cin >> age;
		abs->personArray[ret].m_Age = age;
		//电话
		std::string phone;
		std::cout << "请输入联系电话: ";
		std::cin >> phone;
		abs->personArray[ret].m_Phone = phone;
		//住址
		std::string address;
		std::cout << "请输入家庭住址: ";
		std::cin >> address;
		abs->personArray[ret].m_Addr = address;

		std::cout << "修改完成!" << std::endl;
	}
	else if (ret == -1) std::cout << "查无此人" << std::endl; //未找到指定的联系人
	//清屏
	std::cin.ignore();
	std::cout << "按ENTER清屏...";
	std::cin.get();
	system("clear");
	return;
}
