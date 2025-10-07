#include <iostream>
using namespace std;

class Box {
private:
    double length;
    double width;

public:
    Box() {
        length = 0;
        width = 0;
    }

    Box(double l, double w) {
        length = l;
        width = w;
    }

    Box operator+(const Box& b) {
        Box temp;
        temp.length = this->length + b.length;
        temp.width = this->width + b.width;
        return temp;
    }

    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }
};

int main() {
    Box box1(3, 4);
    Box box2(5, 6);

    Box box3 = box1 + box2; // Calls overloaded operator+
    box3.display();

    return 0;
}
