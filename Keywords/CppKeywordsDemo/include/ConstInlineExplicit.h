#ifndef CONSTINLINEEXPLICIT_H
#define CONSTINLINEEXPLICIT_H

#include <iostream>
#include <string>

class ConstInlineExplicit {
public:
    explicit ConstInlineExplicit(int value);
    ~ConstInlineExplicit();

    void showConstVariable() const;                    
    void printConstArgument(const std::string& text) const; 
    inline void inlineGreet(const std::string& name) const
    {
        std::cout << "Hello, " << name << " inline function function called\n";
    };     

private:
    int value_;
};

#endif
