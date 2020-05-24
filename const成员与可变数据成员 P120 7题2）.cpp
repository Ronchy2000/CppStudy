# include<iostream>
using namespace std;
class Student
{ 
public:
    Student(int n, float s): num(n), score(s){}
    void change(int n, float s) const{ num=n; score=s;}
    void display() const{cout <<num<<" "<<score<<endl;}
private:                      //声明为常成员函数来访问const成员! 
    mutable int num;        //mutable 
	mutable float score;   //声明可变数据成员 
}; 
int main()
{ 
    const Student stud(101,78.5); 
    stud.display();   //调用常成员函数 
    stud.change(101,80.5); 
    stud.display();  
    return 0;
}
