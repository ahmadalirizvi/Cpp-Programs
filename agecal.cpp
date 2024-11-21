#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age < 13)
        cout << "Category: Child" << endl;
    else if (age >= 13 && age <= 19)
        cout << "Category: Teenager" << endl;
    else if (age >= 20 && age <= 59)
        cout << "Category: Adult" << endl;
    else
        cout << "Category: Senior" << endl;
    return 0;
}
