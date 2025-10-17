#ifndef LIST_EXAMPLE_H
#define LIST_EXAMPLE_H

#include <list>

class ListExample {
public:
    ListExample();                 
    ~ListExample();                

    void initializeList();         
    void inputFromUser();          
    void displayList() const;                   
    void sortAndReverse();         
    void showInfo() const;       

private:
    std::list<int> numbers_;       
};

#endif
