#include <iostream>

int main(int argc, char *argv[])
{
    int a = 10;
    int b = 20;
    int &c = a;
    std::cout << "c = " << c << std::endl;

    c = b;
    std::cout << "c = " << c << std::endl;


    int arr[10] = {100};

    using ArrType = int [10];       // typedef int ArrType[10], 或者 int (&f)[10] = arr;
    ArrType &ar = arr;
    std::cout << ar[0]  << std::endl;
}