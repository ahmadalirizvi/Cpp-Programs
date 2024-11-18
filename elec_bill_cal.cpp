#include<iostream>
using namespace std;

int main(){
    int units_used, unit, res;
    cout << "Please enter unit used \n";
    cin >> units_used;
    unit = 45;

    res = units_used * unit;
    cout << "Your total bill is" << res <<"rupees"<< endl;
    
    return 0;
}