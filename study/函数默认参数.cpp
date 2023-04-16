#include<iostream>
using namespace std;
//c++中，函数的形参列表中的形参可以是有默认值的
//语法：返回值类型 函数名 （参数=默认值）{}
int func(int a, int b = 10, int c = 10) {
	return a + b + c;
}
//1、如果某个位置参数有默认值，那么从这个位置往后，从左向右，必须都有默认值
//2、如果函数声明有默认值，函数实现的时候就不能有默认参数

//1、如果某个位置参数有默认值，那么从这个位置往后，从左向右，必须都有默认值
//int func2(int a,int b=10,int c,int d)错误，b有默认值，其后c,d也需有默认值

//2、如果函数声明有默认值，函数实现的时候就不能有默认参数
int func2(int a = 10, int b = 10);
int func2(int a, int b) {

	return a + b;
}

//如果我们自己传入数据，就用自己的数据，如果没有，那么用默认值
int main()
{
	cout << func(12) << endl;
	cout << func(10, 20, 30);
	system("pause");
	return 0;
}