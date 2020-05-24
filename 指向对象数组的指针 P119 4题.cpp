#include <iostream>
using namespace std;
class Student
{	
private:
    int id;
	int score;
public:
	void display(){
		cout<<"Ñ§ºÅ:"<<id<<" "<<"·ÖÊý:"<<score<<endl;
	}
	void input(){
		cin>>id>>score;
	}
};
int main()
{
	Student s[5];
	Student *p;
	for(p=s;p<s+5;p++){
	p->input();}
	p=s;
    p->display();
	(p+2)->display(); 
	(p+4)->display();
	return 0;
}
