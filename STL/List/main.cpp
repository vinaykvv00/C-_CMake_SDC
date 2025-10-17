#include "ListExample.h"

int main() {
    ListExample list;

    list.initializeList();  
    list.displayList();

    list.inputFromUser();  
    list.displayList();

    list.sortAndReverse();   
    list.displayList();

    list.showInfo();        

    return 0;
}
