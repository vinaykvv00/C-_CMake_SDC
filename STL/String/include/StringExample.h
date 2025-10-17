#ifndef STRINGEXAMPLE_H
#define STRINGEXAMPLE_H

#include <iostream>
#include <string>

class StringExample {
private:
    std::string text_;

public:

    StringExample();
    ~StringExample();


    void inputString();
    void displayBasicOperations() const;
    void modifyString();
    void iterateString() const;
    void searchSubstring() const;
};

#endif 
