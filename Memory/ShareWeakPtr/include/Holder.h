#ifndef HOLDER_H
#define HOLDER_H

#include <memory>
#include "Demo.h"

class Holder {
private:
    std::shared_ptr<Demo> sharedDemo;  
    std::weak_ptr<Demo> weakDemo;     

public:
    Holder();
    ~Holder();

    void createDemo(const std::string& name);
    void shareDemo(std::shared_ptr<Demo> demo);
    void showStatus() const;
};

#endif
