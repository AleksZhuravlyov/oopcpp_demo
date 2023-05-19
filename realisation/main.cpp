#include <iostream>

#include "B.h"
#include "C.h"

int main() {

    B b("dataB");
    C c(b, "dataC");
    c._a.process();

    std::cout << "c: " << c << std::endl;

    std::cout << "b: " << b << std::endl;

    return 0;
}