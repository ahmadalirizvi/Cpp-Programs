#include <iostream>
using namespace std;

int main() {
    int minutes, hours, rmin;
    cout << "Enter the number in minutes: ";
    cin >> minutes;

     hours = minutes / 60;
     rmin = minutes % 60;

    cout << "Time: " << hours << " hours and " << rmin << " minutes." << endl;
    return 0;
}