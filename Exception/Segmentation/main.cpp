#include <iostream>
#include "UnsafeExample.h"
#include "SafeExample.h"

int main()
{
    std::cout << " Segmentation Fault Demonstration \n";

    UnsafeExample unsafe;
    SafeExample safe;

    while (true)
    {
        int choice;
        std::cout << "\nChoose demo type:\n";
        std::cout << "1. Unsafe - Null Pointer\n";
        std::cout << "2. Unsafe - Out of Bounds\n";
        std::cout << "3. Unsafe - Use After Delete\n";
        std::cout << "4. Safe - Null Pointer\n";
        std::cout << "5. Safe - Out of Bounds\n";
        std::cout << "6. Safe - Use After Delete\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;

        if (choice == 0)
        {
            std::cout << "Exiting program.\n";
            break;
        }

        switch (choice)
        {
        case 1:
            unsafe.nullPointerDemo();
            break;
        case 2:
            unsafe.outOfBoundsDemo();
            break;
        case 3:
            unsafe.useAfterDeleteDemo();
            break;
        case 4:
            safe.nullPointerSafe();
            break;
        case 5:
            safe.outOfBoundsSafe();
            break;
        case 6:
            safe.useAfterDeleteSafe();
            break;
        default:
            std::cout << "Invalid choice.\n";
        }
    }

   return 0;
}
