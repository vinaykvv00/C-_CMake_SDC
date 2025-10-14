#pragma once
#include <iostream>

class Friend; 
class Geeks {
private:
    int privateVariable_;     
protected:
    int protectedVariable_;   

public:
    Geeks();
    ~Geeks();
    friend class Friend;
};
