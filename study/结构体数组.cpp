#include<iostream>
#include<string>
using namespace std;
//�ṹ������
//����ṹ��
struct student {
	//����
	string name;
	//����
	int age;
	//����
	float score;
};


int main()
{
//�����ṹ������
	struct student stu_array[3] = {
		{"����",18,100},
		{"����",19,99},
		{"����",20,87}
	};
//���ṹ�������е�Ԫ�ظ�ֵ
	stu_array[2].name = "����";
	stu_array[2].age = 88;
	stu_array[2].score = 90;
//�����ṹ������
	for (int i = 0; i < 3; i++)
	{
		cout<< "����: " << stu_array[i].name   
			<< "����: " << stu_array[i].age  
			<< "����: " << stu_array[i].score 
			<< endl;
	}

	system("pause");
	return 0;
}