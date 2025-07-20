#include <iostream>
#include "MyClass.h"

MyClass::MyClass() {}

void MyClass::SayHello() {
    std::cout << "Hello from MyDll!" << std::endl;
    std::cout << "Hello from MyDll!" << std::endl;
    std::cout << "Hello from MyDll!" << std::endl;
    std::cout << "Hello from MyDll!" << std::endl;
    std::cout << "Hello from MyDll!" << std::endl;
}

void test()
{
    std::cout << "Hello test from MyDll!" << std::endl;
    std::cout << "Hello test from MyDll!" << std::endl;
}


void highfive() {
    std::cout << "Hello highfive from MyDll!" << std::endl;
    std::cout << "Hello highfive from MyDll!" << std::endl;
}