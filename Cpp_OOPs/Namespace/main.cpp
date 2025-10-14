#include "MathCalculator.h"
#include "PhysicsCalculator.h"
#include <iostream>

int main() {
 
    Math::Calculator mathCalc;
    Physics::Calculator physicsCalc;

    std::cout << "\nUsing Math::Calculator\n";
    std::cout << "Add(3, 5) = " << mathCalc.add(3, 5) << "\n";
    std::cout << "Multiply(4, 6) = " << mathCalc.multiply(4, 6) << "\n";

    std::cout << "\nUsing Physics::Calculator\n";
    std::cout << "Add(10N, 20N) = " << physicsCalc.add(10, 20) << " N\n";

    std::cout << "Both classes have 'add()', but no conflict — namespaces separate them.\n";

    return 0;
}
