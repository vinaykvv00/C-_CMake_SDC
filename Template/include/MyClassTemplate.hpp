#ifndef MY_CLASS_TEMPLATE_H
#define MY_CLASS_TEMPLATE_H

#include <iostream>
#include <string>

template <typename T>
class MyClassTemplate {
private:
    T value_;

public:
    MyClassTemplate();                         
    explicit MyClassTemplate(const T& value); 
    ~MyClassTemplate();                         

    void setValue(const T& value);
    T getValue() const;
    void display() const;
};

template <typename T>
MyClassTemplate<T>::MyClassTemplate() : value_{} {
    std::cout << "Default constructor called." << std::endl;
}

template <typename T>
MyClassTemplate<T>::MyClassTemplate(const T& value) : value_{value} {
    std::cout << "Parameterized constructor called." << std::endl;
}

template <typename T>
MyClassTemplate<T>::~MyClassTemplate() = default;

template <typename T>
void MyClassTemplate<T>::setValue(const T& value) {
    value_ = value;
}

template <typename T>
T MyClassTemplate<T>::getValue() const {
    return value_;
}

template <typename T>
void MyClassTemplate<T>::display() const {
    std::cout << "Value: " << value_ << std::endl;
}

#endif 
