#include <iostream>
#include <memory>

class UDT
{
public:
    UDT() { std::cout << "UDT Created\n"; }
    ~UDT() { std::cout << "UDT Destroyed\n"; }
};

int main()
{
    std::weak_ptr<UDT> ptr2;
    {
        std::shared_ptr<UDT> ptr1 = std::make_shared<UDT>();
        {

            ptr2 = ptr1;
            std::cout << "(inside scope) use count = " << ptr2.use_count() << "\n";
        }
        std::cout << " use count = " << ptr2.use_count() << "\n";
    }

     std::cout << " outside scope use count = " << ptr2.use_count() << "\n";
    std::cout << "Is weak_ptr object valid= " << !ptr2.expired() << "\n";
    std::cout << "We should see the destructor call before this line\n";

    return 0;
}
