#include<iostream>
#include<string>
using namespace std;
//���ã����ṹ����Ϊ���������д���
//��ʽ:ֵ���ݡ���ַ����


//ѧ���ṹ�嶨��
struct student {
	string name;
	int age;
	int score;
};

//ֵ����
void print_student_1(student stu)
{
	stu.age = 28;
	cout << "�Ӻ����У�����: " << stu.name << " "
		<< "���䣺" << stu.age << " "
		<< "������" << stu.score << " " << endl;
}

//��ַ����
void print_student_2(struct student* p)
{
	p->age = 200;
	cout << "�Ӻ���2�У�����: " << p->name << " "
		<< "���䣺" << p->age << " "
		<< "������" << p->score << " " << endl;
}

int main()
{
	//����ѧ���ṹ��
	struct student stu = {"����",18,99};
	//ֵ����
	print_student_1(stu);
	//��ַ����
	//print_student_2(&stu);
	//main�����д�ӡ���
	cout << "�Ӻ����У�����: " << stu.name << " "
		<< "���䣺" << stu.age << " "
		<< "������" << stu.score << " " << endl;
	system("pause");
	return 0;
}