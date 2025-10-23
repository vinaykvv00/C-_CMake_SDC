#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<int> sp = std::make_shared<int>(42);
    std::weak_ptr<int> wp = sp;

    std::cout << "sp use_count: " << sp.use_count() << "\n"; 
    std::cout << "wp expired: " << wp.expired() << "\n";     

    sp.reset(); 

    std::cout << "After sp.reset():\n";
    std::cout << "sp use_count: " << sp.use_count() << "\n"; 
    std::cout << "wp expired: " << wp.expired() << "\n";    

    wp.reset();

    std::cout << "After wp.reset():\n";
    std::cout << "wp expired: " << wp.expired() << "\n";     
}
