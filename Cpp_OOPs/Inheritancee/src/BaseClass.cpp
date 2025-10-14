#include "BaseClass.h"

BaseClass::BaseClass() : publicValue_(10), protectedValue_(20), privateValue_(30)
{
    std::cout << "BaseClass Constructor called\n";
}

BaseClass::~BaseClass()
{
    std::cout << "BaseClass Destructor called\n";
}

int BaseClass::getPrivateValue() const
{
    return privateValue_;
}

void BaseClass::showBaseValues() const
{
    std::cout << "BaseClass Values- Public: " << publicValue_ << ", Protected: " << protectedValue_ << ", Private: " << privateValue_ << std::endl;
}
