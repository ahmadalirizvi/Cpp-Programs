#include <iostream>
using namespace std;

int main() {
    double radius, pi, circum;
    pi = 3.14;
    cout << "Enter the circumferance of the circle: ";
    cin >> radius;

    circum = 2 * (pi * radius);
    cout << "Circumferance of the circle: " << circum << endl;
    return 0;
}
