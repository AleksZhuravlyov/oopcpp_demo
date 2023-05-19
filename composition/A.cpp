#include <string>
#include <ostream>

#include "A.h"
#include "B.h"

void A::process() {

}

A::A(const std::string &data, const std::string &dataB) : _data(data), _b(B(dataB)) {}


A::~A() {}


std::ostream &operator<<(std::ostream &out, const A &a) {
    out << a._data;
    return out;
}
