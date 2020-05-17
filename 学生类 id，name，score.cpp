#include <iostream>
using namespace std;
class Student
{
public:
	int id; //xuehao
	string name; //xingming
	float score;
	static float total;
	static int count;        //声明：静态数据成员 
	Student(int xh,string nam,float sco);
	Student();

	void ChangeScore();
	static void GetAverage(); //静态成员函数 
};
Student::Student(int xh,string nam,float sco):id(xh),name(nam),score(sco){} 
                                         //带参数的构造函数 
float Student::total=0.0;  //总分   #静态数据成员  
int Student::count=1;    //总人数 #在类体外进行初始化
 
int main()
{
	Student stud1(0000000001,"zhangsan",0.0);
	stud1.ChangeScore();
	Student::GetAverage();//静态成员函数的调用，类名作用域 
}


void Student::ChangeScore()
{
	cout<<"请输入分数:";
	cin >>score;
	total=Student::score;
}
void Student::GetAverage()  //static 函数可直接访问static 数据 
{
	cout<<"平均分是:"<<(total/count);  //注意 数据类型float/int 
} 
