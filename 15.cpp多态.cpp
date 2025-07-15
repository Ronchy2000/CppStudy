//C++ 多态
//多态按字面的意思就是多种形态。
//
//当类之间存在层次结构，并且类之间是通过继承关联时，就会用到多态。

//在 C++ 中，多态（Polymorphism）是面向对象编程的重要特性之一。
//
//C++ 多态允许使用基类指针或引用来调用子类的重写方法，从而使得同一接口可以表现不同的行为。
//
//多态使得代码更加灵活和通用，程序可以通过基类指针或引用来操作不同类型的对象，而不需要显式区分对象类型。这样可以使代码更具扩展性，在增加新的形状类时不需要修改主程序。
//
//以下是多态的几个关键点：

//虚函数（Virtual Functions）：
//在基类中声明一个函数为虚函数，使用关键字virtual。
//派生类可以重写（override）这个虚函数。
//调用虚函数时，会根据对象的实际类型来决定调用哪个版本的函数。


//动态绑定（Dynamic Binding）：
//也称为晚期绑定（Late Binding），在运行时确定函数调用的具体实现。
//需要使用指向基类的指针或引用来调用虚函数，编译器在运行时根据对象的实际类型来决定调用哪个函数。


//纯虚函数（Pure Virtual Functions）
//一个包含纯虚函数的类被称为抽象类（Abstract Class），它不能被直接实例化。
//纯虚函数没有函数体，声明时使用= 0。
//它强制派生类提供具体的实现。

//多态的实现机制：
//虚函数表（V-Table）：C++运行时使用虚函数表来实现多态。每个包含虚函数的类都有一个虚函数表，表中存储了指向类中所有虚函数的指针。
//虚函数指针（V-Ptr）：对象中包含一个指向该类虚函数表的指针。


//使用多态的优势：
//代码复用：通过基类指针或引用，可以操作不同类型的派生类对象，实现代码的复用。
//扩展性：新增派生类时，不需要修改依赖于基类的代码，只需要确保新类正确重写了虚函数。
//解耦：多态允许程序设计更加模块化，降低类之间的耦合度。

//
//#include <iostream>
//using namespace std;
//
//// 基类 Animal
//class Animal {
//public:
//    // 虚函数 sound，为不同的动物发声提供接口
//    virtual void sound() const {
//        cout << "Animal makes a sound" << endl;
//    }
//
//    // 虚析构函数确保子类对象被正确析构
//    virtual ~Animal() {
//        cout << "Animal destroyed" << endl;
//    }
//};
//
//// 派生类 Dog，继承自 Animal
//class Dog : public Animal {
//public:
//    // 重写 sound 方法
//    void sound() const override {
//        cout << "Dog barks" << endl;
//    }
//
//    ~Dog() {
//        cout << "Dog destroyed" << endl;
//    }
//};
//
//// 派生类 Cat，继承自 Animal
//class Cat : public Animal {
//public:
//    // 重写 sound 方法
//    void sound() const override {
//        cout << "Cat meows" << endl;
//    }
//
//    ~Cat() {
//        cout << "Cat destroyed" << endl;
//    }
//};
//
//// 测试多态
//int main() {
//    Animal* animalPtr;  // 基类指针
//
//    // 创建 Dog 对象，并指向 Animal 指针
//    animalPtr = new Dog();
///*
//动态分配 vs 静态分配：
//        静态分配（如 Dog myDog;）在栈（stack）上分配内存，生命周期由作用域决定。
//        new 分配在堆上，需手动用 delete 释放内存，否则会导致内存泄漏。
//
//new Dog() 会：
//在堆（heap）中分配足够的内存空间以存储一个 Dog 对象；
//调用 Dog 类的构造函数初始化这块内存；
//返回该内存块的起始地址（即指向 Dog 对象的指针）。
//
//new 的核心功能是动态创建对象并返回其指针，结合继承和多态，可以实现灵活的对象管理。但需注意内存管理规范（delete 配合 new 使用）。
//*/
//    animalPtr->sound();  // 调用 Dog 的 sound 方法
//    Dog dog;  //在stack中新建一个dog对象
//    dog.sound(); //利用dog对象调用sound成员函数
//    delete animalPtr;    // 释放内存，调用 Dog 和 Animal 的析构函数
//
//    // 创建 Cat 对象，并指向 Animal 指针
//    animalPtr = new Cat();
//    animalPtr->sound();  // 调用 Cat 的 sound 方法
//    delete animalPtr;    // 释放内存，调用 Cat 和 Animal 的析构函数
//
//    return 0;
//}

//代码解释
//基类 Animal：
//
//Animal 类定义了一个虚函数 sound()，这是一个虚函数（virtual），用于表示动物发声的行为。
//~Animal() 为虚析构函数，确保在释放基类指针指向的派生类对象时能够正确调用派生类的析构函数，防止内存泄漏。
//派生类 Dog 和 Cat：
//
//Dog 和 Cat 类都从 Animal 类派生，并各自实现了 sound() 方法。
//Dog 的 sound() 输出"Dog barks"；Cat 的 sound() 输出"Cat meows"。这使得同一个方法（sound()）在不同的类中表现不同的行为。
//主函数 main()：
//
//创建一个基类指针 animalPtr。
//使用 new Dog() 创建 Dog 对象，将其地址赋给 animalPtr。此时，调用 animalPtr->sound() 会输出"Dog barks"，因为 animalPtr 实际指向的是 Dog 对象。
//释放 Dog 对象时，先调用 Dog 的析构函数，再调用 Animal 的析构函数。
//使用 new Cat() 创建 Cat 对象并赋给 animalPtr，再调用 animalPtr->sound()，输出"Cat meows"，显示多态行为。
//关键概念
//虚函数：通过在基类中使用 virtual 关键字声明虚函数，派生类可以重写这个函数，从而使得在运行时根据对象类型调用正确的函数。
//
//动态绑定：C++ 的多态通过动态绑定实现。在运行时，基类指针 animalPtr 会根据它实际指向的对象类型（Dog 或 Cat）调用对应的 sound() 方法。
//
//虚析构函数：在具有多态行为的基类中，析构函数应该声明为 virtual，以确保在删除派生类对象时调用派生类的析构函数，防止资源泄漏。



/**************************************************************************************/
//实例 2
//下面的实例中，我们通过多态实现了一个通用的 Shape 基类和两个派生类 Rectangle 和 Triangle。
//通过基类指针调用不同的派生类方法，展示了多态的动态绑定特性。
//
//#include <iostream>
//using namespace std;
//
//// 基类 Shape，表示形状
//class Shape {
//   protected:
//      int width, height; // 宽度和高度
//
//   public:
//      // 构造函数，带有默认参数
//      Shape(int a = 0, int b = 0) : width(a), height(b) { }
//
//      // 虚函数 area，用于计算面积
//      // 使用 virtual 关键字，实现多态
//      virtual int area() {
//         cout << "Shape class area: " << endl;
//         return 0;
//      }
//};
//
//// 派生类 Rectangle，表示矩形
//class Rectangle : public Shape {
//   public:
//      // 构造函数，使用基类构造函数初始化 width 和 height
//      Rectangle(int a = 0, int b = 0) : Shape(a, b) { }
//
//      // 重写 area 函数，计算矩形面积
//      int area() override {
//         cout << "Rectangle class area: " << endl;
//         return width * height;
//      }
//};
//
//// 派生类 Triangle，表示三角形
//class Triangle : public Shape {
//   public:
//      // 构造函数，使用基类构造函数初始化 width 和 height
//      Triangle(int a = 0, int b = 0) : Shape(a, b) { }
//
//      // 重写 area 函数，计算三角形面积
//      int area() override {
//         cout << "Triangle class area: " << endl;
//         return (width * height / 2);
//      }
//};
//
//// 主函数
//int main() {
//   Shape *shape;           // 基类指针
//   Rectangle rec(10, 7);   // 矩形对象
//   Triangle tri(10, 5);    // 三角形对象
//
//   // 将基类指针指向矩形对象，并调用 area 函数
//   shape = &rec;
//   cout << "Rectangle Area: " << shape->area() << endl;
//
//   // 将基类指针指向三角形对象，并调用 area 函数
//   shape = &tri;
//   cout << "Triangle Area: " << shape->area() << endl;
//
//   return 0;
//}

//主函数中的多态行为：
//
//定义了一个基类指针 shape，这个指针可以指向任何 Shape 类的对象或其派生类的对象。
//首先将 shape 指针指向 Rectangle 对象 rec，然后调用 shape->area()。由于 area() 是虚函数，此时会动态绑定到 Rectangle::area()，输出矩形的面积。
//接着，将 shape 指针指向 Triangle 对象 tri，调用 shape->area() 时会动态绑定到 Triangle::area()，输出三角形的面积。
/************************************************************************************************************************************/
//关键概念
//虚函数：在基类 Shape 中定义了虚函数 area()。虚函数的作用是让派生类可以重写此函数，并在运行时根据指针的实际对象类型调用适当的函数实现。
//
//动态绑定：因为 area() 是虚函数，shape->area() 调用时会在运行时根据 shape 实际指向的对象类型（Rectangle 或 Triangle）来调用相应的 area() 实现。这种在运行时决定调用哪个函数的机制称为动态绑定，是多态的核心。
//
//基类指针的多态性：基类指针 shape 可以指向任何派生自 Shape 的对象。当 shape 指向不同的派生类对象时，调用 shape->area() 会产生不同的行为，这体现了多态的特性。




/************************************************************************************************************************************/
//虚函数
//虚函数是在基类中使用关键字 virtual 声明的函数。
//
//虚函数允许子类重写它，从而在运行时通过基类指针或引用调用子类的重写版本，实现动态绑定。
//
//我们想要的是在程序中任意点可以根据所调用的对象类型来选择调用的函数，这种操作被称为动态链接，或后期绑定。
//
//特点：
//
//在基类中可以有实现。通常虚函数在基类中提供默认实现，但子类可以选择重写。
//动态绑定：在运行时根据对象的实际类型调用相应的函数版本。
//可选重写：派生类可以选择性地重写虚函数，但不是必须。
//
//#include <iostream>
//using namespace std;
//
//class Animal {
//public:
//    virtual void sound() {  // 虚函数
//        cout << "Animal makes a sound" << endl;
//    }
//};
//
//class Dog : public Animal {
//public:
//    void sound() override {  // 重写虚函数
//        cout << "Dog barks" << endl;
//    }
//};
//
//int main() {
//    Animal *animal = new Dog();
//    animal->sound();  // 输出: Dog barks
//    delete animal;
//}
//以上代码中，sound 是 Animal 类的虚函数。通过 Animal* 指针 animal 调用 sound() 时，程序会根据实际对象类型（Dog）来选择调用 Dog::sound()。



/*******************************************************************************************************************************/

//纯虚函数
//您可能想要在基类中定义虚函数，以便在派生类中重新定义该函数更好地适用于对象，但是您在基类中又不能对虚函数给出有意义的实现，这个时候就会用到纯虚函数。
//
//纯虚函数是没有实现的虚函数，在基类中用 = 0 来声明。
//
//纯虚函数表示基类定义了一个接口，但具体实现由派生类负责。
//
//纯虚函数使得基类变为抽象类（abstract class），无法实例化。
//
//特点：
//
//必须在基类中声明为 = 0，表示没有实现，子类必须重写。
//抽象类：包含纯虚函数的类不能直接实例化，必须通过派生类实现所有纯虚函数才能创建对象。
//接口定义：纯虚函数通常用于定义接口，让派生类实现具体行为。
//我们可以把基类中的虚函数 area() 改写如下：

#include <iostream>
using namespace std;

class Shape {
public:
    virtual int area() = 0;  // 纯虚函数，强制子类实现此方法
};
//= 0 告诉编译器，函数没有主体，上面的虚函数是纯虚函数。
class Rectangle : public Shape {
private:
    int width, height;
public:
    Rectangle(int w, int h) : width(w), height(h) { }

    int area() override {  // 实现纯虚函数
        return width * height;
    }
};

int main() {
    Shape *shape = new Rectangle(10, 5);
    cout << "Rectangle Area: " << shape->area() << endl;  // 输出: Rectangle Area: 50
    delete shape;
}

/*************************************/
//虚函数与纯虚函数的对比
//特性  	        虚函数（Virtual Function）   	                纯虚函数（Pure Virtual Function）
//定义	            基类中使用 virtual 声明，有实现	            基类中使用 = 0 声明，无实现
//子类重写	    子类可以选择重写	                                    子类必须实现
//抽象性	        可以实例化类	                                            使类变为抽象类，无法实例化
//用途	            提供默认行为，允许子类重写	                    定义接口，强制子类实现具体行为
