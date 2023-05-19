#include "B.h"

#include <string>
#include <ostream>

B::B(const std::string &data) : _data(data) {}

B::~B() {}


std::string B::process() {
    return _data;
}

std::ostream &operator<<(std::ostream &out, const B &b) {
    out << b._data;
    return out;
}
