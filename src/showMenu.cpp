#include <iostream>
#include "../include/showMenu.h"

void showMenu() {
	std::cout << "通讯录管理系统" << std::endl;
	std::cout << "1.添加联系人" << std::endl;
	std::cout << "2.显示联系人" << std::endl;
	std::cout << "3.删除联系人" << std::endl;
	std::cout << "4.查找联系人" << std::endl;
	std::cout << "5.修改联系人" << std::endl;
	std::cout << "6.清空联系人" << std::endl;
	std::cout << "0.退出通讯录" << std::endl;
	return;
}
