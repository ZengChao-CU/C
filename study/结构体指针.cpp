#include<iostream>
#include<string>
using namespace std;

//�ṹ��ָ��
struct student {
	string name;
	int age;
	int score;
};

int main() {
	//�����ṹ�����
	struct student s = { "����",18,100 };
	//ͨ��ָ��ָ��ṹ�����
	student * p = &s;
	//ͨ��ָ����ʽṹ������е�����
	cout << "����: " << p->name 
		<< "���䣺 " << p->age 
		<< "����: " << p->score 
		<< endl;

	system("pause");
	return 0;
}