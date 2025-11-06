#include <iostream>
void CauseSegfault() {
    int* ptr = nullptr;  
    *ptr = 10;          
}

void TempFunction() {
    
    CauseSegfault();
}

int main() {
    std::cout << "Program started.\n";
    TempFunction();     
    std::cout << "Program ended.\n";  
    return 0;
}
