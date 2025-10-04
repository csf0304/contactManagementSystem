#include <cstdlib>
#include <iostream>
#include <string>
#include "../include/deletePerson.h"
#include "../include/isExist.h"

void deletePerson(struct Addressbooks *abs) {
	std::cout << "请输入要删除的联系人: ";
	std::string name;
	std::cin >> name;
	//若ret==-1 则告诉未查到
	//若ret!=-1 即查到了 则删除联系人
	int ret = isExist(abs, name);
	if (ret != -1) {
		//查到此人 要进行删除操作
		//若要删除成员A 将A后面的数据向前移动 并且让通讯录中记录的人员个数做-1的操作
		for (int i = ret;i < abs->m_Size;i++) {
			//数据前移
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--; //更新通讯录中的人员数
		std::cout << "删除成功!" << std::endl;
	}
	else if (ret == -1) std::cout << "查无此人" << std::endl;
	//清屏
	std::cin.ignore();
	std::cout << "按ENTER清屏...";
	std::cin.get();
	system("clear");
	return;
}
