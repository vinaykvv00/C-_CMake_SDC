#include <iostream>
#include "SetExample.h"

int main() {
    SetExample demo;

    demo.addInitialValues();
    demo.displayValues();

    demo.addUserValues();
    demo.displayValues();

    demo.removeValue();
    demo.displayValues();

    return 0;
}
