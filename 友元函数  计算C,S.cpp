#include <iostream>
using namespace std;
class Circle
{
private:
	float r;
	float c;
	float s;
public:
	float EvalueC1();
	float EvalueS1();
	friend float EvalueC2(Circle *p1);
	friend float EvalueS2(Circle *p2); //声明普通函数为友元函数 
	void input();
	Circle();
};
Circle::Circle():r(0),c(0),s(0){}
int main()
{
	Circle c1;
	c1.input();
	c1.EvalueC1();
	c1.EvalueS1();
	cout<<"调用友元函数..."<<endl;
	EvalueC2(&c1);
	EvalueS2(&c1); //#注意: 需要指向对象指针才可访问其成员 
	return 0;      //#因为没有this指针！ 
}
float Circle::EvalueC1()
{
	c=2*3.14*r;
	cout<<"周长1:"<<c<<endl; 
	return 0;
}
float Circle::EvalueS1()
{
	s=3.14*r*r;
	cout<<"面积1:"<<s<<endl;
	return 0;
 } 
float EvalueC2(Circle *p1)
{
	p1->c=2*3.14*(p1->r);
	cout<<"周长2:"<<p1->c<<endl; 
	return 0;
}
float EvalueS2(Circle *p2)
{
	p2->s=3.14*(p2->r)*(p2->r);
	cout<<"面积2:"<<p2->s<<endl;
	return 0;
 }
void Circle::input()
{
	cout<<"请输入半径:";
	cin>>r;
}
