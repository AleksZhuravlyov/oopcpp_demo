#ifndef DEPENDENCY_B_H
#define DEPENDENCY_B_H

#include <string>
#include <ostream>

class B {

public:

    explicit B(const std::string &data);

    virtual ~B();

    void process();

    friend std::ostream &operator<<(std::ostream &out, const B &b);

private:

    std::string _data;

};


#endif //DEPENDENCY_B_H
