#ifndef GENERALISATION_A_H
#define GENERALISATION_A_H

#include <string>
#include <ostream>

#include "B.h"


class A: public B {

public:

    A(const std::string &data);

    virtual ~A();

    void process();

};


#endif //GENERALISATION_A_H
