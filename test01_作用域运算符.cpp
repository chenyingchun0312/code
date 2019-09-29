
#include <iostream>
using namespace std;

/**
 * ::作用域运算符，用来解决全局变量和局部变量重名的问题，加上::表示使用全局变量
*/
int a = 20;
void test(){
    int a = 10;
    std::cout << a << std::endl;    //局部变量
    std::cout << ::a << std::endl;  //全局变量
}

int main(int argc, char *argv[])
{
    test();
}