#include <string>
#include "../include/isExist.h"

int isExist(struct Addressbooks *abs, std::string name) {
	for (int i = 0;i < abs->m_Size;i++) {
		if (abs->personArray[i].m_Name == name) {
			//找到用户输入的姓名时
			return i; //找到后返回这个人在数组中的下标编号
		}
	}
	return -1; //如果遍历结束没有找到返回-1
}
