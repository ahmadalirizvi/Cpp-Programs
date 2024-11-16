#include <iostream>
using namespace std;

int main() {
    double radius, pi;
    pi = 3.14;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    float area = pi * radius * radius;
    cout << "Area of the circle: " << area << endl;
    return 0;
}
