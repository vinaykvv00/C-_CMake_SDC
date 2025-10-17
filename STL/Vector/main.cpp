#include "VectorExample.h"

int main() {
    VectorExample vec;

    vec.initializeVector();   
    vec.displayVector();    

    vec.inputFromUser();      
    vec.displayVector();      

    vec.modifyElement();     
    vec.displayVector();     

    vec.removeLast();         
    vec.displayVector();      

    vec.showCommonInfo();     

    return 0;
}
