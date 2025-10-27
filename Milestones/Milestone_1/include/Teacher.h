#pragma once
#include "Person.h"
#include <string>

class Teacher : public Person {
private:
    std::string subject_;
public:
    Teacher(const std::string& name, int age, const std::string& subject);
    ~Teacher() override;
    std::string getSubject() const;
    void displayInfo() const override;
};
