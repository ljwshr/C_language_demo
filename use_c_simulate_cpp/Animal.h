#ifndef _ANIMAL_H_
#define _ANIMAL_H_
// ���常��ṹ
typedef struct
{
	int age;
	int weight;
} Animal;
// ���캯������
void Animal_Ctor(Animal *this, int age, int weight);
// ��ȡ������������
int Animal_GetAge(Animal * this);
int Animal_GetWeight(Animal * this);
#endif
