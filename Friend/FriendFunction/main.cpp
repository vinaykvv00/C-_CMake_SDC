#include <iostream>
#include "Alpha.h"
#include "Beta.h"

int main() {

    Alpha alphaObj(100, 200, 300);
    Beta betaObj;

    ShowAlphaValues(alphaObj); 

    std::cout << "\n Member Function of Another Class Access:\n";
    betaObj.ShowAlphaSecret(alphaObj); 
    return 0;
}
