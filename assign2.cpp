#include <iostream>
using namespace std;

int main() {
    int number, res;
    cout << "Enter a 3-digit number: ";
    cin >> number;

    res = (number % 10) * 100 + ((number / 10) % 10) * 10 + (number / 100);
    cout << "Reversed number: " << res << endl;
    return 0;
}