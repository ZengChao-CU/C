#include<iostream>
using namespace std;
//����ĳ�ʼ��������
//���캯������Ҫ�������ڴ�������ʱΪ����ĳ�Ա���Ը�ֵ�����캯���ɱ������Զ�����
// �����ֶ�����
// �﷨������(){}
// ���캯��û�з���ֵ��Ҳ��дvoid
// ��������������ͬ
// ���캯�������в�������˿��Է�������
// �����ڵ��ö���ʱ�����Զ����ù��죬�����ֶ����ã���ֻ�����һ��
// 
// ������������Ҫ�������ڶ�������ǰϵͳ�Զ����ã�ִ��һЩ������
// ~����(){}
//��������û�з���ֵ��Ҳ��дvoid
// ��������������ͬ��������ǰ���Ϸ���~
// ���������������в�������˲����Է�������
// �����ڶ�������ǰ���Զ����������������ֶ����ã���ֻ�����һ��
//
//1�����캯�� ���г�ʼ������
//���캯���ķ��ࣺ�������вι�����޲ι��죬����:��ͨ����Ϳ�������
// ���÷�ʽ�����ŷ� ��ʾ�� ��ʽת����
//
class Person {
public:
	Person() {
		cout << "Person���޲ι��캯���ĵ���" << endl;
	}
	Person(int a) {
		age = a;
		cout << "Person���вι��캯���ĵ���" << endl;
	}
	//�������캯��
	Person(const Person &p) {
		age = p.age;
		cout << "Person���������ĵ���" << endl;
	}
	~Person() {
		cout << "Person���������ĵ���" << endl;
	}
	int age;
};


class Person_1 {
public:
	Person_1() {
		cout << "�޲ι��캯����" << endl;
		mAge = 0;
	}
	Person_1(int age) {
		cout << "�вι��캯����" << endl;
		mAge = 0;
	}
	Person_1(const Person_1& p) {
		cout << "�����캯����" << endl;
		mAge = p.mAge;
	}
	~Person_1() {
		cout << "����������" << endl;
		mAge = 0;
	}
	int mAge;
};

//�������캯���ĵ���ʱ��
//1��ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void test_1()
{
	Person p1(20);
	Person p2(p1);
	cout << "p2������:" << p2.age << endl;
}
//2��ֵ���ݵķ�ʽ������������ֵ//(�ɲο�ֵ���ݱ���)
void DoWork(Person p) {

}
void test_2()
{
	Person p;
	DoWork(p);
}
//3����ֵ��ʽ���ؾֲ�����
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


//����
void test01()
{
	/*Person p;
	cout << "Hello" << endl;*/
	//1�����ŷ�
	//Person p;//Ĭ�ϣ��޲Σ����캯��
	//Person p2(10);//�вι��캯��
	//Person p3(p2);//�������캯������
	//ע���������Ĭ�Ϲ��캯��ʱ�򣬲�Ҫ�ӣ���,����������Ϊ��һ������������
	//Person p();

	//��ʾ��
	//Person p1;
	//Person p2 = Person(10);
	//Person p3 = Person(p2);
	//Person(10);//�������� �ص㣺��ǰ��ִ�н�����ϵͳ���������յ���������
	//cout << "hello"<<endl;
	//ע�������Ҫ���ÿ������캯����ʼ����������
	//����������Ϊ Person(p3)==>Person p3;  ��������
	//Person(p3);//c�ض���
	//��ʽת����
	//Person p4 = 10;//�൱��д��Person p4=Person(10);
	//Person p5 = p4;//��������

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