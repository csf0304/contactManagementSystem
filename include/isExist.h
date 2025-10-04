#ifndef _IS_EXIST_H_
#define _IS_EXIST_H_

#include <string>
#include "contacts.h"

//检测联系人是否存在 如果存在返回联系人所在数组中的具体位置 不存在返回-1
//参数1: 通讯录; 参数2: 对比姓名
int isExist(struct Addressbooks *abs, std::string name);

#endif // !_IS_EXIST_H_
