#include<iostream>
using namespace std;

//C++������new�������ڶ����������ݣ��������ٵ����ݣ��ɳ���Ա�ֶ����٣��ֶ��ͷ�
//�ͷ����ò�����delete
//�﷨��new ��������
//����new���������ݻ᷵�ظ����ݶ�Ӧ���͵�ָ��

int* func()
{
	int* a = new int(10);//�ڶ���������������
	return a;
}

//�ڶ�������new��������
void test01()
{
	//����10�����ݵ��������飬�ڶ���
	int* arr = new int[10];//10������10��Ԫ��
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
	//�ͷŶ������飬Ҫ��[]�ſ���eg:delete[] arr;
	int* p = func();
	cout << *p << endl;
	delete p;//�ͷ�
	//cout << *p << endl;//�ڴ����ͷţ��ٴη��ʾ��ǷǷ����ᱨ��
	system("pause");
	return 0;
}