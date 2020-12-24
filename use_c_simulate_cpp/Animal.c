#include "Animal.h"
#include <stdio.h>
//构造函数

void Animal_init(Animal* this, int age, char* sex, void *call_back)
{
	this->age = age;
	this->sex = sex;
	this->v_animal_fun = call_back;
}

void Animal_empty_fun(void)
{
	puts("This is animal virtual fun");
}
//获取性别和年龄
int Animal_get_age(Animal* this)
{
	return this->age;
}
char* Animal_get_sex(Animal* this)
{
	return this->sex;
}
