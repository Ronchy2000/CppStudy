//C++ this 指针
//C++ 类 & 对象 C++ 类 & 对象
//
//在 C++ 中，this 指针是一个特殊的指针，它指向当前对象的实例。
//
//在 C++ 中，每一个对象都能通过 this 指针来访问自己的地址。
//
//this是一个隐藏的指针，可以在类的成员函数中使用，它可以用来指向调用对象。
//
//当一个对象的成员函数被调用时，编译器会隐式地传递该对象的地址作为 this 指针。
//
//友元函数没有 this 指针，因为友元不是类的成员，只有成员函数才有 this 指针。
//
//下面的实例有助于更好地理解 this 指针的概念：
//
//#include <iostream>
//
//class MyClass {
//private:
//    int value;
//
//public:
//    void setValue(int value) {
//        this->value = value;
//    }
//
//    void printValue() {
//        std::cout << "Value: " << this->value << std::endl;
//    }
//};
//
//int main() {
//    MyClass obj;
//    obj.setValue(42);
//    obj.printValue();
//
//    return 0;
//}

//
//实例解析：
//
//以上实例中，我们定义了一个名为 MyClass 的类，它有一个私有成员变量 value。
//
//类中的 setValue() 函数用于设置 value的 值，而 printValue() 函数用于打印 value 的值。
//
//在 setValue() 函数中，我们使用 this 指针来引用当前对象的成员变量 value，并将传入的值赋给它，这样可以明确地告诉编译器我们想要访问当前对象的成员变量，而不是函数参数或局部变量。
//
//在 printValue() 函数中，我们同样使用 this 指针来引用当前对象的成员变量 value，并将其打印出来。
//
//在 main() 函数中，我们创建了一个 MyClass 的对象 obj，然后使用 setValue() 函数设置 value 的值为 42，并通过 printValue() 函数打印出来。
//
//通过使用 this 指针，我们可以在成员函数中访问当前对象的成员变量，即使它们与函数参数或局部变量同名，这样可以避免命名冲突，并确保我们访问的是正确的变量。



//更多！
//以下实例用于比较长方体的体积：
#include <iostream>

using namespace std;

class Box
{
   public:
      // 构造函数定义
      Box(double l=2.0, double b=2.0, double h=2.0)
      {
         cout <<"调用构造函数。" << endl;
         length = l;
         breadth = b;
         height = h;
      }
      double Volume()
      {
         return length * breadth * height;
      }
      int compare(Box box)
      {
         return this->Volume() > box.Volume();
      }
   private:
      double length;     // 宽度
      double breadth;    // 长度
      double height;     // 高度
};

int main(void)
{
   Box Box1(3.3, 1.2, 1.5);    // 声明 box1
   Box Box2(8.5, 6.0, 2.0);    // 声明 box2

   if(Box1.compare(Box2))
   {
      cout << "Box2 的体积比 Box1 小" <<endl;
   }
   else
   {
      cout << "Box2 的体积大于或等于 Box1" <<endl;
   }
   return 0;
}


