#ifndef __ANIMAL__
#define __ANIMAL__
//申明类
typedef struct  {
	int age;
	char* sex;
	void (*v_animal_fun)();
} Animal;

//构造函数
void Animal_init(Animal* this, int age, char* sex, void *call_back);

//获取性别和年龄
int Animal_get_age(Animal* this);
char* Animal_get_sex(Animal* this);
// 虚函数默认实现
void Animal_empty_fun(void);

#endif
