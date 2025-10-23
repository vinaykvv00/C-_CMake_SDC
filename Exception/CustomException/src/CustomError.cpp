#include "CustomError.h"
#include <iostream>

CustomError::CustomError(const std::string &message) : message_(message) {
    std::cout << "CustomError created with message: " << message_ << "\n";
}

const char* CustomError::what() const noexcept {
    return message_.c_str();
}