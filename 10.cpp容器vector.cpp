/****************************************************************************************************************/
/*
C++ vector 容器
C++ 中的 vector 是一种序列容器，它允许你在运行时动态地插入和删除元素。

vector 是基于数组的数据结构，但它可以自动管理内存，这意味着你不需要手动分配和释放内存。

与 C++ 数组相比，vector 具有更多的灵活性和功能，使其成为 C++ 中常用的数据结构之一。

vector 是 C++ 标准模板库（STL）的一部分，提供了灵活的接口和高效的操作。

基本特性:

动态大小：vector 的大小可以根据需要自动增长和缩小。
连续存储：vector 中的元素在内存中是连续存储的，这使得访问元素非常快速。
可迭代：vector 可以被迭代，你可以使用循环（如 for 循环）来访问它的元素。
元素类型：vector 可以存储任何类型的元素，包括内置类型、对象、指针等。
使用场景：

当你需要一个可以动态增长和缩小的数组时。
当你需要频繁地在序列的末尾添加或移除元素时。
当你需要一个可以高效随机访问元素的容器时。
要使用 vector，首先需要包含 <vector> 头文件：
*/

/*
//创建 Vector
#include <vector>

std::vector<int> myVector; // 创建一个存储整数的空 vector

std::vector<int> myVector(5); // 创建一个包含 5 个整数的 vector，每个值都为默认值（0）
std::vector<int> myVector(5, 10); // 创建一个包含 5 个整数的 vector，每个值都为 10/
//或者
std::vector<int> vec; // 默认初始化一个空的 vector
std::vector<int> vec2 = {1, 2, 3, 4}; // 初始化一个包含元素的 vector


//添加元素
.accumulate
//可以使用 push_back 方法向 vector 中添加元素：
myVector.push_back(7); // 将整数 7 添加到 vector 的末尾


//访问元素
//可以使用下标操作符 [] 或 at() 方法访问 vector 中的元素：
int x = myVector[0]; // 获取第一个元素
int y = myVector.at(1); // 获取第二个元素


//获取大小
//可以使用 size() 方法获取 vector 中元素的数量：
int size = myVector.size(); // 获取 vector 中的元素数量


//迭代访问
//可以使用迭代器遍历 vector 中的元素：
for (auto it = myVector.begin(); it != myVector.end(); ++it) {
    std::cout << *it << " ";
}
//或者使用范围循环：
for (int element : myVector) {
    std::cout << element << " ";
}


//删除元素
//可以使用 erase() 方法删除 vector 中的元素：
myVector.erase(myVector.begin() + 2); // 删除第三个元素


//清空 Vector
//可以使用 clear() 方法清空 vector 中的所有元素：
myVector.clear(); // 清空 vector
*/


//示例
#include <iostream>
#include <vector>

int main() {
    // 创建一个空的整数向量
    std::vector<int> myVector;

    // 添加元素到向量中,添加到末尾
    myVector.push_back(3);
    myVector.push_back(7);
    myVector.push_back(11);
    myVector.push_back(5);

    // 访问向量中的元素并输出
    std::cout << "Elements in the vector: ";
    for (int element : myVector) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // 访问向量中的第一个元素并输出
    std::cout << "First element: " << myVector[0] << std::endl;

    // 访问向量中的第二个元素并输出
    std::cout << "Second element: " << myVector.at(1) << std::endl;

    // 获取向量的大小并输出
    std::cout << "Size of the vector: " << myVector.size() << std::endl;

    // 删除向量中的第三个元素
    myVector.erase(myVector.begin() + 2);

    // 输出删除元素后的向量
    std::cout << "Elements in the vector after erasing: ";
    for (int element : myVector) {
            /*
                 C++11 引入的范围基遍历循环（Range-based for-loop），其功能是遍历容器 myVector 中的每个元素，并打印该元素的值。以下是逐项解释：
                        int element：
                                声明一个变量 element，类型为 int，它会在每次迭代时被赋值为容器 myVector 的下一个元素值。
                        : myVector：
                                表示遍历 myVector 容器中的所有元素。每个元素依次赋值给 element。
            */
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // 清空向量并输出
    myVector.clear();
    std::cout << "Size of the vector after clearing: " << myVector.size() << std::endl;

    return 0;
}



