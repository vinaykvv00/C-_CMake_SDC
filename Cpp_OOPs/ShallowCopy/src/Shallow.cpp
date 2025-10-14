#include "Shallow.h"

Shallow::Shallow(int value) : data_(new int(value)) {
    std::cout << "Constructor called. Allocated " << *data_  << " at address " << data_ << std::endl;
}

Shallow::~Shallow() {
    std::cout << "Destructor called, deleting value " << *data_  << " from address " << data_ << std::endl;
    delete data_;
}

void Shallow::set(int value) {
    *data_ = value;
}

int Shallow::get() const {
    return *data_;
}
