#ifndef _DOG_H_
#define _DOG_H_
#include"Animal.h"
// ��������ṹ
typedef struct
{
	Animal parent; // ��һ��λ�÷��ø���ṹ
	int legs; // ��������Լ�������
} Dog;

// ���๹�캯������
void Dog_Ctor(Dog *this, int age, int weight, int legs);
// ������������
int Dog_GetAge(Dog * this);
int Dog_GetWeight(Dog * this);
int Dog_GetLegs(Dog * this);
#endif
