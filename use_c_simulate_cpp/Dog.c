#include "Dog.h"
// ���๹�캯��ʵ��
void Dog_Ctor(Dog *this, int age, int weight, int legs)
{ // ���ȵ��ø��๹�캯��������ʼ���Ӹ���̳е�����
	Animal_Ctor(&this->parent, age, weight); // Ȼ���ʼ�������Լ�������
	this->legs = legs;
}
int Dog_GetAge(Dog *this)
{ // age�����Ǽ̳ж�����ת���������еĻ�ȡ���Ժ���
	return Animal_GetAge(&this->parent);
}
int Dog_GetWeight(Dog *this)
{
	return Animal_GetWeight(&this->parent);
}
int Dog_GetLegs(Dog *this)
{ // �����Լ������ԣ�ֱ�ӷ���
	return this->legs;
}
