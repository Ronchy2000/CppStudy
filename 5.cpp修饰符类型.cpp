/*
C++ 允许在 char、int 和 double 数据类型前放置修饰符。

修饰符是用于改变变量类型的行为的关键字，它更能满足各种情境的需求。

下面列出了数据类型修饰符：

signed：表示变量可以存储负数。对于整型变量来说，signed 可以省略，因为整型变量默认为有符号类型。

unsigned：表示变量不能存储负数。对于整型变量来说，unsigned 可以将变量范围扩大一倍。

short：表示变量的范围比 int 更小。short int 可以缩写为 short。

long：表示变量的范围比 int 更大。long int 可以缩写为 long。

long long：表示变量的范围比 long 更大。C++11 中新增的数据类型修饰符。

float：表示单精度浮点数。

double：表示双精度浮点数。

bool：表示布尔类型，只有 true 和 false 两个值。

char：表示字符类型。

wchar_t：表示宽字符类型，可以存储 Unicode 字符。

修饰符 signed、unsigned、long 和 short 可应用于整型，signed 和 unsigned 可应用于字符型，long 可应用于双精度型。

这些修饰符也可以组合使用，修饰符 signed 和 unsigned 也可以作为 long 或 short 修饰符的前缀。例如：unsigned long int。

C++ 允许使用速记符号来声明无符号短整数或无符号长整数。您可以不写 int，只写单词 unsigned、short 或 long，int 是隐含的。例如，下面的两个语句都声明了无符号整型变量。

*/



/*
signed int num1 = -10; // 定义有符号整型变量 num1，初始值为 -10
unsigned int num2 = 20; // 定义无符号整型变量 num2，初始值为 20

short int num1 = 10; // 定义短整型变量 num1，初始值为 10
long int num2 = 100000; // 定义长整型变量 num2，初始值为 100000

long long int num1 = 10000000000; // 定义长长整型变量 num1，初始值为 10000000000

float num1 = 3.14f; // 定义单精度浮点数变量 num1，初始值为 3.14
double num2 = 2.71828; // 定义双精度浮点数变量 num2，初始值为 2.71828

bool flag = true; // 定义布尔类型变量 flag，初始值为 true

char ch1 = 'a'; // 定义字符类型变量 ch1，初始值为 'a'
wchar_t ch2 = L'你'; // 定义宽字符类型变量 ch2，初始值为 '你'
*/




//--------------------------------------------------------------------------------------
//C++ 中的类型限定符

/*
限定符	含义
const	const 定义常量，表示该变量的值不能被修改。
volatile	修饰符 volatile 告诉该变量的值可能会被程序以外的因素改变，如硬件或其他线程。。
restrict	由 restrict 修饰的指针是唯一一种访问它所指向的对象的方式。只有 C99 增加了新的类型限定符 restrict。
mutable	mutable 用于修饰类的成员变量。被 mutable 修饰的成员变量可以被修改，即使它们所在的对象是 const 的。
static	用于定义静态变量，表示该变量的作用域仅限于当前文件或当前函数内，不会被其他文件或函数访问。
register	用于定义寄存器变量，表示该变量被频繁使用，可以存储在CPU的寄存器中，以提高程序的运行效率。
在 C++11 中被标记为弃用(deprecated) 在 C++17 中被正式移除。
*/

const int NUM = 10; // 定义常量 NUM，其值不可修改
const int* ptr = &NUM; // 定义指向常量的指针，指针所指的值不可修改
int const* ptr2 = &NUM; // 和上面一行等价


volatile int num = 20; // 定义变量 num，其值可能会在未知的时间被改变


class Example {
public:
    int get_value() const {
        return value_; // const 关键字表示该成员函数不会修改对象中的数据成员
    }
    void set_value(int value) const {
        value_ = value; // mutable 关键字允许在 const 成员函数中修改成员变量
    }
private:
    mutable int value_;
};


void example_function() {
    static int count = 0; // static 关键字使变量 count 存储在程序生命周期内都存在
    count++;
}


void example_function(register int num) {
    // register 关键字建议编译器将变量 num 存储在寄存器中
    // 以提高程序执行速度
    // 但是实际上是否会存储在寄存器中由编译器决定
}

/*C++11 后 register 的变化：

在 C++11 中被标记为弃用(deprecated)
在 C++17 中被正式移除
保留为关键字（可能用于兼容或未来用途）*/
