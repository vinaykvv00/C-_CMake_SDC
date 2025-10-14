#include "ComplexNumber.h"

ComplexNumber::ComplexNumber(double real, double imag) : real_(real), imag_(imag) {
    std::cout << "ComplexNumber initialized: " << real_ << " + " << imag_ << "i" << std::endl;
}

ComplexNumber::~ComplexNumber() {
    std::cout << "ComplexNumber destroyed: " << real_ << " + " << imag_ << "i" << std::endl;
}

ComplexNumber ComplexNumber::operator+(const ComplexNumber& other) const {
    double realResult = real_ + other.real_;
    double imagResult = imag_ + other.imag_;
    return ComplexNumber(realResult, imagResult);
}

ComplexNumber ComplexNumber::operator*(const ComplexNumber& other) const {
    double realResult = (real_ * other.real_) - (imag_ * other.imag_);
    double imagResult = (real_ * other.imag_) + (imag_ * other.real_);
    return ComplexNumber(realResult, imagResult);
}

void ComplexNumber::display() const {
    std::cout << real_ << " + " << imag_ << "i" << std::endl;
}
