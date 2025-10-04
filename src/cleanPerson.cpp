#include "../include/cleanPerson.h"
#include <iostream>

void cleanPerson(struct Addressbooks *abs) {
	abs->m_Size = 0; //将当前记录的联系人置为0 做清空操作
	std::cout << "通讯录已清空!" << std::endl;
	//清屏
	std::cin.ignore();
	std::cout << "按ENTER清屏...";
	std::cin.get();
	system("clear");
	return;
}
