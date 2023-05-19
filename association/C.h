#ifndef ASSOCIATION_C_H
#define ASSOCIATION_C_H

#include <string>
#include <ostream>

#include "B.h"


class C {

public:

    C(B &b, const std::string &data);

    virtual ~C();

    void process();

    friend std::ostream &operator<<(std::ostream &out, const C &c);

    B &_b;

private:

    std::string _data;

};


#endif //ASSOCIATION_C_H
