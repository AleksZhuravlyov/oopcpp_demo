#include "A.h"

#include <string>
#include <ostream>


A::A(const std::string &data) : _data(data) {}

A::~A() {}


void A::process(const std::string &data) {
    _data = data;
}

std::ostream &operator<<(std::ostream &out, const A &a) {
    out << a._data;
    return out;
}
