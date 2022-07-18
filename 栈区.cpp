#include<iostream>
using namespace std;

//栈区：
//由编译器自动分配释放，存放函数的参数值，局部变量等
//注意事项:不要返回局部变量的地址，栈区开辟的数据由编译器自动释放


int* func(int a)
{
	a = 100;
	int b = 10;//局部变量存放在栈区，栈区的数据在函数执行完后自动释放
	return &b;//返回局部变量地址
}

int main()
{
	int* p = func(1);

	cout << *p << endl;

	cout << *p << endl;

	system("pause");
	return 0;
}