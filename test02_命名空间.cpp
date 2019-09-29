
#include <iostream>
using namespace std;
using std::cout;
using std::endl;

namespace A{
    int a = 10;
}

//只能定义全局的命名空间， 命名空间定义可以嵌套
namespace B{
    int a = 20;
    int b = 1;
    namespace C{
        int a = 30;
        int b = 2;
    }
}

//命名空间是开放的，可以在多个地方定义相同的namespace
namespace B{
    void func(){
        std::cout << "B func " << std::endl;
    }
}


namespace B{
    void func2();
}

void B::func2(){
    std::cout << "B func2 " << std::endl;
}


namespace{
    int a = 20;
}


namespace veryLongName{
    int a = 88;
}

namespace shortName = veryLongName;



int main(int argc, char *argv[])
{
    std::cout << "A::a : " << A::a << std::endl;
    std::cout << "B::a : " << B::a << std::endl;
    std::cout << "B::C::a : " << B::C::a << std::endl;
    B::func();
    B::func2();

    std::cout << a << std::endl;

    std::cout << shortName::a << std::endl;

    /**
     * using编译指令，使得整个命名空间B中的标识符可用
    */
    using namespace B;
    func();

    /**
     * using声明， using 声明碰到函数重载（相同函数名），using则声明了所有的重载函数
    */
    using B::func2;
    func2();

}