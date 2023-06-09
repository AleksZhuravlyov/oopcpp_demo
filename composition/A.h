#ifndef COMPOSITION_A_H
#define COMPOSITION_A_H

#include <string>
#include <ostream>

#include "B.h"


class A {

public:

    A(const std::string &data, const std::string &dataB);

    virtual ~A();

    void process();

    friend std::ostream &operator<<(std::ostream &out, const A &a);

    B _b;

private:

    std::string _data;

};


#endif //COMPOSITION_A_H
