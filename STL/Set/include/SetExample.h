#ifndef SET_EXAMPLE_H
#define SET_EXAMPLE_H

#include <set>
#include <iostream>

class SetExample {
private:
    std::set<int> numbers_;

public:
    SetExample();
    ~SetExample();

    void addInitialValues();
    void addUserValues();
    void displayValues() const;
    void removeValue();
};

#endif
