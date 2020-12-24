#include <stdio.h>
#include "Animal.h"
#include "Dog.h"
struct file_operations
{
	int owner;
	int user;
};
struct file_operations vser_ops =
{ .owner = 1 };

int main()
{
	// test the struct
	puts("this is test!");
	printf("value = %d\r\n", vser_ops.owner);

	// test the parent class
	Animal a;
	Animal_init(&a, 23, "female", Animal_empty_fun);
	puts("this is Animal information");
	printf("age = %d\r\n", Animal_get_age(&a));
	printf("sex = %s\r\n", Animal_get_sex(&a));
	// run the virtual function
	a.v_animal_fun();

	//
	Dog d;
	Dog_init(&d, 12, "male", Dog_v_fun, 4);
	puts("this is dog information");
	printf("age = %d\r\n", Dog_get_age(&d));
	printf("sex = %s\r\n", Dog_get_sex(&d));
	printf("leg = %d\r\n", Dog_get_leg(&d));
	//d.parent.v_animal_fun(); // 打印的应该是dog的函数 puts("This is dog virtual fun");

	Animal * temp = &d;
	temp->v_animal_fun();

	//测试指针和对象的区别,直接看size
	printf("pointer size is %d \r\n", sizeof(temp));
	printf("instance size is %d \r\n", sizeof(a));

	return 0;
}

