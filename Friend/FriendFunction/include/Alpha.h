#ifndef ALPHA_H
#define ALPHA_H

#include <iostream>

class Beta;
class Alpha {
private:
    int privateValue_;
    int protectedValue_;

protected:
    int secretValue_;

public:
    Alpha(int value1 = 10, int value2 = 20, int value3 = 30);
    ~Alpha();

    friend void ShowAlphaValues(const Alpha& obj);
    friend class Beta;
};

#endif