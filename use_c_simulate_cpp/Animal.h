#ifndef __ANIMAL__
#define __ANIMAL__
//������
typedef struct  {
	int age;
	char* sex;
	void (*v_animal_fun)();
} Animal;

//���캯��
void Animal_init(Animal* this, int age, char* sex, void *call_back);

//��ȡ�Ա������
int Animal_get_age(Animal* this);
char* Animal_get_sex(Animal* this);
// �麯��Ĭ��ʵ��
void Animal_empty_fun(void);

#endif
