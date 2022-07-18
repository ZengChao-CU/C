#include<iostream>
#include<string>
using namespace std;
//作用：将结构体作为参数向函数中传递
//方式:值传递、地址传递


//学生结构体定义
struct student {
	string name;
	int age;
	int score;
};

//值传递
void print_student_1(student stu)
{
	stu.age = 28;
	cout << "子函数中：姓名: " << stu.name << " "
		<< "年龄：" << stu.age << " "
		<< "分数：" << stu.score << " " << endl;
}

//地址传递
void print_student_2(struct student* p)
{
	p->age = 200;
	cout << "子函数2中：姓名: " << p->name << " "
		<< "年龄：" << p->age << " "
		<< "分数：" << p->score << " " << endl;
}

int main()
{
	//创建学生结构体
	struct student stu = {"张三",18,99};
	//值传递
	print_student_1(stu);
	//地址传递
	//print_student_2(&stu);
	//main函数中打印结果
	cout << "子函数中：姓名: " << stu.name << " "
		<< "年龄：" << stu.age << " "
		<< "分数：" << stu.score << " " << endl;
	system("pause");
	return 0;
}