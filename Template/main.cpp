#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <utility>
#include "MyClassTemplate.hpp"
#include "MyFunctionTemplate.hpp"
#include "TMPFactorial.hpp"

int main() {
    std::cout << "Function Template Example" << std::endl;
    std::cout << "Add int: " << addValues(5, 10) << std::endl;
    std::cout << "Add double: " << addValues(2.5, 3.7) << std::endl;
    std::cout << "Add string: " << addValues(std::string("Hello "), std::string("Templates")) << std::endl;

    std::cout << "\n Class Template Example " << std::endl;
    MyClassTemplate<int> intObj(42);
    intObj.display();

    MyClassTemplate<std::string> strObj("Generic C++");
    strObj.display();

    std::cout << "\n Template Metaprogramming Example " << std::endl;
    std::cout << "Factorial<5> = " << TMPFactorial<5>::value << std::endl;
    std::cout << "Factorial<10> = " << TMPFactorial<10>::value << std::endl;

    std::cout << "\n Lambda Function " << std::endl;

    auto greet = [](){ 
        std::cout << "Hello from a basic lambda" << std::endl; 
    };
    greet();

    auto add = [](int a, int b){ return a + b; };
    std::cout << " adding 2 number= " << add(3,4) << std::endl;

    auto genericAdd = [](auto a, auto b){ return a + b; };
    std::cout << "genericAdd for int = " << genericAdd(2,5) << std::endl;
    std::cout << "genericAdd for float = " << genericAdd(2.5,1.3) << std::endl;
    std::cout << "genericAdd for string = " << genericAdd(std::string("Lam"), std::string("bda")) << std::endl;

    int x = 10; int y = 20;
    auto captureValue = [x,y](){ std::cout << "captureValue x+y=" << (x+y) << std::endl; };
    auto captureRef   = [&x,&y](){ std::cout << "captureRef x+y=" << (x+y) << std::endl; };
    x = 100; y = 200;
    captureValue();   
    captureRef();    

    return 0;
}
