#include<iostream>
using namespace std;


//�������ɳ���Ա�����ͷţ�������Ա���ͷţ��������ʱ�ɲ���ϵͳ����
//��C++����Ҫ����new�ڶ��������ڴ�

int* func()
{
	int* a = new int(10);
	return a;
}

int main()
{
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	system("pause");
	return 0;
}