#include<iostream>
using namespace std;

//���ã�������������ͬ����߸�����
//����������������:
//1��ͬһ����������
//2������������ͬ
//3�������������Ͳ�ͬ���߸�����ͬ����˳��ͬ
//ע�⣺��������ֵ������Ϊ�������ص�����  
void func()
{
	cout << "func�ĵ���" << endl;

}
//void func(int a)
//{
//	cout << "func(int a)�ĵ���" << endl;
//}

//������Ϊ���ص�����

void func(int& a)
{
	cout << "func(int &a)����" << endl;
}
void func(const int& a) {
	cout << "func(const int &a)����" << endl;
}

//����������������Ĭ�ϲ���

int main()
{
	//func(10);
	int a = 10;
	func(a);

	system("pause");
	return 0;
}