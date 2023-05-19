#include "B.h"

B::B(const std::string &data) : _data(data) {}

B::~B() {}


void B::process() {
    _data = "changed by b";
}

std::ostream &operator<<(std::ostream &out, const B &b) {
    out << b._data;
    return out;
}

