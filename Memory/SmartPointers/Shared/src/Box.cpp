#include "Box.h"

Box::Box(int width, int height) : width_(width), height_(height) {
    std::cout << "Box created: " << width_ << " x " << height_ << "\n";
}

Box::~Box() {
    std::cout << "Box destroyed: " << width_ << " x " << height_ << "\n";
}

void Box::showSize() const {
    std::cout << "Box size: " << width_ << " x " << height_ << "\n";
}
