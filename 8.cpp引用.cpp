/*
C++ 引用
引用变量是一个别名，也就是说，它是某个已存在变量的另一个名字。

一旦把引用初始化为某个变量，就可以使用该引用名称或变量名称来指向变量。

引用必须在定义时初始化，并且一旦绑定到一个变量后，就不能再绑定到其他变量。

引用的语法如下：
*/
int a = 10;
int &ref = a;  // ref 是 a 的引用

//int &ref 表示 ref 是一个 int 类型的引用。

//ref 是 a 的别名，对 ref 的操作会直接作用于 a。


/*
C++ 引用 vs 指针
引用很容易与指针混淆，它们之间有三个主要的不同：

不存在空引用，引用必须连接到一块合法的内存。
一旦引用被初始化为一个对象，就不能被指向到另一个对象。指针可以在任何时候指向到另一个对象。
引用必须在创建时被初始化。指针可以在任何时间被初始化。
引用的对象必须是一个变量，而指针必须是一个地址。
*/


#include <iostream>

using namespace std;

int main ()
{
   // 声明简单的变量
   int    i;
   double d;

   // 声明引用变量
   int&    r = i;
   double& s = d;

   i = 5;
   cout << "Value of i : " << i << endl;
   cout << "Value of i reference : " << r  << endl;

   d = 11.7;
   cout << "Value of d : " << d << endl;
   cout << "Value of d reference : " << s  << endl;

   return 0;
}
/* result:
Value of i : 5
Value of i reference : 5
Value of d : 11.7
Value of d reference : 11.7
*/
