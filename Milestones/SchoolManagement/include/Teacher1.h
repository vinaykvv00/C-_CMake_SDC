#pragma once
#include "Person1.h"
#include <string>

class Teacher1 : public Person1 {
private:
    std::string subject_;
public:
    Teacher1(const std::string& name, int age, const std::string& subject);
    ~Teacher1() override;
    std::string getSubject() const;
    void displayInfo() const override;
};
