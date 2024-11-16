#include <iostream>
using namespace std;
int main() {
   float a, b;
   cout << "Enter value of first numbers: ";
   cin >> a;
   
   cout << "Enter value of second numbers: ";
   cin >> b ;

   cout << "Original values are: a = " << a << ", b = " << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;
    
    cout << "Swapped values are: a = " << a << ", b = " << b << endl;
    return 0;

}