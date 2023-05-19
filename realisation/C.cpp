#include "C.h"


C::C(A &a, const std::string &data) : _a(a), _data(data) {}

C::~C() {}


void C::process() {}

std::ostream &operator<<(std::ostream &out, const C &c) {
    out << c._data;
    return out;
}