#include <iostream>
#include "../include/showMenu.h"
#include "../include/contacts.h"
#include "../include/showPerson.h"
#include "../include/deletePerson.h"
#include "../include/findPerson.h"
#include "../include/modifyPerson.h"
#include "../include/cleanPerson.h"

int main() {
	//创建通讯录结构体变量
	struct Addressbooks abs;
	//初始化通讯录中当前人员个数
	abs.m_Size = 0;
	int select; //创建用户输入的变量
	//菜单调用
	while (true) {
		showMenu();
		std::cout << "请输入编号: ";
		std::cin >> select;
		std::cout << std::endl;
		switch (select) {
			case 1: //添加联系人
				addPerson(&abs);
				break;
			case 2: //显示联系人
				showPerson(&abs);
				break;
			case 3: //删除联系人
					deletePerson(&abs);
					break;
			case 4: //查找联系人
				findPerson(&abs);
				break;
			case 5: //修改联系人
				modifyPerson(&abs);
				break;
			case 6: //清空联系人
				cleanPerson(&abs);
				break;
			case 0: //退出通讯录
				std::cout << "欢迎下次使用!" << std::endl;
				return 0;
				break;
			default:
				break;
		}
	}
	return 0;
}
