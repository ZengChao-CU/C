#include<iostream>
#include<string>
using namespace std;

//结构体指针
struct student {
	string name;
	int age;
	int score;
};

int main() {
	//创建结构体变量
	struct student s = { "张三",18,100 };
	//通过指针指向结构体变量
	student * p = &s;
	//通过指针访问结构体变量中的数据
	cout << "姓名: " << p->name 
		<< "年龄： " << p->age 
		<< "分数: " << p->score 
		<< endl;

	system("pause");
	return 0;
}