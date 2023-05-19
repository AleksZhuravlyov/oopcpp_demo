#ifndef DEPENDENCY_A_H
#define DEPENDENCY_A_H

#include <string>
#include <ostream>


class A {

public:

    explicit A(const std::string &data);

    virtual ~A();


    void process(const std::string &data);

    friend std::ostream &operator<<(std::ostream &out, const A &a);

private:

    std::string _data;

};


#endif //DEPENDENCY_A_H
