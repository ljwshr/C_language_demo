#include "Dog.h"
#include <stdio.h>

void Dog_init(Dog* this, int age, char* sex, void (*v_dog_fun), int leg)
{
	Animal_init(&this->parent, age, sex, v_dog_fun);
	this->leg = leg;
}

//获取相关变量函数
int Dog_get_age(Dog* this)
{
	return Animal_get_age(&(this->parent));
}
char* Dog_get_sex(Dog* this)
{
	return Animal_get_sex(&(this->parent));
}
int Dog_get_leg(Dog* this)
{
	return this->leg;
}

// Dog的虚函数
void Dog_v_fun(void)
{
	puts("This is dog virtual fun");
}
