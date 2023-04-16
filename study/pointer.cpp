#include<iostream>
using namespace std;

int main()
{
	/*int a = 10;
	int* p;
	p = &a;
	cout << *p << endl;
	cout << "a的地址:" << &a << endl;
	cout << "p=" << p << endl;
	cout << "p所指向地址的值:" << *p << endl;
	cout << sizeof(p) << endl;
	cout << sizeof(char *) << endl;
	cout << sizeof(int*) << endl;
	cout << sizeof(float*) << endl;
	cout << sizeof(double*) << endl;*/

				/*空指针：指针变量指向内存中编号为0的空间*/
	//用于给指针变量进行初始化、空指针是不可以访问的
	//内存编号为0~255为系统占用的内存，不允许用户访问
	/*int* p = NULL;*/

				/*野指针：指针变量指向非法的内存空间*/
	/*int* p = (int*)0x1100;
	//指针变量p指向内存空间地址编号为0x1100的空间
	//访问野指针报错
	cout << *p << endl;*/

					/* const修饰指针 */
	//三种情况：修饰指针——常量指针、修饰常量——指针常量、即修饰指针也修饰常量
	int a = 10;
	int b = 10;

	//const修饰的是指针，指针指向可以改，指针指向的值不可以改
	const int* p1 = &a;
	p1 = &b;//正确
	/* *p1 = 100;//报错*/

	//const修饰的是常量，指针指向不能改，指针指向的值可以改
	int* const p2 = &a;
	/* p2 = &b; */    //错误
	*p2 = 100;//正确

	//const修饰指针和常量，指针指向和指针指向的值都不能更改
	const int* const p3 = &a;
	//p3=&b;*p3=100;错

	//const右侧紧跟着的是指针就是常量指针，是常量就是指针常量

				

	system("pause");
	return 0;
}
				/* 指针和函数*/
void swap_1(int a, int b)//值传递形参不能改变实参
{
	int temp = a;
	a = b;
	b = temp;
}
void swap_2(int* p4, int* p5)//地址传递，可改变实参的值
{
	int temp = *p4;
	*p4 = *p5;
	*p5 = temp;
}