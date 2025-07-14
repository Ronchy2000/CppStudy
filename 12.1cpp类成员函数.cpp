//成员函数可以定义在类定义内部，或者单独使用范围解析运算符 :: 来定义。

//在类定义中定义的成员函数把函数声明为内联的，即便没有使用 inline 标识符。所以您可以按照如下方式定义 getVolume() 函数：

/*
class Box
{
   public:
      double length;      // 长度
      double breadth;     // 宽度
      double height;      // 高度

      double getVolume(void)
      {
         return length * breadth * height;
      }
};


//您也可以在类的外部使用范围解析运算符 :: 定义该函数，如下所示：
double Box::getVolume(void)
{
    return length * breadth * height;
}
//在这里，需要强调一点，在 :: 运算符之前必须使用类名。
//调用成员函数是在对象上使用点运算符（.），这样它就能操作与该对象相关的数据
*/


//示例
#include <iostream>

using namespace std;

class Box
{
   public:
      double length;         // 长度
      double breadth;        // 宽度
      double height;         // 高度

      // 成员函数声明
      double getVolume(void);
      void setLength( double len );
      void setBreadth( double bre );
      void setHeight( double hei );
};

// 成员函数定义
double Box::getVolume(void)
{
    return length * breadth * height;
}

void Box::setLength( double len )
{
    length = len;
}

void Box::setBreadth( double bre )
{
    breadth = bre;
}

void Box::setHeight( double hei )
{
    height = hei;
}

// 程序的主函数
int main( )
{
   Box Box1;                // 声明 Box1，类型为 Box
   Box Box2;                // 声明 Box2，类型为 Box
   double volume = 0.0;     // 用于存储体积

   // box 1 详述
   Box1.setLength(6.0);
   Box1.setBreadth(7.0);
   Box1.setHeight(5.0);

   // box 2 详述
   Box2.setLength(12.0);
   Box2.setBreadth(13.0);
   Box2.setHeight(10.0);

   // box 1 的体积
   volume = Box1.getVolume();
   cout << "Box1 的体积：" << volume <<endl;

   // box 2 的体积
   volume = Box2.getVolume();
   cout << "Box2 的体积：" << volume <<endl;
   return 0;
}
