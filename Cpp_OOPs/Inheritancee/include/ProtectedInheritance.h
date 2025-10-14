#pragma once
#include "BaseClass.h"

class ProtectedInheritance : protected BaseClass {
public:
    ProtectedInheritance();
    ~ProtectedInheritance() override;
    
    void display() const;
};