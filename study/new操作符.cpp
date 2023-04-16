#include<iostream>
using namespace std;

//C++中利用new操作符在堆区开辟数据，堆区开辟的数据，由程序员手动开辟，手动释放
//释放利用操作符delete
//语法：new 数据类型
//理由new创建的数据会返回该数据对应类型的指针

int* func()
{
	int* a = new int(10);//在堆区创建整型数据
	return a;
}

//在堆区利用new开辟数组
void test01()
{
	//创建10个数据的整型数组，在堆区
	int* arr = new int[10];//10代表有10个元素
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	
}
int main()
{
	test01();
	//释放堆区数组，要加[]才可以eg:delete[] arr;
	int* p = func();
	cout << *p << endl;
	delete p;//释放
	//cout << *p << endl;//内存已释放，再次访问就是非法，会报错
	system("pause");
	return 0;
}