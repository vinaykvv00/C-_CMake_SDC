#ifndef VECTOR_EXAMPLE_H
#define VECTOR_EXAMPLE_H

#include <vector>

class VectorExample {
public:
    VectorExample();              
    ~VectorExample();            

    void initializeVector();      
    void inputFromUser();        
    void displayVector() const;   
    void modifyElement();         
    void removeLast();            
    void showCommonInfo() const;  

private:
    std::vector<int> numbers_;    
};

#endif
