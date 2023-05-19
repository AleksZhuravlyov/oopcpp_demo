#ifndef ASSOCIATION_A_H
#define ASSOCIATION_A_H

#include <string>
#include <ostream>

#include "B.h"


class A {

public:

    A(B &b, const std::string &data);

    virtual ~A();

    void process();

    friend std::ostream &operator<<(std::ostream &out, const A &a);

    B &_b;

private:

    std::string _data;

};


#endif //ASSOCIATION_A_H
