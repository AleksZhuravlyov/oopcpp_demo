#include <string>
#include <ostream>

#include "A.h"
#include "B.h"


A::A(B &b, const std::string &data) : _b(b), _data(data) {}

A::~A() {}


void A::process() {}

std::ostream &operator<<(std::ostream &out, const A &a) {
    out << a._data;
    return out;
}
