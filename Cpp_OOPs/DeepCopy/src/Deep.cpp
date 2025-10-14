#include "Deep.h"

Deep::Deep(int value) : data_(new int(value)) {
    std::cout << "Constructor called. Allocated " << *data_  << " at address " << data_ << std::endl;
}

Deep::Deep(const Deep& other) : data_(new int(*other.data_)) { 
    std::cout << "Deep Copy Constructor called. Copied value " << *data_  << " from address " << other.data_  << " to new address " << data_ << std::endl;
}

Deep& Deep::operator=(const Deep& other) {
    if (this == &other) {
        return *this; 
    }
    std::cout << "Deep Copy Assignment Operator called.\n";
    delete data_;
    data_ = new int(*other.data_);
    return *this;
}

Deep::~Deep() {
    std::cout << "Destructor called, deleting value " << *data_  << " from address " << data_ << std::endl;
    delete data_;
}

void Deep::set(int value) {
    *data_ = value;
}

int Deep::get() const {
    return *data_;
}
