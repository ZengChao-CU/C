#include<iostream>
using namespace std;
//对象的初始化和清理
//构造函数：主要作用在于创建对象时为对象的成员属性赋值，构造函数由编译器自动调用
// 无需手动调用
// 语法：类名(){}
// 构造函数没有返回值，也不写void
// 函数名与类名相同
// 构造函数可以有参数，因此可以发生重载
// 程序在调用对象时，会自动调用构造，无需手动调用，且只会调用一次
// 
// 析构函数：主要作用在于对象销毁前系统自动调用，执行一些清理工作
// ~类名(){}
//析构函数没有返回值，也不写void
// 函数名与类名相同，在名称前加上符号~
// 析构函数不可以有参数，因此不可以发生重载
// 程序在对象销毁前会自动调用析构，无需手动调用，且只会调用一次
//
//1、构造函数 进行初始化操作
//构造函数的分类：参数：有参构造和无参构造，类型:普通构造和拷贝构造
// 调用方式：括号法 显示法 隐式转换法
//
class Person {
public:
	Person() {
		cout << "Person的无参构造函数的调用" << endl;
	}
	Person(int a) {
		age = a;
		cout << "Person的有参构造函数的调用" << endl;
	}
	//拷贝构造函数
	Person(const Person &p) {
		age = p.age;
		cout << "Person拷贝函数的调用" << endl;
	}
	~Person() {
		cout << "Person析构函数的调用" << endl;
	}
	int age;
};


class Person_1 {
public:
	Person_1() {
		cout << "无参构造函数！" << endl;
		mAge = 0;
	}
	Person_1(int age) {
		cout << "有参构造函数！" << endl;
		mAge = 0;
	}
	Person_1(const Person_1& p) {
		cout << "拷贝造函数！" << endl;
		mAge = p.mAge;
	}
	~Person_1() {
		cout << "析构函数！" << endl;
		mAge = 0;
	}
	int mAge;
};

//拷贝构造函数的调用时机
//1、使用一个已经创建完毕的对象来初始化一个新对象
void test_1()
{
	Person p1(20);
	Person p2(p1);
	cout << "p2的年龄:" << p2.age << endl;
}
//2、值传递的方式给函数参数传值//(可参考值传递本质)
void DoWork(Person p) {

}
void test_2()
{
	Person p;
	DoWork(p);
}
//3、以值方式返回局部对象
//
Person DoWork_2() {
	Person p3;
	cout << (int*)&p3 << endl;
	return p3;
}
void test_3() {
	Person p = DoWork_2();
	cout << (int*) &p << endl;
} 


//调用
void test01()
{
	/*Person p;
	cout << "Hello" << endl;*/
	//1、括号法
	//Person p;//默认（无参）构造函数
	//Person p2(10);//有参构造函数
	//Person p3(p2);//拷贝构造函数调用
	//注意事项：调用默认构造函数时候，不要加（）,编译器会认为是一个函数的声明
	//Person p();

	//显示法
	//Person p1;
	//Person p2 = Person(10);
	//Person p3 = Person(p2);
	//Person(10);//匿名对象 特点：当前行执行结束后，系统会立即回收掉匿名对象
	//cout << "hello"<<endl;
	//注意事项：不要利用拷贝构造函数初始化匿名对象
	//编译器会认为 Person(p3)==>Person p3;  对象声明
	//Person(p3);//c重定义
	//隐式转换法
	//Person p4 = 10;//相当于写了Person p4=Person(10);
	//Person p5 = p4;//拷贝构造

	//test_1();
	//test_2();
	test_3();
}

int main()
{
	//Person p;
	test01();
	//cout << "Hello" << endl;
	system("pause");
	return 0;
}