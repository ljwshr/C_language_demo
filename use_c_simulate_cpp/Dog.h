#ifndef __DOG_H__
#define __DOG_H__
#include "Animal.h"
typedef struct
{
	Animal parent;
	int leg;
} Dog;

//���캯��
void Dog_init(Dog* this, int age, char* sex,void (*v_dog_fun),int leg);

//��ȡ��ر�������
int Dog_get_age(Dog * this);
char* Dog_get_sex(Dog * this);
int Dog_get_leg(Dog * this);

void Dog_v_fun(void);
#endif
