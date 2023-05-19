#include "A.h"
#include "B.h"


A::A(const std::string &data) : B(data) {}

A::~A() {}


void A::process() {
    setData( "changed by a");
}

