#include<iostream>
using namespace std;

/*
//���õı�����c++�ڲ�ʵ����һ��ָ�볣��
//���ã�������ȡ����
//�﷨���������� &����=ԭ��
//ע������:���ñ����ʼ������ʼ�����ܸı�

int main()
{
	int a = 10;
	//int& b;//�������ñ����ʼ��
	int& b = a;//һ����ʼ�����øı�
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	b = 100;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;


	system("pause");
	return 0;
}*/

//��������������
//���ã���������ʱ�����������õļ������β�����ʵ��
//���Լ�ָ���޸�ʵ��
// ���ÿ���Ϊ�����ķ���ֵ����----�÷����������ÿ���Ϊ��ֵ
int& test02()
{
	static int a = 10;//��̬�����������ȫ������ȫ�����ϵ������ڳ��������ϵͳ�ͷ�
	return a;
}
// ��Ҫ���ؾֲ���������
int& test01()
{
	int a = 10;//�ֲ����������ջ��
	return a;
}
// 
//1��ֵ����
void mySwap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}
//2����ַ����
void mySwap02(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
//3�����ô���
void mySwap03(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

//���������ã�ת��Ϊint* const ref=&a
void func(int& ref)
{
	ref = 100;//ref�����ã�ת��Ϊ*ref=100;
}


//�������ã�
//����:��Ҫ���������βΣ���ֹ�����
//�ں����β��б��У����Լ�const�����βΣ���ֹ�βθı�ʵ��
void showValue(const int& v) {
	//v+=10;
	cout << v << endl;
}
int main()
{
	//int& ref = 10;//���ñ�����Ҫһ���Ϸ����ڴ�ռ䣬������д���
	//����const�Ϳ����ˣ��������Ż����룬int temp=10;const int& ref=temp;
	const int& ref = 10;
	ref = 20;
	// 	//int a = 10;
	////�Զ�ת��Ϊint* const ref=&a;
	//int& ref = a;
	//ref = 20;//�ڲ�����ref�����ã��Զ�������ת��Ϊ*ref=20;
	//cout << "a=" << a << endl;
	//cout << "ref=" << ref << endl;
	//func(a);
	//int& ref = test01();

	//cout << "ref=" << ref << endl;
	//cout << "ref=" << ref << endl;

	//int& ref2 = test02();

	//cout << "ref2=" << ref2 << endl;
	//test02() = 1000;//�������ÿ���Ϊ��ֵ
	////�����������ֵ����ô���뷵������
	//cout << "ref2=" << ref2 << endl;
	//int a = 1;
	//int b = 100;
	////mySwap01(a, b);//�ββ�����ʵ��
	////mySwap02(&a, &b); //�β�����ʵ��
	//mySwap03(a, b); //�β�����ʵ��
	//cout << "a=" << a << endl;
	//cout << "b=" << b << endl;
	system("pause");
	return 0;
}