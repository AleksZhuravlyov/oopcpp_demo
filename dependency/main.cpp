#include <iostream>

#include "A.h"
#include "B.h"

int main() {

    A a("");
    B b("dataB");
    a.process(b.process());

    std::cout << "b: " << b << std::endl;
    std::cout << "a: " << a << std::endl;

    return 0;
}