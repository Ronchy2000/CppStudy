//访问结构成员
/*
#include <iostream>
#include <cstring>

using namespace std;

// 声明一个结构体类型 Books
struct Books
{
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};

int main( )
{
   Books Book1;        // 定义结构体类型 Books 的变量 Book1
   Books Book2;        // 定义结构体类型 Books 的变量 Book2

   // Book1 详述
   strcpy( Book1.title, "C++ 教程");
   strcpy( Book1.author, "Runoob");
   strcpy( Book1.subject, "编程语言");
   Book1.book_id = 12345;

   // Book2 详述
   strcpy( Book2.title, "CSS 教程");
   strcpy( Book2.author, "Runoob");
   strcpy( Book2.subject, "前端技术");
   Book2.book_id = 12346;

   // 输出 Book1 信息
   cout << "第一本书标题 : " << Book1.title <<endl;
   cout << "第一本书作者 : " << Book1.author <<endl;
   cout << "第一本书类目 : " << Book1.subject <<endl;
   cout << "第一本书 ID : " << Book1.book_id <<endl;

   // 输出 Book2 信息
   cout << "第二本书标题 : " << Book2.title <<endl;
   cout << "第二本书作者 : " << Book2.author <<endl;
   cout << "第二本书类目 : " << Book2.subject <<endl;
   cout << "第二本书 ID : " << Book2.book_id <<endl;

   return 0;
}
*/
/****************************************************************************************************************/
//结构作为函数参数
//可以把结构作为函数参数，传参方式与其他类型的变量或指针类似。
/*
#include <iostream>
#include <cstring>

using namespace std;
void printBook( struct Books book );

// 声明一个结构体类型 Books
struct Books
{
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};

int main( )
{
   Books Book1;        // 定义结构体类型 Books 的变量 Book1
   Books Book2;        // 定义结构体类型 Books 的变量 Book2

    // Book1 详述
   strcpy( Book1.title, "C++ 教程");
   strcpy( Book1.author, "Runoob");
   strcpy( Book1.subject, "编程语言");
   Book1.book_id = 12345;

   // Book2 详述
   strcpy( Book2.title, "CSS 教程");
   strcpy( Book2.author, "Runoob");
   strcpy( Book2.subject, "前端技术");
   Book2.book_id = 12346;

   // 输出 Book1 信息
   printBook( Book1 );

   // 输出 Book2 信息
   printBook( Book2 );

   return 0;
}
void printBook( struct Books book )
{
   cout << "书标题 : " << book.title <<endl;
   cout << "书作者 : " << book.author <<endl;
   cout << "书类目 : " << book.subject <<endl;
   cout << "书 ID : " << book.book_id <<endl;
}
*/

/****************************************************************************************************************/
//指向结构的指针
//您可以定义指向结构的指针，方式与定义指向其他类型变量的指针相似，如下所示：
struct Books *struct_pointer;
/*
以上代码定义了一个指向 Books 结构体的指针 struct_pointer。

现在，您可以在上述定义的指针变量中存储结构变量的地址。为了查找结构变量的地址，请把 & 运算符放在结构名称的前面，如下所示：

struct_pointer = &Book1;
以上代码将 Book1 结构体变量的地址赋值给 struct_pointer。

为了使用指向该结构的指针访问结构的成员，您必须使用 -> 运算符，如下所示：

struct_pointer->title;
*/

//以上代码通过 struct_pointer 访问 Book1 结构体的 title 成员。

//让我们使用结构指针来重写上面的实例，这将有助于您理解结构指针的概念：


#include <iostream>
#include <string>

using namespace std;

// 声明一个结构体类型 Books
struct Books
{
    string title;
    string author;
    string subject;
    int book_id;

    // 构造函数
    Books(string t, string a, string s, int id)
        : title(t), author(a), subject(s), book_id(id) {}
};

// 打印书籍信息的函数，接受一个指向 Books 结构体的指针
void printBookInfo(const Books* book) {
    cout << "书籍标题: " << book->title << endl;
    cout << "书籍作者: " << book->author << endl;
    cout << "书籍类目: " << book->subject << endl;
    cout << "书籍 ID: " << book->book_id << endl;
}

int main()
{
    // 创建两本书的对象
    Books Book1("C++ 教程", "Runoob", "编程语言", 12345);
    Books Book2("CSS 教程", "Runoob", "前端技术", 12346);

    // 使用指针指向这两本书的对象
    Books* ptrBook1 = &Book1;
    Books* ptrBook2 = &Book2;

    // 输出书籍信息，传递指针
    printBookInfo(ptrBook1);
    printBookInfo(ptrBook2);

    return 0;
}
/*说明：

结构体定义：Books 结构体的定义与之前相同，包含 title、author、subject 和 book_id 四个成员变量，并且有一个构造函数用于初始化这些成员。

printBookInfo 函数：现在这个函数接受一个指向 Books 结构体的指针 const Books* book。在函数内部，我们使用 -> 操作符来访问结构体指针所指向的成员变量。

main 函数：

创建了两个 Books 类型的对象 Book1 和 Book2。

使用 & 操作符获取这两个对象的地址，并将它们赋值给指针 ptrBook1 和 ptrBook2。

调用 printBookInfo 函数时，传递的是指向 Books 对象的指针。*/



/****************************************************************************************************************/
/*
结构体与类的区别
在 C++ 中，struct 和 class 本质上非常相似，唯一的区别在于默认的访问权限：

struct 默认的成员和继承是 public。
class 默认的成员和继承是 private。
你可以将 struct 当作一种简化形式的 class，适合用于没有太多复杂功能的简单数据封装。

结构体与函数的结合
你可以通过构造函数初始化结构体，还可以通过引用传递结构体来避免不必要的拷贝。
*/

struct Books {
    string title;
    string author;
    string subject;
    int book_id;

    // 构造函数
    Books(string t, string a, string s, int id)
        : title(t), author(a), subject(s), book_id(id) {}

    void printInfo() const {
        cout << "书籍标题: " << title << endl;
        cout << "书籍作者: " << author << endl;
        cout << "书籍类目: " << subject << endl;
        cout << "书籍 ID: " << book_id << endl;
    }
};

void printBookByRef(const Books& book) {
    book.printInfo();
}
