#include<iostream>
#include<string>

//����:��const����ֹ�����

using namespace std;
//ѧ���ṹ�嶨��
struct student {
	string name;
	int age;
	int score;

};
//constʹ�ó���
//���������βθ�Ϊָ�룬���Խ�ʡ�ڴ�ռ䣬���Ҳ��Ḵ���µĸ�������
void print_student(const student* stu)//��const��ֹ�������е������
{
	//stu->age=100;//����ʧ�ܣ���Ϊ����const����
	cout << "������" << stu->name << " "
		<< "���䣺" << stu->age << " "
		<< "������" << stu->score << " "
		<< endl;
}
int main()
{
	student stu = { "����",18,100 };
	print_student(&stu);
	system("pause");
	return 0;
}