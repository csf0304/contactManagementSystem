#include "../include/contacts.h"
#include <cstdlib>
#include <iostream>
#include <string>

void addPerson(struct Addressbooks *abs) {
	//判断通讯录是否已满 若满了则不再添加
	if (abs->m_Size > Max) {
		std::cout << "通讯录已满 无法添加!" << std::endl;
		return;
	}
	else {
		//添加具体联系人
		//姓名
		std::string name;
		std::cout << "请输入姓名: ";
		std::cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		//性别
		int sex;
		while (true) {
			std::cout << "请输入性别(1.男 2.女): ";
			std::cin >> sex;
			//如果输入的是1或2可以退出循环 如果输入错误 则重新输入
			if (sex == 1 || sex == 2) {
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			else {
				std::cout << "输入有误, 请重新输入!" << std::endl;
			}
		}
		//年龄
		int age;
		std::cout << "请输入年龄: ";
		std::cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;
		//电话
		std::string phone;
		std::cout << "请输入联系电话: ";
		std::cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;
		//住址
		std::string address;
		std::cout << "请输入家庭住址: ";
		std::cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;
		//更新通讯录人数
		abs->m_Size++;
		std::cout << "添加成功!" << std::endl;
	}
	//清屏操作
	std::cin.ignore(); //刷新缓存区 忽略回车
	std::cout << "按ENTER清屏...";
	std::cin.get();
	system("clear");
	return;
}
