#include<iostream>
using namespace std;

//c++�к������β��б��������ռλ����������ռλ�����ú���ʱ���벹���λ��
//�﷨:����ֵ���� ������ ���������ͣ�{}
void func(int a, int) {
	cout << "this is func" << endl;
}
int main()
{
	func(10, 10);//ռλ���������
	system("pause");
	return 0;
}