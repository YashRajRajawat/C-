#include <iostream>
using namespace std;

class Box {
    double length;
    double width;
    double height;

public:
    Box(double l = 0.0, double w = 0.0, double h = 0.0) : length(l), width(w), height(h) {}

    friend double getVolume(Box box);
    friend void setDimensions(Box &box, double l, double w, double h);
    void display() {
        cout << "Length: " << length << ", Width: " << width << ", Height: " << height << endl;
    }
};

double getVolume(Box box) {
    return box.length * box.width * box.height;
}

void setDimensions(Box &box, double l, double w, double h) {
    box.length = l;
    box.width = w;
    box.height = h;
}

int main() {
    Box myBox(3.0, 4.0, 5.0);
    myBox.display();
    cout << "Volume of myBox: " << getVolume(myBox) << endl;

    setDimensions(myBox, 6.0, 7.0, 8.0);
    myBox.display();
    cout << "New volume of myBox: " << getVolume(myBox) << endl;

    return 0;
}
