//��װ�����壺
//�����Ժ���Ϊ��Ϊһ�����壬���������е�����
// �����Ժ���Ϊ����Ȩ�޿���
// 
// ��������ʱ�����Ժ���Ϊд��һ�𣬱�������
// �﷨��class ����{����Ȩ�ޣ�����/��Ϊ};
// ����Ȩ�ޣ�public ����Ȩ�� ��Ա ���ڿ��Է��� ������Է���
//			protected ����Ȩ�� ��Ա ���ڿ��Է��ʣ����ⲻ�ܷ���,��Ҳ�ɷ���
//			private ��Ա ������������ɷ��ʣ��Ӳ��ܷ���
// ��c++��struct��classΨһ����������Ĭ�ϵķ���Ȩ�޲�ͬ
// struct��Ĭ�ϵķ���Ȩ��Ϊ����
// class��Ĭ�ϵķ���Ȩ��Ϊ˽��
// 
// eg1.���һ��Բ�࣬��Բ�ܳ�
//
#include<iostream>
#include<string>
using namespace std;
const double PI = 3.14;

class Circle {

	//����Ȩ��
public://����Ȩ��

	//����
	int m_r;
	//��Ϊ
	//��ȡԲ���ܳ�
	double calculateZC()
	{
		return 2 * PI * m_r;
	}

};

//eg2.���һ��ѧ���࣬������������ѧ�ţ����Ը�������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ��

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
		cout << "����:" << m_name << "ѧ��:" << m_id << endl;
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
		m_Name = "����";
		m_Car = "С����";
		m_Password = 123456;
	}

};


class C1 {
	int A;
};
struct C2 {
	int B;
};


//��Ա��������Ϊ˽��
// �ŵ�1�������г�Ա��������Ϊ˽�У������Լ����ƶ�дȨ��
// �ŵ�2������дȨ�ޣ����ǿ��Լ�����ݵ���Ч��
//
class Person_1 {
private:
	string m_name;	//�������ÿɶ���д
	int m_age;	//��������ֻ��
	int m_id;//ѧ������ֻд

public:
	//�������ÿɶ���д
	void SetName(string name) {
		m_name = name;
	}
	string GetName()
	{
		return m_name;
	}
	//��ȡ���� ֻ��

	int GetAge() {
		
		return m_age;
	}
	//��������
	void SetAge(int age)
	{
		if (age < 0 || age>150) {
			m_age = 0;
			cout << "������������" << endl;
			return;
		}
		m_age = age;
	}
	//ѧ�ţ�ֻд
	int SetId(int id)
	{
		m_id = id;
	}
};

//�����������������
//	����������ࣨCube��
//	������������������
// �ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ����
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



//���һ��Բ�ࣨCircle������һ�����ࣨPoint),������Բ�Ĺ�ϵ


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
			cout << "����Բ��" << endl;
		else if (p.Get_P_X() * p.Get_P_X() + p.Get_P_Y() * p.Get_P_Y() > C_R * C_R)
			cout << "����Բ��" << endl;
		else
			cout << "����Բ��" << endl;
			
	}
};

int main()
{
	//ͨ��Բ�ഴ�������Բ������
	//Circle c1;//ʵ������ͨ��һ���࣬����һ������Ĺ��̣�
	//��Բ��������Խ��и�ֵ
	//c1.m_r = 10;
	//cout << "Բ���ܳ�Ϊ:" << c1.calculateZC() << endl;

	//Student stu;
	//stu.input_stu_id(12);
	//stu.input_stu_name("zc");
	//stu.Display();


	
	//Person p1;
	//p1.m_Name = "����";
	//p1.m_Car = "����";//����Ȩ�ޣ�������ʲ���
	//p1.m_Password = 234567;//˽��Ȩ�ޣ�������ʲ���
	//p1.func();


	//C1 test1;
	//C2 test2;
	////test1.A = 100;����
	//test2.B = 100;

	//Person_1 p;
	//p.SetName("����");
	//cout << p.GetName() << endl;
	//p.SetAge(11);
	//cout << p.GetAge() << endl;


	/*Cube C_1,C_2,C_3;
	C_1.Set_H_L_W(4, 5, 6);
	C_2.Set_H_L_W(4, 5, 6);
	C_3.Set_H_L_W(1, 2, 3);
	bool reg = judgement_2(C_1, C_2);
	if(reg)
	cout << "C_1��C_2���" << endl;
	else 	
	cout << "C_1��C_2�����?" << endl;
	bool reg_2 = C_1.judgement_1(C_3);
	if (reg_2)
		cout << "C_1��C_3���" << endl;
	else
		cout << "C_1��C_3�����" << endl;
	cout << "���:" << C_1.Cube_area() << endl;
	cout << "�����" << C_1.Cube_volume() << endl;*/

	Circle_1 C;
	Point P;
	C.Set_C_R(2);
	P.Set_P_X(2);
	P.Set_P_Y(2);
	C.jug_relation(P);
	system("pause");
	return 0;
}