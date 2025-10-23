#ifndef DEMO_H
#define DEMO_H

#include <iostream>
#include <string>
#include <memory>

class Demo {
private:
    std::string name_;

public:
    Demo(const std::string& name);
    ~Demo();

    void show() const;
};

#endif
