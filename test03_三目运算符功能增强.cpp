#include <iostream>
using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
    int a = 10; 
    int b = 20;
    int c = a > b ? a : b;
    cout << "c = " << c << endl;    // c = 20



    a > b ? a : b = 200;
    cout << "a = " << a << endl;    // a = 10
    cout << "b = " << b << endl;    // b = 200
}