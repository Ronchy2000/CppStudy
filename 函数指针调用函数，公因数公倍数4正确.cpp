#include <iostream>
using namespace std;
int main()
{#include <iostream>
using namespace std;
int main()
{
    int m1(int *x,int *y,int *pp1) ;
    int m2(int *x,int *y,int *z,int *pp2);
    int a,b;
    int c=0,d=1;
    int GetResult(int (*pm1)(int *,int *,int *),int (*pm2)(int *,int *,int *,int*),int *a1,int *b1,int *c1,int *d1);
    cin>>a>>b;   //输入两个数 
    GetResult(m1,m2,&a,&b,&c,&d);
    cout<<"最大公因数："<<c<<"最小公倍数:"<<d<<endl;
    return 0;
}
int GetResult(int (*pm1)(int *,int *,int *),int (*pm2)(int *,int *,int *,int *),int *a1,int *b1,int *c1,int *d1)
{
    pm1(a1,b1,c1);     //传递地址！
    pm2(a1,b1,c1,d1);  //传递地址！
    return 0;
}
int m1(int *x,int *y,int *pp1)   //*pp1—c 
{
    int a=(*x),b=(*y); 
    int m,t;
    while(b!=0)      //是 “！=”,错了就死循环
    {
        if(a<b)
        {
            m=a;
            a=b;
            b=m;
        }
        t=a%b;
        a=b;
        b=t;
    }
    (*pp1)=a;          //最大公因数 c 
    return 0;
}
int m2(int *x,int *y,int *z,int *pp2) //*pp2--d;
{
    (*pp2)=(((*x)*(*y))/(*z));    //错误：a,b  在m1中调用指针，其值已经改变；所以在传递a,b时应当使用值传递 
    return 0;                       //或使用赋值，建立新变量 
}
//值得注意的是，在返回类型为int类型的函数，需要return 0；否则报错！！ 

