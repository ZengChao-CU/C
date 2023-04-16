#include<iostream>
#include<string>
using namespace std;
//结构体数组
//定义结构体
struct student {
	//姓名
	string name;
	//年龄
	int age;
	//分数
	float score;
};


int main()
{
//创建结构体数组
	struct student stu_array[3] = {
		{"张三",18,100},
		{"李四",19,99},
		{"王五",20,87}
	};
//给结构体数组中的元素赋值
	stu_array[2].name = "赵六";
	stu_array[2].age = 88;
	stu_array[2].score = 90;
//遍历结构体数组
	for (int i = 0; i < 3; i++)
	{
		cout<< "姓名: " << stu_array[i].name   
			<< "年龄: " << stu_array[i].age  
			<< "分数: " << stu_array[i].score 
			<< endl;
	}

	system("pause");
	return 0;
}