#pragma once

#pragma once
#include "MyDllApi.h"

class MYDLL_API MyClass {
public:
    MyClass();
    void SayHello();
};


extern "C" void MYDLL_API  test();

extern "C" void MYDLL_API highfive();