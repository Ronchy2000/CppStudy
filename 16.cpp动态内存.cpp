//C++ 动态内存
//了解动态内存在 C++ 中是如何工作的是成为一名合格的 C++ 程序员必不可少的。C++ 程序中的内存分为两个部分：

//栈：在函数内部声明的所有变量都将占用栈内存。
//堆：这是程序中未使用的内存，在程序运行时可用于动态分配内存。
//很多时候，您无法提前预知需要多少内存来存储某个定义变量中的特定信息，所需内存的大小需要在运行时才能确定。

//在 C++ 中，您可以使用特殊的运算符为给定类型的变量在运行时分配****堆内****的内存，这会返回所分配的空间地址。这种运算符即 new 运算符。

//如果您不再需要动态分配的内存空间，可以使用 delete 运算符，删除之前由 new 运算符分配的内存。


//new 和 delete 运算符
//下面是使用 new 运算符来为任意的数据类型动态分配内存的通用语法：
//new data-type;

//在这里，data-type 可以是包括数组在内的任意内置的数据类型，也可以是包括类或结构在内的用户自定义的任何数据类型。
//让我们先来看下内置的数据类型。
//例如，我们可以定义一个指向 double 类型的指针，然后请求内存，该内存在执行时被分配。我们可以按照下面的语句使用 new 运算符来完成这点：
//double* pvalue  = NULL; // 初始化为 null 的指针
//pvalue  = new double;   // 为变量请求内存

//如果自由存储区已被用完，可能无法成功分配内存。所以建议检查 new 运算符是否返回 NULL 指针，并采取以下适当的操作：
//double* pvalue  = NULL;
//if( !(pvalue  = new double ))
//{
//   cout << "Error: out of memory." <<endl;
//   exit(1);
//}


//malloc() 函数在 C 语言中就出现了，在 C++ 中仍然存在，但建议尽量不要使用 malloc() 函数。
//new 与 malloc() 函数相比，其主要的优点是，new 不只是分配了内存，它还创建了对象。

//在任何时候，当您觉得某个已经动态分配内存的变量不再需要使用时，您可以使用 delete 操作符释放它所占用的内存，如下所示：

//delete pvalue;        // 释放 pvalue 所指向的内存
//下面的实例中使用了上面的概念，演示了如何使用 new 和 delete 运算符：
//

#pragma once //物理上的同一个文件不会被重复包含！
#include <iostream>
#include <string>
#include <cstring>
#include <iomanip> // 需要此头文件 输出完整浮点数
using namespace std;
//
//int main()
//{
//    double* pvalue = NULL;  // 初始化为 null 的指针
//    pvalue = new double;  // 为变量请求内存, 在堆中创建double大小
//
//    *pvalue = 6668.666; //这里会输出Value of pvalue: 6668.67
//    // 为什么会这样呢？默认精度为 6 位有效数字（包括整数和小数部分）
//    cout << "Value of pvalue: " << *pvalue << endl;
//    cout << "-----------------"  << endl;
////    如何输出完整浮点数？
////    通过 cout.precision() 和 std::fixed 设置输出格式：
////    设置输出格式：固定小数点 + 保留setprecision位小数
//    cout << fixed << setprecision(5);
//    cout << "Value: " << *pvalue << endl;  // 输出 6668.66600
//
//    delete pvalue;
//    return 0;
//}


//数组的动态内存分配
//假设我们要为一个字符数组（一个有 20 个字符的字符串）分配内存，
//我们可以使用上面实例中的语法来为数组动态地分配内存，
//如下所示：
//char* pvalue = NULL; // 初始化为 null 的指针
//pvalue  = new char[20]; // 为变量请求内存
//// 要删除我们刚才创建的数组，语句如下：
//delete [] pvalue; // 删除 pvalue 所指向的数组



// 下面是 new 操作符的通用语法，可以为多维数组分配内存，如下所示：
// 一维数组：
//int *array = new int[m]; // 动态分配,数组长度为 m
//delete [] array; //释放内存
//
//int main(void)
//{
//    const char* input = "Hello";
//    int m = 5; // 调整为6字节以容纳"Hello" + null终止符
//    char* array = new char[m];
//
//    for(int i = 0; i <= m-1; i++){
//        array[i] = input[i];
//    }
//    array[m-1] = '\0'; // 添加字符串结束符
//
//    // 循环输出
//    for(int i = 0; i < m; i++) {
//        if(array[i] == '\0') break; // 遇到终止符停止
//        cout << array[i];
//    }
//
//    delete [] array; //释放内存
//
//    return 0;
//}
/////////////////////////////////////////////////////////////////////
//// 二维数组：
//    // 假定数组第一维长度为 m， 第二维长度为 n
//    // 动态分配空间
//int **array;
//array = new int *[m];
//for(int i =0; i<m; i++){
//        array[i] = new int [n];
//}
////释放
//for( int =0; i<m; i++){
//    delete [] array[i];
//}
//delete [] array;


//对象的动态内存分配
//对象与简单的数据类型没有什么不同。例如，请看下面的代码，我们将使用一个对象数组来理清这一概念：
#include <iostream>
using namespace std;

class Box
{
   public:
      Box() {
         cout << "调用构造函数！" <<endl;
      }
      ~Box() {
         cout << "调用析构函数！" <<endl;
      }
};

int main( )
{
   Box* myBoxArray = new Box[4];

   delete [] myBoxArray; // 删除数组
   return 0;
}



