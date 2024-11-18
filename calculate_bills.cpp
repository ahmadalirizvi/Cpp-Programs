#include<iostream>
using namespace std;

int main(){
    double item_1, item_2, item_3, sub, total, tax;
    cout<< "Enter price of 1st item \n ";
    cin >> item_1;
    cout<< "Enter price of 2st item \n ";
    cin >> item_2;
    cout<< "Enter price of 3st item \n ";
    cin >> item_3;

    sub = item_1 + item_2 + item_3;
    tax = sub * 8/100;
    total = sub + tax;

    cout<< "SUB TOTAL: " << sub << endl;
    cout<< "8% TAX: " << tax << endl;
    cout<< "TOTAL: " << total;
    
    return 0;
}
