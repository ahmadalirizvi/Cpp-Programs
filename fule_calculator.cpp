#include<iostream>
using namespace std;

int main(){
    double distance, fule, average;
    cout << "Enter Distance in KM: \n";
    cin >> distance;
    cout << "Enter Distance in liters of fule used: \n";
    cin >> fule;

    average = distance / fule;

    cout << "Your fule average is: \n";
    cout << average << " KM in 1 liter";
    return 0;
}