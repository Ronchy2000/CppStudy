//利用指向对象的指针调用对象中的函数 
#include <iostream>
using namespace std;
class Calculate
{
private:
	int a,b;   //输入两数 
	int c,d;  //c--最大公因数，d--最小公倍数 
public:
	void input();
	void output();
	int m1();
	int m2();     //四个成员函数 
	Calculate();  //默认构造函数 
};
Calculate::Calculate():a(0),b(0),c(0),d(0){}
            //初始化数据为零，以免出错
int main()
{
    void GetResult(Calculate  *cal); //声明 
    Calculate cal;     //建立对象cal 
    cal.input();
    GetResult(&cal);  //对象cal的地址 
    cal.output();
    return 0;
}
void GetResult(Calculate *cal1){ //普通函数GetResult 
	cal1->m1();
	cal1->m2();
}
void Calculate::input(){
	cout<<"请输入两个数:";
	cin>>a>>b; 
}
void Calculate::output(){
    cout<<"最大公因数:"<<c<<endl;
	cout<<"最小公倍数:"<<d<<endl; 
}
int Calculate::m1(){
	int x=a,y=b;
	int t;
	while(y!=0){
		if(x<y){
			int tmp;
		    tmp=x;
		    x=y;
		    y=tmp;
		}  
		t=x%y;
		x=y;
		y=t;
	}
	c=x;
	cout<<"111";
	return 0;
}
int Calculate::m2(){
	d=(a*b)/c;
	return 0;
}
