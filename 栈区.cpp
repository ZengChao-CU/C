#include<iostream>
using namespace std;

//ջ����
//�ɱ������Զ������ͷţ���ź����Ĳ���ֵ���ֲ�������
//ע������:��Ҫ���ؾֲ������ĵ�ַ��ջ�����ٵ������ɱ������Զ��ͷ�


int* func(int a)
{
	a = 100;
	int b = 10;//�ֲ����������ջ����ջ���������ں���ִ������Զ��ͷ�
	return &b;//���ؾֲ�������ַ
}

int main()
{
	int* p = func(1);

	cout << *p << endl;

	cout << *p << endl;

	system("pause");
	return 0;
}