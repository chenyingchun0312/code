#include <iostream>
using namespace std;

/**
 * C++中的函数外的，const类型，作用域只在当前文件有效
 * 如果没有取地址操作，编译器是不会分配内存地址的
*/
// const int constA = 10;

int main(int argc, char *argv[])
{
    int b = 10;
    const int constA = b;
    int *p = (int *)&constA;
    *p = 200;
    std::cout << "*p = " << *p << std::endl;

    std::cout << "constA = " << constA << std::endl;    
}