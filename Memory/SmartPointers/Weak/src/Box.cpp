#include "Box.h"

Box::Box(int size) : size_(size) {
    std::cout << "Box constructed with size: " << size_ << std::endl;
}

Box::~Box() {
    std::cout << "Box destructed with size: " << size_ << std::endl;
}

void Box::setSize(int size) {
    size_ = size;
}

int Box::getSize() const {
    return size_;
}
