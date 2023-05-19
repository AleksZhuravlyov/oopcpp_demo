#ifndef REALISATION_C_H
#define REALISATION_C_H

#include <string>
#include <ostream>

#include "A.h"


class C {

public:
    C(A &a, const std::string &data);

    virtual ~C();

    void process();

    friend std::ostream &operator<<(std::ostream &out, const C &c);

    A &_a;

private:

    std::string _data;

};


#endif //REALISATION_C_H
