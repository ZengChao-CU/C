//封装的意义：
//将属性和行为作为一个整体，表现生活中的事物
// 将属性和行为加以权限控制
// 
// 在设计类的时候，属性和行为写在一起，表现事物
// 语法：class 类名{访问权限：属性/行为};
// 访问权限：public 公共权限 成员 类内可以访问 类外可以访问
//			protected 保护权限 成员 类内可以访问，类外不能访问,子也可访问
//			private 成员 类内类外均不可访问，子不能访问
// 在c++中struct和class唯一的区别在于默认的访问权限不同
// struct：默认的访问权限为公共
// class：默认的访问权限为私有
// 
// eg1.设计一个圆类，求圆周长
//
#include<iostream>
#include<string>
using namespace std;
const double PI = 3.14;

class Circle {

	//访问权限
public://公共权限

	//属性
	int m_r;
	//行为
	//获取圆的周长
	double calculateZC()
	{
		return 2 * PI * m_r;
	}

};

//eg2.设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号

class Student {
public:
	
	void input_stu_name(string name)
	{
		m_name = name;
	}
	void input_stu_id(int id)
	{
		m_id = id;
	}
	void Display()
	{
		cout << "姓名:" << m_name << "学号:" << m_id << endl;
	}
	string m_name;
	int m_id;
};

class Person {
public:
	string m_Name;
protected:
	string m_Car;
private:
	int m_Password;
public:
	void func()
	{
		m_Name = "张三";
		m_Car = "小汽车";
		m_Password = 123456;
	}

};


class C1 {
	int A;
};
struct C2 {
	int B;
};


//成员属性设置为私有
// 优点1：将所有成员属性设置为私有，可以自己控制读写权限
// 优点2：对于写权限，我们可以检测数据的有效性
//
class Person_1 {
private:
	string m_name;	//姓名设置可读可写
	int m_age;	//年龄设置只读
	int m_id;//学号设置只写

public:
	//姓名设置可读可写
	void SetName(string name) {
		m_name = name;
	}
	string GetName()
	{
		return m_name;
	}
	//获取年龄 只读

	int GetAge() {
		
		return m_age;
	}
	//设置年龄
	void SetAge(int age)
	{
		if (age < 0 || age>150) {
			m_age = 0;
			cout << "输入数据有误" << endl;
			return;
		}
		m_age = age;
	}
	//学号，只写
	int SetId(int id)
	{
		m_id = id;
	}
};

//案例：设计立方体类
//	设计立方体类（Cube）
//	求出立方体的面积和体积
// 分别用全局函数和成员函数判断两个立方体是否相等
//
class Cube {
private:
	int m_H;
	int m_L;
	int m_W;
public:
	void Set_H_L_W(int H, int L, int W)
	{
		m_H = H;
		m_L = L;
		m_W = W;
	}
	int Cube_area() {
		return 2*(m_H*m_L+m_H*m_W+m_L*m_W);
	}
	int Cube_volume() {
		return m_H * m_W * m_L;
	}
	int Get_L()
	{
		return m_L;
	}
	int Get_W()
	{
		return m_W;
	}
	int Get_H()
	{
		return m_H;
	}

	bool judgement_1(Cube &C3)
	{
		if (m_H == C3.m_H && m_L == C3.m_L && m_W == C3.m_W)
			return true;
		return false;
	}
};

bool judgement_2(Cube &C1, Cube &C2)
{
	if (C1.Get_H() == C2.Get_H() && C1.Get_L() == C2.Get_L() && C1.Get_W() == C2.Get_W())
		return true;
	return false;
}



//设计一个圆类（Circle），和一个点类（Point),计算点和圆的关系


class Point {
private:
	int P_X;
	int P_Y;
public:
	void Set_P_X(int x)
	{
		P_X = x;
	}
	void Set_P_Y(int y)
	{
		P_Y = y;
	}
	int Get_P_X()
	{
		return P_X;
	}
	int Get_P_Y()
	{
		return P_Y;
	}
};



class Circle_1{
private:

	int C_R;
public:
	void Set_C_R(int r)
	{
		C_R = r;
	}
	int Get_C_R()
	{
		return C_R;
	}
	void jug_relation(Point& p) {
		if (p.Get_P_X() * p.Get_P_X() + p.Get_P_Y() * p.Get_P_Y() < C_R * C_R)
			cout << "点在圆内" << endl;
		else if (p.Get_P_X() * p.Get_P_X() + p.Get_P_Y() * p.Get_P_Y() > C_R * C_R)
			cout << "点在圆外" << endl;
		else
			cout << "点在圆上" << endl;
			
	}
};

int main()
{
	//通过圆类创建具体的圆（对象）
	//Circle c1;//实例化（通过一个类，创建一个对象的过程）
	//给圆对象的属性进行赋值
	//c1.m_r = 10;
	//cout << "圆的周长为:" << c1.calculateZC() << endl;

	//Student stu;
	//stu.input_stu_id(12);
	//stu.input_stu_name("zc");
	//stu.Display();


	
	//Person p1;
	//p1.m_Name = "李四";
	//p1.m_Car = "宝马";//保护权限，类外访问不到
	//p1.m_Password = 234567;//私有权限，类外访问不到
	//p1.func();


	//C1 test1;
	//C2 test2;
	////test1.A = 100;错误
	//test2.B = 100;

	//Person_1 p;
	//p.SetName("曾超");
	//cout << p.GetName() << endl;
	//p.SetAge(11);
	//cout << p.GetAge() << endl;


	/*Cube C_1,C_2,C_3;
	C_1.Set_H_L_W(4, 5, 6);
	C_2.Set_H_L_W(4, 5, 6);
	C_3.Set_H_L_W(1, 2, 3);
	bool reg = judgement_2(C_1, C_2);
	if(reg)
	cout << "C_1与C_2相等" << endl;
	else 	
	cout << "C_1与C_2不相等?" << endl;
	bool reg_2 = C_1.judgement_1(C_3);
	if (reg_2)
		cout << "C_1与C_3相等" << endl;
	else
		cout << "C_1与C_3不相等" << endl;
	cout << "面积:" << C_1.Cube_area() << endl;
	cout << "体积：" << C_1.Cube_volume() << endl;*/

	Circle_1 C;
	Point P;
	C.Set_C_R(2);
	P.Set_P_X(2);
	P.Set_P_Y(2);
	C.jug_relation(P);
	system("pause");
	return 0;
}