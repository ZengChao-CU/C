#include<iostream>
using namespace std;

//作用：函数名可以相同，提高复用性
//函数重载满足条件:
//1、同一个作用域下
//2、函数名称相同
//3、函数参数类型不同或者个数不同或者顺序不同
//注意：函数返回值不能作为函数重载的条件  
void func()
{
	cout << "func的调用" << endl;

}
//void func(int a)
//{
//	cout << "func(int a)的调用" << endl;
//}

//引用作为重载的条件

void func(int& a)
{
	cout << "func(int &a)调用" << endl;
}
void func(const int& a) {
	cout << "func(const int &a)调用" << endl;
}

//函数重载碰到函数默认参数

int main()
{
	//func(10);
	int a = 10;
	func(a);

	system("pause");
	return 0;
}