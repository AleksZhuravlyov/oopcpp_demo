#include <iostream>

#include "A.h"
#include "B.h"
#include "C.h"

int main() {

    B b("dataB");
    C c(b, "dataC");
    A a(b, "dataA");
    c.process();

    std::cout << "b: " << b << std::endl;
    std::cout << "a.b: " << a._b << std::endl;
    std::cout << "c.b: " << c._b << std::endl;

    return 0;
}