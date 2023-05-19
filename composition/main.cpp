#include <iostream>

#include "A.h"
#include "B.h"

int main() {

    A a("dataB", "dataA");

    std::cout << "a: " << a << std::endl;
    std::cout << "a.b: " << a._b << std::endl;

    return 0;
}