#include <stdio.h>
#include "Animal.h"
#include "Dog.h"
int main()
{ // ��ջ�ϴ���һ������
//	Animal a; // �������
//	Animal_Ctor(&a, 1, 3);
//	printf("age = %d, weight = %d \n", Animal_GetAge(&a), Animal_GetWeight(&a));
//	return 0;

	Dog d;
	Dog_Ctor(&d, 1, 3, 4);
	printf("age = %d, weight = %d, legs = %d \n", Dog_GetAge(&d),
			Dog_GetWeight(&d), Dog_GetLegs(&d));
	return 0;
}

