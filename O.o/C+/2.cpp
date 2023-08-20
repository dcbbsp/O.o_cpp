// <数据类型>
#include <iostream> // 头文件
using namespace std; // 命名空间

int main() {

    // 内置类型
    bool a; // 布尔值(true/false)
    char b; // 字符词
    int  c; // 整数
    float d; // 浮点
    double e; // 双浮点
    // void; // 无类型

    // 自定义类型名 (作用增加可读性,复用移植)
    typedef int QWQ; QWQ qwq = 10041;
/*
    typedef 可以声明各种类型名，但不能用来定义变量。用 typedef 可以声明数组类型、字符串类型，使用比较方便。
    用typedef只是对已经存在的类型增加一个类型名，而没有创造新的类型。
    当在不同源文件中用到同一类型数据（尤其是像数组、指针、结构体、共用体等类型数据）时，常用 typedef 声明一些数据类型，把它们单独放在一个头文件中，然后在需要用到它们的文件中用 ＃include 命令把它们包含进来，以提高编程效率。
    使用 typedef 有利于程序的通用与移植。有时程序会依赖于硬件特性，用 typedef 便于移植
    typedef 和 #define 区别不同
*/

    // 内置类型可以加修饰符修饰
    // signed;
    // unsigned;
    // short;
    // long; // 修饰符

    unsigned char aa;
    signed char ab;
    unsigned int ac;
    signed int ad;
    short int ae;
    unsigned short int af;
    signed short int ag;
    long int ah;
    signed short int ai;
    long double aj; // ......等
    double long ea;
    cout << "\n" << endl; // \n 和 endl 都是换行
    cout << sizeof(int); // sizeof(type)可以输出该参数内类型的大小

    enum name_day{ // enum 权举
        day1,
        day2,
        day3,
        day4
    }; // 分号结束 (权举 enum 可以将一组具有相似含义的常量组织在一起，从而使代码更易于理解。例如，如果您需要表示一周的各个天数，可以使用枚举来定义这些天数)
// enum 举例
    enum days{one, two, three}day; // days权举类型 day 变量 可在int main() 外定义
    day = one; // 初始化为one
    switch(day){
        case one:
            cout << "one" << endl;
            break;
        case two:
            cout << "two" << endl;
            break;
        default:
            cout << "three" << endl;
            break; //每个 case 分支后面都有一个 break; 语句，这是为了确保只会执行一个分支的代码块
        /*
        如果 day 的值是 one，则输出 "one".
        如果 day 的值是 two，则输出 "two".
        如果 day 的值既不是 one 也不是 two，则执行 default 分支，输出 "three".
        权举可以搭配 typedef结合使用,
        */
    }
// ------------------------------------------------------------------

    // 类型转换:

    // 静态转换(int转换成float) 静态:不会进行任何运行检测,可能报错
    QWQ Pr = 114;
    float Pe = static_cast<float>(Pr);

    // 动态转换(动态转换通常用于将一个基类指针或引用转换为派生类指针或引用,动态转换在运行时进行类型检查,如果不能进行转换则返回空指针或引发异常)
    // class Base {};
    // class Derived : public Base {};
    // Base* eE = new Derived;
    // Derived* ptr_derived = dynamic_cast<Derived*>(eE); // 将基类指针转换为派生类指针 // 报错了,这就先加了//

    // 常量转换(常量转换用于将 const 类型的对象转换为非 const 类型的对象。
    //常量转换只能用于转换掉 const 属性，不能改变对象的类型。)
    const int i = 10;
    int& r = const_cast<int&>(i); // 常量转换，将const int转换为int

    // 重新解释转换(重新解释转换将一个数据类型的值重新解释为另一个数据类型的值，通常用于在不同的数据类型之间进行转换.重新解释转换不进行任何类型检查，因此可能会导致未定义的行为。)
    int j = 10;
    float f = reinterpret_cast<float&>(j); // 重新解释将int类型转换为float类型

    return 0; // 结束 返回 0
} // 主要