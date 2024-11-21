#include <iostream>
using namespace std;

int main() {
    double total, discount;
    cout << "Enter amount: ";
    cin >> total;

    if (total > 1000)
        discount = 0.15;
    else if (total >= 500)
        discount = 0.10;
    else if (total >= 100)
        discount = 0.05;
    double finalPrice = total - (total * discount);
    cout << "Final Price after discount: " << finalPrice << endl;
    return 0;
}
