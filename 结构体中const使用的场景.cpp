#include<iostream>
#include<string>

//作用:用const来防止误操作

using namespace std;
//学生结构体定义
struct student {
	string name;
	int age;
	int score;

};
//const使用场景
//将函数中形参改为指针，可以节省内存空间，而且不会复制新的副本出来
void print_student(const student* stu)//加const防止函数体中的误操作
{
	//stu->age=100;//操作失败，因为加了const修饰
	cout << "姓名：" << stu->name << " "
		<< "年龄：" << stu->age << " "
		<< "分数：" << stu->score << " "
		<< endl;
}
int main()
{
	student stu = { "张三",18,100 };
	print_student(&stu);
	system("pause");
	return 0;
}