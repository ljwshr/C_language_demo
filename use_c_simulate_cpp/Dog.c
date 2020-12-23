#include "Dog.h"
// 子类构造函数实现
void Dog_Ctor(Dog *this, int age, int weight, int legs)
{ // 首先调用父类构造函数，来初始化从父类继承的数据
	Animal_Ctor(&this->parent, age, weight); // 然后初始化子类自己的数据
	this->legs = legs;
}
int Dog_GetAge(Dog *this)
{ // age属性是继承而来，转发给父类中的获取属性函数
	return Animal_GetAge(&this->parent);
}
int Dog_GetWeight(Dog *this)
{
	return Animal_GetWeight(&this->parent);
}
int Dog_GetLegs(Dog *this)
{ // 子类自己的属性，直接返回
	return this->legs;
}
