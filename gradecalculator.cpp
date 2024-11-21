#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter your marks: ";
    cin >> score;

    if (score >= 90 && score <= 100)
        cout << "Grade: A" << endl;
    else if (score >= 80 && score < 90)
        cout << "Grade: B" << endl;
    else if (score >= 70 && score < 80)
        cout << "Grade: C" << endl;
    else if (score >= 60 && score < 70)
        cout << "Grade: D" << endl;
    else if (score < 60)
        cout << "Grade: F" << endl;
    else 
        cout << "Enter marks between 0-100";
    return 0;
}
