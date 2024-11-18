#include<iostream>
using namespace std;

int main(){
    double pound, euro, jyen, usd;
    cout << "Enter currience in USD: " << endl;
    cin >> usd;

    euro = usd * 0.92;
    jyen = usd * 148.45;
    pound = usd * 0.79;

    cout << "Your USD in \n \n";
    cout << "Japnease Yen: " << jyen << endl;
    cout << "Euro: " << euro << endl;
    cout << "Pound: " << pound << endl;
    
    return 0;
}