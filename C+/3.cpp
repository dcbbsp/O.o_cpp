// <变量类型>
// 变量定义就是告诉编译器在何处创建变量的存储和什么类型，以及如何创建变量的存储.
// 每个类型的字节和在不同电脑系统的占用会有变化
#include <iostream> // 头文件
using namespace std; // 命名空间

int ppQ(); // 函数声明 !1

int main()
{
    typedef int type_n;
    type_n variable_name1 = 1;
    // 例:变量实例:类型 标识符 值 (变量会存储在RAM变量存储地址)

    // 类型必须是有效的C++类型,可以是内置的或用户定义的对象 &


    int name_a, name_b, name_c; // 多定义,每个用","隔开

    // 变量可以在声明的时候被初始化（指定一个初始值）.初始化器由一个等号,后跟一个常量表达式组成,如下所示：
    int variable_name2 = 1;
    // 实例:
    extern int go, yo;  // d 和 f 的声明

    // int go = 3, yo = 5; // 定义并初始化 d 和 f 
    // (因为在这会显示报错:重复标识符,所以打上注释了)

    char z = '1';       // 定义并初始化 Z
    char x = 'x';     // 变量 x 的值为 'x'
    // 不带初始化的定义
    // 静态存储持续时间的变量会被隐式初始化为 NULL（所有字节的值都是 0），
    // 其他所有变量的初始值是未定义的

    // ( extern 用于变量是声明而不定义,它会告诉编辑器这个变量是在其他地方定义的,不要为它分配内存空间,这样就可以在当文件中引用其他的文件中定义变量) (这样做可以避免在多个文件中重复定义同一个变量,而只需在一个文件中定义它，然后在其他文件中使用 extern 关键字声明.) 要注意分别 定义和声明 变量

    // 上面extern以外同样可以在函数声明时，提供一个函数名，而函数的实际定义则可以在任何地方进行.例如：

    // 函数调用!2
    int i = ppQ();

    return 0; // 返回 0

}

// 函数的定义 !3
int ppQ(){
    return 0;
}

/*A
C++ 中的左值（Lvalues）和右值（Rvalues）
C++ 中有两种类型的表达式：

左值（Lvalues）：
左值是指表达式中具有内存位置（可以放置在内存中的变量或对象）的值。
左值可以出现在赋值操作的左侧或右侧，因此可以分配新的值给它们。
左值通常是可以被引用的，也就是可以取地址的。你可以使用取地址运算符（&）获取左值的地址。
例子：变量、数组元素、对象成员等都可以是左值
右值（Rvalues）：
右值是指表达式中的临时值，通常没有内存位置，不能被直接引用。
右值通常用于表达式的计算过程，而不是作为可赋值的目标。
右值可以被移动（move）但不能被复制（copy），这是C++11引入的 移动语义 的基础。
例子：字面常量、临时对象、表达式结果等通常是右值。
举例:

int x = 5; // x 是一个左值
int arr[5]; // arr 是一个左值，arr[0] 也是左值

int result = 2 + 3; // 2 + 3 是一个右值
int* ptr = &x; // &x 是一个左值，但 ptr 是一个右值（指针赋值）

但是下面这个就不是一个有效的语句，会生成编译时错误：

10 = 20;

*/


// -----------------------------------------------------------------------------

/*
整数类型（Integer Types）：

int：用于表示整数，通常占用4个字节。
short：用于表示短整数，通常占用2个字节。
long：用于表示长整数，通常占用4个字节。
long long：用于表示更长的整数，通常占用8个字节。
浮点类型（Floating-Point Types）：

float：用于表示单精度浮点数，通常占用4个字节。
double：用于表示双精度浮点数，通常占用8个字节。
long double：用于表示更高精度的浮点数，占用字节数可以根据实现而变化。
字符类型（Character Types）：

char：用于表示字符，通常占用1个字节。
wchar_t：用于表示宽字符，通常占用2或4个字节。
char16_t：用于表示16位Unicode字符，占用2个字节。
char32_t：用于表示32位Unicode字符，占用4个字节。
布尔类型（Boolean Type）：

bool：用于表示布尔值，只能取true或false。
枚举类型（Enumeration Types）：

enum：用于定义一组命名的整数常量。
指针类型（Pointer Types）：

type*：用于表示指向类型为type的对象的指针。
数组类型（Array Types）：

type[]或type[size]：用于表示具有相同类型的元素组成的数组。
结构体类型（Structure Types）：

struct：用于定义包含多个不同类型成员的结构。
类类型（Class Types）：

class：用于定义具有属性和方法的自定义类型。
共用体类型（Union Types）：

union：用于定义一种特殊的数据类型，它可以在相同的内存位置存储不同的数据类型
*/