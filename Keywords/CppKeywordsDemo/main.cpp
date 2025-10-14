#include "ConstInlineExplicit.h"
#include "StaticConstexprAuto.h"
#include <iostream>


int main() {

    ConstInlineExplicit obj1(25);
    obj1.showConstVariable();
    obj1.printConstArgument("Read-only text");
    obj1.inlineGreet("Vinay");

    // ConstInlineExplicit obj2 = 10; // 

    StaticConstexprAuto::resetInstanceCount();

    StaticConstexprAuto a(5);
    StaticConstexprAuto b(10);

    StaticConstexprAuto::showInstanceCount();
    a.demonstrateConstexpr();
    b.demonstrateAuto();

    return 0;
}