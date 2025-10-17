#include "Box.h"
#include <iostream>
#include <memory>

int main() {
    std::unique_ptr<Box> b1 = std::make_unique<Box>(10, 20);
    b1->showSize();

    std::cout << "\n--- Transfer ownership to b2 ---\n\n";
    std::unique_ptr<Box> b2 = std::move(b1);
    // std::unique_ptr<Box> b3 = b2; 

    if (!b1)
    {
        std::cout << "b1 no longer owns the Box it points to null.\n";
    }
    b2->showSize();

    return 0;
}
