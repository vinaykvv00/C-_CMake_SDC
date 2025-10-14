#include "ConstInlineExplicit.h"
#include <iostream>

ConstInlineExplicit::ConstInlineExplicit(int value) : value_(value) {
    std::cout << "ConstInlineExplicit Object created with value = " << value_ << "\n";
}

ConstInlineExplicit::~ConstInlineExplicit() {
    std::cout << "ConstInlineExplicit Object destroyed\n";
}

void ConstInlineExplicit::showConstVariable() const {
    const int constantNumber = 42;  
    std::cout << "Const variable (constantNumber) = " << constantNumber << "\n";
    // constantNumber = 100;
}

void ConstInlineExplicit::printConstArgument(const std::string &text) const
{
    std::cout << "Const argument received: " << text << "\n";
    // text += "!";
}

// inline ConstInlineExplicit::inlineGreet(const std::string& name) const {
//     std::cout << "Hello, " << name << " inline function function called\n";
// }
