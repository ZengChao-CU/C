#include<iostream>
using namespace std;

/*
//引用的本质在c++内部实现是一个指针常量
//作用：给变量取别名
//语法：数据类型 &别名=原名
//注意事项:引用必须初始化，初始化后不能改变

int main()
{
	int a = 10;
	//int& b;//错误，引用必须初始化
	int& b = a;//一旦初始化不得改变
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	b = 100;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;


	system("pause");
	return 0;
}*/

//引用做函数参数
//作用：函数传参时，可利用引用的技术让形参修饰实参
//可以简化指针修改实参
// 引用可作为函数的返回值存在----用法：函数调用可作为左值
int& test02()
{
	static int a = 10;//静态变量，存放在全局区，全局区上的数据在程序结束后系统释放
	return a;
}
// 不要返回局部变量引用
int& test01()
{
	int a = 10;//局部变量存放于栈区
	return a;
}
// 
//1、值传递
void mySwap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}
//2、地址传递
void mySwap02(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
//3、引用传递
void mySwap03(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

//发现是引用，转化为int* const ref=&a
void func(int& ref)
{
	ref = 100;//ref是引用，转换为*ref=100;
}


//常量引用：
//作用:主要用来修饰形参，防止误操作
//在函数形参列表中，可以加const修饰形参，防止形参改变实参
void showValue(const int& v) {
	//v+=10;
	cout << v << endl;
}
int main()
{
	//int& ref = 10;//引用本身需要一个合法的内存空间，因此这行错误；
	//加入const就可以了，编译器优化代码，int temp=10;const int& ref=temp;
	const int& ref = 10;
	ref = 20;
	// 	//int a = 10;
	////自动转换为int* const ref=&a;
	//int& ref = a;
	//ref = 20;//内部发现ref是引用，自动帮我们转换为*ref=20;
	//cout << "a=" << a << endl;
	//cout << "ref=" << ref << endl;
	//func(a);
	//int& ref = test01();

	//cout << "ref=" << ref << endl;
	//cout << "ref=" << ref << endl;

	//int& ref2 = test02();

	//cout << "ref2=" << ref2 << endl;
	//test02() = 1000;//函数调用可作为左值
	////如果函数做左值，那么必须返回引用
	//cout << "ref2=" << ref2 << endl;
	//int a = 1;
	//int b = 100;
	////mySwap01(a, b);//形参不修饰实参
	////mySwap02(&a, &b); //形参修饰实参
	//mySwap03(a, b); //形参修饰实参
	//cout << "a=" << a << endl;
	//cout << "b=" << b << endl;
	system("pause");
	return 0;
}