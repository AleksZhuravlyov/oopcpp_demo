#include <string>
#include <ostream>

#include "B.h"


B::B(const std::string &data) : _data(data) {}

B::~B() {}


void B::process() {}

std::ostream &operator<<(std::ostream &out, const B &b) {
    out << b._data;
    return out;
}

const std::string &B::getData() const {
    return _data;
}

void B::setData(const std::string &data) {
    _data = data;
}
