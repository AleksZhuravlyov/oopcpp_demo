#ifndef REALISATION_B_H
#define REALISATION_B_H

#include <string>
#include <ostream>

#include "A.h"

class B: public A{

public:

    explicit B(const std::string &data);

    virtual ~B();

    void process() final;

    friend std::ostream &operator<<(std::ostream &out, const B &b);

private:

    std::string _data;

};


#endif //REALISATION_B_H
