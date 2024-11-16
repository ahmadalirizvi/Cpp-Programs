#include <iostream>
using namespace std;

int main() {
    double radius, pi, surf;
    pi = 3.14;
    cout << "Enter the radius of the sphere: ";
    cin >> radius;

    surf = 4 * (pi * (radius * radius));
    cout << "Surface area of the sphere: " << surf << endl;
    return 0;
}
