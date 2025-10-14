#pragma once
#include "BaseClass.h"

class PrivateInheritance : private BaseClass {
public:
    PrivateInheritance();
    ~PrivateInheritance() override;

    void display() const;
};

