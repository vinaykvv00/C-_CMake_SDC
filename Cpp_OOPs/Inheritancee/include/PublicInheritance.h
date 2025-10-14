#pragma once
#include "BaseClass.h"

class PublicInheritance : public BaseClass 
{
public:
    PublicInheritance();
    ~PublicInheritance() override;

    void display() const;
};