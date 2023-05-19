#include <string>
#include <ostream>

#include "C.h"
#include "B.h"


C::C(B &b, const std::string &data) : _b(b), _data(data) {}

C::~C() {}


void C::process() {
    _b.setData("changed by c");
}

std::ostream &operator<<(std::ostream &out, const C &c) {
    out << c._data;
    return out;
}
