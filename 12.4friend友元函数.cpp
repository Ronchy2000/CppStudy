//C++ 友元函数
//C++ 类 & 对象 C++ 类 & 对象
//
//类的友元函数是定义在类外部，但有权访问类的所有私有（private）成员和保护（protected）成员。尽管友元函数的原型有在类的定义中出现过，但是友元函数并不是成员函数。
//
//友元可以是一个函数，该函数被称为友元函数；友元也可以是一个类，该类被称为友元类，在这种情况下，整个类及其所有成员都是友元。
//
//如果要声明函数为一个类的友元，需要在类定义中该函数原型前使用关键字 friend，如下所示：
//class Box
//{
//   double width;
//public:
//   double length;
//   friend void printWidth( Box box ); //友元函数
//   void setWidth( double wid );
//};

//声明类 ClassTwo 的所有成员函数作为类 ClassOne 的友元，需要在类 ClassOne 的定义中放置如下声明：
//friend class ClassTwo;

//请看下面的程序：
#include <iostream>

using namespace std;

class Box
{
   double width;
public:
   friend void printWidth( Box box );
   void setWidth( double wid );
};

// 成员函数定义
void Box::setWidth( double wid )
{
    width = wid;
}

// 请注意：printWidth() 不是任何类的成员函数，printWidth前没有Box::
void printWidth( Box box )
{
   /* 因为 printWidth() 是 Box 的友元，它可以直接访问该类的任何成员 */
   cout << "Width of box : " << box.width <<endl;
}

// 程序的主函数
int main( )
{
   Box box;

   // 使用成员函数设置宽度
   box.setWidth(10.0);

   // 使用友元函数输出宽度
   printWidth( box );

   return 0;
}
