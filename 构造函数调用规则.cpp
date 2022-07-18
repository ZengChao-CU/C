#include <iostream>
using namespace std;
//
//默认情况下，c++编译器至少给一个类添加3个函数
// 1、默认构造函数（无参，函数体为空）
// 2、默认析构函数（无参，函数体为空）
// 3、默认拷贝构造函数，对属性进行值拷贝
// 
// 构造函数调用规则如下：
// 如果用户定义有参构造函数，c++不再提供默认无参构造，但是会提供默认拷贝构造
// 如果用户定义拷贝构造函数，c++不会再提供其他构造函数
//
class Person {
public:
	//无参（默认）构造函数
	Person() {
		cout << "无参（默认）构造函数" << endl;
	}
	//有参构造函数
	Person(int a) {
		age = a;
		cout << "有参构造函数" << endl;
	}
	Person(const Person& p) {
		age = p.age;
		cout << "拷贝构造函数" << endl;
	}
	~Person() {
		cout << "析构函数" << endl;
	}
	int age;
};

//
// 浅拷贝：简单的赋值拷贝操作
//深拷贝：在堆区重新申请空间，进行拷贝操作


int main()
{

	Person p;
	p.age = 18;
	Person p1(p);
	cout << "p1的年龄:" << p1.age << endl;
	system("pause");
	return 0;
}