#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter the three sides of the triangle\n";
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    if (a == b && b == c)
        cout << "Triangle Type: Equilateral" << endl;
    else if (a == b || b == c || a == c)
        cout << "Triangle Type: Isosceles" << endl;
    else
            cout << "Triangle Type: Scalene" << endl;
    return 0;
}
