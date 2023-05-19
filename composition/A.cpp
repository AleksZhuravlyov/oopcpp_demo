#include <string>
#include <ostream>

#include "A.h"
#include "B.h"

A::A(const std::string &dataB, const std::string &data) : _b(B(dataB)), _data(data) {}

A::~A() {}


void A::process() {}

std::ostream &operator<<(std::ostream &out, const A &a) {
    out << a._data;
    return out;
}
