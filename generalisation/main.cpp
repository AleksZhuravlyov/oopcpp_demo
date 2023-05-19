#include <iostream>

#include "A.h"
#include "B.h"

int main(){

    A a("data");
    a.process();

    std::cout << a << std::endl;

    return 0;
}