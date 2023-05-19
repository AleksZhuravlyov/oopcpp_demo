#include "A.h"

void A::process(const std::string &data) {
    _data = data;
}

A::A(const std::string &data) : _data(data) {}

A::~A() {}


std::ostream &operator<<(std::ostream &out, const A &a) {
    out << a._data;
    return out;
}
