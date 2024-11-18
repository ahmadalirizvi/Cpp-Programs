#include<iostream>
using namespace std;

int main(){
    int price, discount, dis_price;
    cout << "Please enter oiginal price \n";
    cin >> price;
    cout << "Please enter discount % \n";
    cin >> discount;

    dis_price = price - (price * discount/100);
    cout << "Discounted price is\n";
    cout << dis_price << "rupees";

    return 0;
}