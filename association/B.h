#ifndef ASSOCIATION_B_H
#define ASSOCIATION_B_H

#include <string>
#include <ostream>

class B {

public:

    explicit B(const std::string &data);

    virtual ~B();

    void process();

    friend std::ostream &operator<<(std::ostream &out, const B &b);

    const std::string &getData() const;

    void setData(const std::string &data);

private:

    std::string _data;

};


#endif //ASSOCIATION_B_H
