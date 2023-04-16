#include<iostream>
using namespace std;

//c++中函数的形参列表里可以有占位参数，用来占位，调用函数时必须补填该位置
//语法:返回值类型 函数名 （数据类型）{}
void func(int a, int) {
	cout << "this is func" << endl;
}
int main()
{
	func(10, 10);//占位参数必须填补
	system("pause");
	return 0;
}