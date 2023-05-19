#include "B.h"

std::string B::process() {
    return _data;
}

B::B(const std::string &data) : _data(data) {}

B::~B() {}

std::ostream &operator<<(std::ostream &out, const B &b) {
    out << b._data;
    return out;
}
