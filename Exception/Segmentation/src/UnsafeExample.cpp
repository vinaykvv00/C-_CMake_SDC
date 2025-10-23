#include "UnsafeExample.h"

UnsafeExample::UnsafeExample() {
    std::cout << "UnsafeExample constructor  created\n";
}

UnsafeExample::~UnsafeExample() {
    std::cout << "UnsafeExample destructor destroyed\n";
}

void UnsafeExample::nullPointerDemo() {
    std::cout << "\n  Null Pointer  \n";
    int* ptr = nullptr;
    std::cout << "About to access nullptr...\n";
   try{
     *ptr = 10; 
   }
   catch(...){
     std::cout << "Caught exception while accessing nullptr.\n";
   }
}

void UnsafeExample::outOfBoundsDemo() {
    std::cout << "\n  Out of Bounds  \n";
    int arr[3] = {1, 2, 3};
    std::cout << "Trying to write to arr[1000000]...\n";
    arr[1000000] = 42; 
    std::cout << "arr[1000000] = " << arr[1000000] << "\n";
}

void UnsafeExample::useAfterDeleteDemo() {
std::cout << "\n  Use After Delete \n";
    int* num = new int(100);
    std::cout << "Allocated value: " << *num << "\n";

    delete num;
    num = nullptr; 
    std::cout << "Trying to access deleted (nullptr) memory...\n";
    std::cout << *num << "\n"; 
}
