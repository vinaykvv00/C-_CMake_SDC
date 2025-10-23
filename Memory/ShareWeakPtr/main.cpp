#include "Holder.h"
#include <iostream>

int main() {
    {
        Holder holder;
        holder.createDemo("SharedObject");

        std::shared_ptr<Demo> sp1 = std::make_shared<Demo>("ExternalObject");
        std::shared_ptr<Demo> sp2 = sp1; 

        std::cout << "sp1 use_count = " << sp1.use_count() << std::endl;
        std::cout << "sp2 use_count = " << sp2.use_count() << std::endl;

        std::weak_ptr<Demo> wp = sp1; 
        std::cout << "Weak ptr expired? " << wp.expired() << std::endl;

        holder.shareDemo(sp1);  
        holder.showStatus();

        sp1.reset(); 
        std::cout << "After sp1.reset(): sp2 use_count = " << sp2.use_count() << std::endl;

        holder.showStatus();

        sp2.reset();
        std::cout << "After sp2.reset(), external Demo destroyed.\n";

        holder.showStatus(); 
    }
    return 0;
}
