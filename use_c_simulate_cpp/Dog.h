#ifndef _DOG_H_
#define _DOG_H_
#include"Animal.h"
// 定义子类结构
typedef struct
{
	Animal parent; // 第一个位置放置父类结构
	int legs; // 添加子类自己的属性
} Dog;

// 子类构造函数声明
void Dog_Ctor(Dog *this, int age, int weight, int legs);
// 子类属性声明
int Dog_GetAge(Dog * this);
int Dog_GetWeight(Dog * this);
int Dog_GetLegs(Dog * this);
#endif
