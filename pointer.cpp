#include<iostream>
using namespace std;

int main()
{
	/*int a = 10;
	int* p;
	p = &a;
	cout << *p << endl;
	cout << "a�ĵ�ַ:" << &a << endl;
	cout << "p=" << p << endl;
	cout << "p��ָ���ַ��ֵ:" << *p << endl;
	cout << sizeof(p) << endl;
	cout << sizeof(char *) << endl;
	cout << sizeof(int*) << endl;
	cout << sizeof(float*) << endl;
	cout << sizeof(double*) << endl;*/

				/*��ָ�룺ָ�����ָ���ڴ��б��Ϊ0�Ŀռ�*/
	//���ڸ�ָ��������г�ʼ������ָ���ǲ����Է��ʵ�
	//�ڴ���Ϊ0~255Ϊϵͳռ�õ��ڴ棬�������û�����
	/*int* p = NULL;*/

				/*Ұָ�룺ָ�����ָ��Ƿ����ڴ�ռ�*/
	/*int* p = (int*)0x1100;
	//ָ�����pָ���ڴ�ռ��ַ���Ϊ0x1100�Ŀռ�
	//����Ұָ�뱨��
	cout << *p << endl;*/

					/* const����ָ�� */
	//�������������ָ�롪������ָ�롢���γ�������ָ�볣����������ָ��Ҳ���γ���
	int a = 10;
	int b = 10;

	//const���ε���ָ�룬ָ��ָ����Ըģ�ָ��ָ���ֵ�����Ը�
	const int* p1 = &a;
	p1 = &b;//��ȷ
	/* *p1 = 100;//����*/

	//const���ε��ǳ�����ָ��ָ���ܸģ�ָ��ָ���ֵ���Ը�
	int* const p2 = &a;
	/* p2 = &b; */    //����
	*p2 = 100;//��ȷ

	//const����ָ��ͳ�����ָ��ָ���ָ��ָ���ֵ�����ܸ���
	const int* const p3 = &a;
	//p3=&b;*p3=100;��

	//const�Ҳ�����ŵ���ָ����ǳ���ָ�룬�ǳ�������ָ�볣��

				

	system("pause");
	return 0;
}
				/* ָ��ͺ���*/
void swap_1(int a, int b)//ֵ�����ββ��ܸı�ʵ��
{
	int temp = a;
	a = b;
	b = temp;
}
void swap_2(int* p4, int* p5)//��ַ���ݣ��ɸı�ʵ�ε�ֵ
{
	int temp = *p4;
	*p4 = *p5;
	*p5 = temp;
}